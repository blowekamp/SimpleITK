/*=========================================================================
*
*  Copyright Insight Software Consortium
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*         http://www.apache.org/licenses/LICENSE-2.0.txt
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
*
*=========================================================================*/
#ifdef _MFC_VER
#pragma warning(disable:4996)
#endif

#include "sitkImageSeriesReader.h"

#include <itkImageIOBase.h>
#include <itkImageSeriesReader.h>

#include "itkGDCMSeriesFileNames.h"

namespace itk {
  namespace simple {

    Image ReadImage ( const std::vector<std::string> &filenames ) {
      ImageSeriesReader reader;
      return reader.SetFileNames ( filenames ).Execute();
    }


  std::vector<std::string> ImageSeriesReader::GetGDCMSeriesFileNames( const std::string &directory,
                                                                      bool useSeriesDetails,
                                                                      bool recursive,
                                                                      bool loadSequences,
                                                                      bool loadPrivateTags )
  {
    GDCMSeriesFileNames::Pointer gdcmSeries = GDCMSeriesFileNames::New();

    gdcmSeries->SetInputDirectory( directory );
    gdcmSeries->SetUseSeriesDetails( useSeriesDetails );
    gdcmSeries->SetRecursive( recursive );
    gdcmSeries->SetLoadSequences( loadSequences );
    gdcmSeries->SetLoadPrivateTags( loadPrivateTags );

    gdcmSeries->Update();

    //gdcm->GetSeriesUIDS()
    return gdcmSeries->GetInputFileNames();
  }

    ImageSeriesReader::ImageSeriesReader() {

      // list of pixel types supported
      typedef NonLabelPixelIDTypeList PixelIDTypeList;

      this->m_MemberFactory.reset( new detail::MemberFunctionFactory<MemberFunctionType>( this ) );

      this->m_MemberFactory->RegisterMemberFunctions< PixelIDTypeList, 3 > ();
      this->m_MemberFactory->RegisterMemberFunctions< PixelIDTypeList, 2 > ();
    }

    ImageSeriesReader& ImageSeriesReader::SetFileNames ( const std::vector<std::string> &filenames ) {
      this->m_FileNames = filenames;
      return *this;
    }

    const std::vector<std::string> &ImageSeriesReader::GetFileNames() const {
      return this->m_FileNames;
    }

    Image ImageSeriesReader::Execute () {
      // todo check if filename does not exits for robust error handling
      assert( !this->m_FileNames.empty() );

      PixelIDValueType type = sitkUnknown;
      unsigned int dimension = 0;

      this->GetPixelIDFromImageIO( this->m_FileNames.front(), type, dimension );

      // increment for series
      ++dimension;

      if (dimension == 4) {

	  unsigned int size = this->GetDimensionFromImageIO( this->m_FileNames.front(), 2);
	  if (size == 1)
	      --dimension;
      }

      if ( dimension != 2 && dimension != 3 )
        {
        sitkExceptionMacro( "The file in the series have unsupported " << dimension - 1 << " dimensions." );
        }

      if ( !this->m_MemberFactory->HasMemberFunction( type, dimension ) )
        {
        sitkExceptionMacro( << "PixelType is not supported!" << std::endl
                            << "Pixel Type: "
                            << GetPixelIDValueAsString( type ) << std::endl
                            << "Refusing to load! " << std::endl );
        }

      return this->m_MemberFactory->GetMemberFunction( type, dimension )();
    }

  template <class TImageType>
  Image
  ImageSeriesReader::ExecuteInternal( void )
  {

    typedef TImageType                        ImageType;
    typedef itk::ImageSeriesReader<ImageType> Reader;

    // if the IsInstantiated is correctly implemented this should
    // not occour
    assert( ImageTypeToPixelIDValue<ImageType>::Result != (int)sitkUnknown );
    typename Reader::Pointer reader = Reader::New();
    reader->SetFileNames( this->m_FileNames );
    reader->Update();
    return Image( reader->GetOutput() );
  }

  }
}
