#include <sitkImageFileReader.h>
#include <sitkImageFileWriter.h>
#include <sitkHashImageFilter.h>
#include <sitkCastImageFilter.h>
#include <sitkSubtractImageFilter.h>
#include <sitkStatisticsImageFilter.h>
#include <sitkExtractImageFilter.h>
#include <memory>

#include "ImageCompare.h"
#include "itkExceptionObject.h"
ImageCompare::ImageCompare() {
  mTolerance = 0.0;
  mMessage = "";
}

bool ImageCompare::compare ( const itk::simple::Image& image, std::string inTestCase, std::string inTag ) {
  itk::simple::Image centerSlice( 0, 0, itk::simple::sitkUInt8 );
  std::string testCase = inTestCase;
  std::string tag = inTag;
  std::string testName = ::testing::UnitTest::GetInstance()->current_test_info()->name();
  
  if ( testCase == "" ) {
    testCase = ::testing::UnitTest::GetInstance()->current_test_info()->test_case_name();
  }

  std::cout << "Starting image compare on " << testCase << "_" << testName << "_" << tag << std::endl;
  // Does the baseline exist?
  std::string extension = ".nrrd";
  std::string OutputDir = dataFinder.GetOutputDirectory();
  
  std::string name = testCase
    .append( "_" )                                                        
    .append(testName)
    .append("_")
    .append ( tag );

  // Extract the center slice of our image
  if ( image.GetDimension() == 3 )
    {
    size_t centerIdx = (int)( image.GetDepth() / 2.0 );
    centerSlice = itk::simple::ExtractImageFilter().Execute ( image, centerIdx, 2 );
    } else {
    centerSlice = itk::simple::Cast ( image, image.GetPixelIDValue() );
  }

  std::string baselineFileName = dataFinder.GetSourceDirectory() + "/Testing/Data/Baseline/" + name + extension;
  
  if ( !itksys::SystemTools::FileExists ( baselineFileName.c_str() ) ) {
    // Baseline does not exist, write out what we've been given
    std::string newBaselineDir = OutputDir + "/Newbaseline/";
    itksys::SystemTools::MakeDirectory ( newBaselineDir.c_str() );
    std::cout << "Making directory " << newBaselineDir << std::endl;
    std::string newBaseline = newBaselineDir + name + extension;
    itk::simple::ImageFileWriter().SetFileName ( newBaseline ).Execute ( centerSlice );
    mMessage = "Baseline does not exist, wrote " + newBaseline + "\ncp " + newBaseline + " " + baselineFileName;
    return false;
  }

  itk::simple::Image baseline( 0, 0, itk::simple::sitkUInt8 );
  std::cout << "Loading baseline " << baselineFileName << std::endl;

  try {
    baseline = itk::simple::ImageFileReader().SetFileName ( baselineFileName ).Execute();
  } catch ( itk::ExceptionObject& e ) { 
    mMessage = "ImageCompare: Failed to load image " + baselineFileName + " because: " + e.what();
    return false;
  }

  // Do the diff
  itk::simple::HashImageFilter hasher;
  if ( hasher.Execute ( baseline ) == hasher.Execute ( centerSlice ) ) {
    // Nothing else to do
    return true;
  }
    
  if ( baseline.GetHeight() != centerSlice.GetHeight() 
       || baseline.GetWidth() != centerSlice.GetWidth() 
       || baseline.GetDepth() != centerSlice.GetDepth() ) {
    mMessage = "ImageCompare: Image dimensions are different";
    return false;
  }

  // Get the center slices
  itk::simple::Image diff( 0, 0, itk::simple::sitkUInt8 );
  try
    {
      diff = itk::simple::SubtractImageFilter().Execute ( centerSlice, baseline );
    }
  catch ( itk::ExceptionObject& e ) 
    { 
    mMessage = "ImageCompare: Failed to subtract image " + baselineFileName + " because: " + e.what();
    return false;
    }
  itk::simple::StatisticsImageFilter stats;
  stats.Execute ( diff );
  double dValue = sqrt ( stats.GetMean() );

  if ( fabs ( dValue ) > fabs ( mTolerance ) ) {
    std::ostringstream msg;
    msg << "ImageCompare: image Root Mean Square (RMS) difference was " << dValue << " which exceeds the tolerance of " << mTolerance;
    msg << "\n";
    mMessage = msg.str();

    std::cout << "<DartMeasurement name=\"RMSeDifference\" type=\"numeric/float\">" << dValue << "</DartMeasurement>" << std::endl;
    std::cout << "<DartMeasurement name=\"Tolerance\" type=\"numeric/float\">" << mTolerance << "</DartMeasurement>" << std::endl;

    std::string volumeName = OutputDir + "/" + name + ".nrrd";
    itk::simple::ImageFileWriter().SetFileName ( volumeName ).Execute ( centerSlice );

    return false;
  }

  return true;
}
