/*=========================================================================
 *
 *  Copyright NumFOCUS
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
#define SITK_TEMPLATE_EXPLICIT_EXPLICITITK
#include "sitkExplicitITKInPlaceImageFilter.h"
#undef SITK_TEMPLATE_EXPLICIT_EXPLICITITK
#include "sitkExplicitITK.h"

template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 2u>, itk::Image<float, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 2u>, itk::Image<int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 2u>, itk::Image<long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 2u>, itk::Image<short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 2u>, itk::Image<signed char, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<double, 2u>, itk::Image<std::complex<double>, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 2u>, itk::Image<unsigned char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 2u>, itk::Image<unsigned int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 2u>, itk::Image<unsigned long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 2u>, itk::Image<unsigned short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 3u>, itk::Image<float, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 3u>, itk::Image<int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 3u>, itk::Image<long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 3u>, itk::Image<short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 3u>, itk::Image<signed char, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<double, 3u>, itk::Image<std::complex<double>, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 3u>, itk::Image<unsigned char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 3u>, itk::Image<unsigned int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 3u>, itk::Image<unsigned long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<double, 3u>, itk::Image<unsigned short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 2u>, itk::Image<float, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 2u>, itk::Image<int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 2u>, itk::Image<long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 2u>, itk::Image<short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 2u>, itk::Image<signed char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 2u>, itk::Image<std::complex<float>, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 2u>, itk::Image<unsigned char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 2u>, itk::Image<unsigned int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 2u>, itk::Image<unsigned long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 2u>, itk::Image<unsigned short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 3u>, itk::Image<float, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 3u>, itk::Image<int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 3u>, itk::Image<long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 3u>, itk::Image<short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 3u>, itk::Image<signed char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 3u>, itk::Image<std::complex<float>, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 3u>, itk::Image<unsigned char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 3u>, itk::Image<unsigned int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 3u>, itk::Image<unsigned long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<float, 3u>, itk::Image<unsigned short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 2u>, itk::Image<float, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 2u>, itk::Image<int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 2u>, itk::Image<long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 2u>, itk::Image<short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 2u>, itk::Image<signed char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 2u>, itk::Image<unsigned char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 2u>, itk::Image<unsigned int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 2u>, itk::Image<unsigned long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 2u>, itk::Image<unsigned short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 3u>, itk::Image<float, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 3u>, itk::Image<int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 3u>, itk::Image<long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 3u>, itk::Image<short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 3u>, itk::Image<signed char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 3u>, itk::Image<unsigned char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 3u>, itk::Image<unsigned int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 3u>, itk::Image<unsigned long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<int, 3u>, itk::Image<unsigned short, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<itk::Vector<double, 2u>, 2u>, itk::Image<itk::Vector<double, 2u>, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<itk::Vector<double, 3u>, 3u>, itk::Image<itk::Vector<double, 3u>, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<itk::Vector<float, 1u>, 3u>, itk::Image<itk::Vector<float, 1u>, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 2u>, itk::Image<float, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 2u>, itk::Image<int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 2u>, itk::Image<long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 2u>, itk::Image<short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 2u>, itk::Image<signed char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 2u>, itk::Image<unsigned char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 2u>, itk::Image<unsigned int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 2u>, itk::Image<unsigned long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 2u>, itk::Image<unsigned short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 3u>, itk::Image<float, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 3u>, itk::Image<int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 3u>, itk::Image<long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 3u>, itk::Image<short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 3u>, itk::Image<signed char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 3u>, itk::Image<unsigned char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 3u>, itk::Image<unsigned int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 3u>, itk::Image<unsigned long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<long, 3u>, itk::Image<unsigned short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 2u>, itk::Image<float, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 2u>, itk::Image<int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 2u>, itk::Image<long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 2u>, itk::Image<short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 2u>, itk::Image<signed char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 2u>, itk::Image<unsigned char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 2u>, itk::Image<unsigned int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 2u>, itk::Image<unsigned long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 2u>, itk::Image<unsigned short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 3u>, itk::Image<float, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 3u>, itk::Image<int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 3u>, itk::Image<long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 3u>, itk::Image<short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 3u>, itk::Image<signed char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 3u>, itk::Image<unsigned char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 3u>, itk::Image<unsigned int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 3u>, itk::Image<unsigned long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<short, 3u>, itk::Image<unsigned short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 2u>, itk::Image<float, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 2u>, itk::Image<int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 2u>, itk::Image<long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 2u>, itk::Image<short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 2u>, itk::Image<signed char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 2u>, itk::Image<unsigned char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 2u>, itk::Image<unsigned int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 2u>, itk::Image<unsigned long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 2u>, itk::Image<unsigned short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 3u>, itk::Image<float, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 3u>, itk::Image<int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 3u>, itk::Image<long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 3u>, itk::Image<short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 3u>, itk::Image<signed char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 3u>, itk::Image<unsigned char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 3u>, itk::Image<unsigned int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 3u>, itk::Image<unsigned long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<signed char, 3u>, itk::Image<unsigned short, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<std::complex<double>, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<std::complex<double>, 2u>, itk::Image<std::complex<double>, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<std::complex<double>, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<std::complex<double>, 3u>, itk::Image<std::complex<double>, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<std::complex<float>, 2u>, itk::Image<float, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<std::complex<float>, 2u>, itk::Image<std::complex<float>, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<std::complex<float>, 3u>, itk::Image<float, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<std::complex<float>, 3u>, itk::Image<std::complex<float>, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned char, 1u>, itk::Image<unsigned char, 1u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned char, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned char, 2u>, itk::Image<float, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned char, 2u>, itk::Image<int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned char, 2u>, itk::Image<long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned char, 2u>, itk::Image<short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned char, 2u>, itk::Image<signed char, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned int, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned long, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned char, 2u>, itk::Image<unsigned short, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned char, 2u>, itk::VectorImage<unsigned char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned char, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned char, 3u>, itk::Image<float, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned char, 3u>, itk::Image<int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned char, 3u>, itk::Image<long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned char, 3u>, itk::Image<short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned char, 3u>, itk::Image<signed char, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned int, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned long, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned char, 3u>, itk::Image<unsigned short, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned char, 3u>, itk::VectorImage<unsigned char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 2u>, itk::Image<float, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 2u>, itk::Image<int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 2u>, itk::Image<long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 2u>, itk::Image<short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 2u>, itk::Image<signed char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned long, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned int, 2u>, itk::Image<unsigned short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 3u>, itk::Image<float, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 3u>, itk::Image<int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 3u>, itk::Image<long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 3u>, itk::Image<short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 3u>, itk::Image<signed char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned long, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned int, 3u>, itk::Image<unsigned short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned long, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned long, 2u>, itk::Image<float, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned long, 2u>, itk::Image<int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned long, 2u>, itk::Image<long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned long, 2u>, itk::Image<short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned long, 2u>, itk::Image<signed char, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned long, 2u>, itk::Image<unsigned char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned long, 2u>, itk::Image<unsigned int, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned long, 2u>, itk::Image<unsigned long, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned long, 2u>, itk::Image<unsigned short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned long, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned long, 3u>, itk::Image<float, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned long, 3u>, itk::Image<int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned long, 3u>, itk::Image<long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned long, 3u>, itk::Image<short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned long, 3u>, itk::Image<signed char, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned long, 3u>, itk::Image<unsigned char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned long, 3u>, itk::Image<unsigned int, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned long, 3u>, itk::Image<unsigned long, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned long, 3u>, itk::Image<unsigned short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned short, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned short, 2u>, itk::Image<float, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned short, 2u>, itk::Image<int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned short, 2u>, itk::Image<long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned short, 2u>, itk::Image<short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned short, 2u>, itk::Image<signed char, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned char, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned int, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned long, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned short, 2u>, itk::Image<unsigned short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned short, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned short, 3u>, itk::Image<float, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned short, 3u>, itk::Image<int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned short, 3u>, itk::Image<long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned short, 3u>, itk::Image<short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::Image<unsigned short, 3u>, itk::Image<signed char, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned char, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned int, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned long, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::Image<unsigned short, 3u>, itk::Image<unsigned short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<double, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<double, 2u>, itk::VectorImage<double, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<double, 2u>, itk::VectorImage<float, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<double, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<double, 3u>, itk::VectorImage<double, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<double, 3u>, itk::VectorImage<float, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<float, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<float, 2u>, itk::Image<float, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<float, 2u>, itk::VectorImage<float, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<float, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<float, 3u>, itk::Image<float, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<float, 3u>, itk::VectorImage<float, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<int, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<int, 2u>, itk::Image<int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<int, 2u>, itk::VectorImage<float, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<int, 2u>, itk::VectorImage<int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<int, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<int, 3u>, itk::Image<int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<int, 3u>, itk::VectorImage<float, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<int, 3u>, itk::VectorImage<int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<long, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<long, 2u>, itk::Image<long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<long, 2u>, itk::VectorImage<float, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<long, 2u>, itk::VectorImage<long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<long, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<long, 3u>, itk::Image<long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<long, 3u>, itk::VectorImage<float, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<long, 3u>, itk::VectorImage<long, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<short, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<short, 2u>, itk::Image<short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<short, 2u>, itk::VectorImage<float, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<short, 2u>, itk::VectorImage<short, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<short, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<short, 3u>, itk::Image<short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<short, 3u>, itk::VectorImage<float, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<short, 3u>, itk::VectorImage<short, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<signed char, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<signed char, 2u>, itk::Image<signed char, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<signed char, 2u>, itk::VectorImage<float, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<signed char, 2u>, itk::VectorImage<signed char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<signed char, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<signed char, 3u>, itk::Image<signed char, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<signed char, 3u>, itk::VectorImage<float, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<signed char, 3u>, itk::VectorImage<signed char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<unsigned char, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned char, 2u>, itk::Image<unsigned char, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned char, 2u>, itk::VectorImage<float, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned char, 2u>, itk::VectorImage<unsigned char, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<unsigned char, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned char, 3u>, itk::Image<unsigned char, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned char, 3u>, itk::VectorImage<float, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned char, 3u>, itk::VectorImage<unsigned char, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<unsigned int, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned int, 2u>, itk::Image<unsigned int, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned int, 2u>, itk::VectorImage<float, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned int, 2u>, itk::VectorImage<unsigned int, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<unsigned int, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned int, 3u>, itk::Image<unsigned int, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned int, 3u>, itk::VectorImage<float, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned int, 3u>, itk::VectorImage<unsigned int, 3u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<unsigned long, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned long, 2u>, itk::Image<unsigned long, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned long, 2u>, itk::VectorImage<float, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned long, 2u>, itk::VectorImage<unsigned long, 2u>>;
template class SITKExplicit_EXPORT itk::InPlaceImageFilter<itk::VectorImage<unsigned long, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned long, 3u>, itk::Image<unsigned long, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned long, 3u>, itk::VectorImage<float, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned long, 3u>, itk::VectorImage<unsigned long, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned short, 2u>, itk::Image<double, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned short, 2u>, itk::Image<unsigned short, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned short, 2u>, itk::VectorImage<float, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned short, 2u>, itk::VectorImage<unsigned short, 2u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned short, 3u>, itk::Image<double, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned short, 3u>, itk::Image<unsigned short, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned short, 3u>, itk::VectorImage<float, 3u>>;
template class SITKExplicit_EXPORT
  itk::InPlaceImageFilter<itk::VectorImage<unsigned short, 3u>, itk::VectorImage<unsigned short, 3u>>;
