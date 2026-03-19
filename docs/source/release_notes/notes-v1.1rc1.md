# SimpleITK Release v1.1rc1

We are pleased to announce SimpleITK 1.1 Release candidate 1.

**Release Notes**

- Improvements
 - Enabled 4D Images for IO, ExtractImageFilter, and output of JoinSeriesImageFilter
 - Enabled MINC IO by default
 - New Filters: ObjectnessMeasuresImageFiler, IterativeInverseDisplacementFieldImageFilter, UnsharpMaskImageFilter, RoundImageFilter
 - Added LBFGS2 optimizer to ImageRegistrationMethod
 - Improved Show search path for FIJI now includes in home directories
 - Improved ITK Modular awareness, include ImageIO
 - Superbuild upadate PCRE 8.40, SWIG 3.0.12, ITK 4.13
 - Many bug fixes and a couple segmentation fault issues addressed
 - The builds system is better and more robust then ever! Many new improvements and features!
 - Migrating examples, miscellaneous documentation and Wiki to Read the Docs: http://simpleitk.readthedocs.io/en/master/
 - Added and improved examples related to DICOM reading, writing and manipulating the meta-data dictionary

- API Changes
 - Add ImageFileReader::ReadImageInformation
   - This add support to read meta-data from any support image file format of any dimension without reading the bulk pixel data.
 - added BinaryImageToLabelMap::GetNumberOfObjects
 - added optional MaskImage input to ConnectedComponentImageFilter
 - added SignedMaurerDistanceMapImageFilter::BackgroundValue paramater
 - WarpImageFilter now uses named inputs
 - ConvolutionFilters use named inputs
 - Added optional OrientedBoundingBox to LabelShapeStatisticsImageFilter
 - Added missing features to RelabelComponentImageFilter including SourceByObjectSize parameter and NumberOfObjects, SizeOfObjectsInPhysicalUnits measurements
 - Added LabelStatisticsImageFilter::GetRegion
 - Added MetaDataDictionaries to the ImageSeriesReader




- Compatibility
 - DiscreteGaussianImageFilter, SmoothingRecursiveGaussianImageFilter now optionally take a vector argument for variance and sigma respectfully.
  - In Python the proceudal methods, DiscreteGaussian and SmoothingRecursiveGaussian may not work with with named arguments due to limitation with SWIG and overloaded functions.
 - N4BiasFiledCorrectionImageFilter now only takes uint8 for mask

**Python Binary Downloads**

   - Many binary Python wheels are available for download and testing. It is important to have the latest version form pip to ensure correct wheel compatibility. To install the SimpleITK package:
  ```
  pip install --upgrade pip
  pip install --pre -f https://github.com/SimpleITK/SimpleITK/releases/tag/v1.1rc1 SimpleITK
  ```
