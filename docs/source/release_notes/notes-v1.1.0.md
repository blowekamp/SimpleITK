# SimpleITK Release v1.1.0

We are pleased to announce the SimpleITK 1.1 Release!


## Installing SimpleITK

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK Read the Docs web page (http://simpleitk.readthedocs.io/en/release/Documentation/docs/source/installation.html).

- Python Binary Downloads

  - Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package form PyPI:
  ```
  python -m pip install --upgrade pip
  python -m pip install SimpleITK
  ```

  - Many Conda packages have been upload to Anaconda Cloud on the `SimpleITK` channel. These can be installed with:
  ```
  conda install -c simpleitk simpleitk
  ```

- A complete available set of compiled binaries, including select CSharp and Java distributions, along with source and data tar-balls are available on Source Forge (https://sourceforge.net/projects/simpleitk/files/SimpleITK/1.1.0/).

**Release Notes**

Improvements:
 - Enabled 4D Images for IO, ExtractImageFilter, and output of JoinSeriesImageFilter.
 - Enabled MINC IO by default.
 - New Filters: `ObjectnessMeasuresImageFiler` (Frangi's vesselness), `IterativeInverseDisplacementFieldImageFilter`, `UnsharpMaskImageFilter`, and `RoundImageFilter`.
 - Added LBFGS2 optimizer to ImageRegistrationMethod.
 - Improved Show search path for FIJI now includes home directories.
 - Improved ITK Modular awareness, including ImageIOs.
 - Superbuild update PCRE 8.40, SWIG 3.0.12, ITK 4.13.
 - Many bug fixes and a couple segmentation fault issues addressed.
 - The build system is better and more robust then ever! Many new improvements and features!
 - Migrating examples, miscellaneous documentation and Wiki to Read the Docs: http://simpleitk.readthedocs.io/en/master/
 - Improved reading and writing of 64-bit integer images across platforms (except python 2.7 on Windows).
 - Added optional wrapping of the `CoherenceEnahancingDiffusionImageFilter` (not enabled in binary distributions).
 - Added and improved examples related to DICOM reading, writing and manipulating the meta-data dictionary.

API Changes:
 - Added `ImageFileReader::ReadImageInformation`.
   - This adds support to read meta-data from any supported image file format with any dimension without reading the bulk pixel data.
 - Added `ImageReaderBase::GetRegisteredImageIOs` method to obtain list of loaded ITK ImageIO modules.
 - Added `Version::ITKModulesEnabled`  method to obtain a list of ITK enabled modules when SimpleITK was built.
 - Added `BinaryImageToLabelMap::GetNumberOfObjects`.
 - Added optional MaskImage input to `ConnectedComponentImageFilter`.
 - Added `SignedMaurerDistanceMapImageFilter::BackgroundValue` paramater.
 - `WarpImageFilter` now uses named inputs.
 - Convolution filters use named inputs.
 - Added optional OrientedBoundingBox to `LabelShapeStatisticsImageFilter`.
 - Added missing features to `RelabelComponentImageFilter` including `SortByObjectSize` parameter and `NumberOfObjects`, `SizeOfObjectsInPhysicalUnits` measurements.
 - Added `LabelStatisticsImageFilter::GetRegion`.
 - Added MetaDataDictionaries to the `ImageSeriesReader`.

Compatibility:
 - `DiscreteGaussianImageFilter`, `SmoothingRecursiveGaussianImageFilter` now optionally take a vector argument for variance and sigma respectfully.
  - In Python the procedural methods, `DiscreteGaussian` and `SmoothingRecursiveGaussian` may not work with named arguments due to limitation with SWIG and overloaded functions.
 - `N4BiasFiledCorrectionImageFilter` now only takes uint8 pixel types for mask image input.
