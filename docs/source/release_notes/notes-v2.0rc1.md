# SimpleITK Release v2.0rc1


**Announcement**


Announcing the SimpleITK 2.0 Release Candidate 1!

_NOTE:_ SimpleITK neither supports Python 2.7 nor provides 32-bit binaries as of version 2.0.

**## Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/installation.html).

## Python Binary Downloads

  - Including Python 3.8 support!
  - Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package from GitHub releases:
  ```
  python -m pip install --upgrade pip
  python -m pip install --pre SimpleITK --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v2.0rc1
  ```
## Anaconda Binary Downloads

 Conda packages are available from Anaconda Cloud on the `SimpleITK` channel. These can be installed with:
  ```
conda install -c simpleitk/label/dev simpleitk
  ```

**Release Notes**

## New Features

* Update ITK version to 5.1rc2.
* Disable ITK 4 legacy behaviors.
* For ImageViewer add user's Application folder to search path.
* Add `SignedDanielssonDistanceMapImageFilter::GetVoronoiMap` method.
* Add wrapping for `CannySegmentationLevelSetImageFilter`.
* Update levelset segmentation filters to support named inputs.
* Add 4D support to`SliceImageFilter` and to the Python slice indexing.
* Add complex pixel support to `Image::GetBufferAs...` methods.
* Add Python support for complex pixels to `GetArrayFromImage`, `GetImageFromArray` and `GetArrayViewFromImage` methods.
* Add wrapping for `BinaryPruningImageFilter`.
* Add per label measurements to `LabelOverlapMeasuresImageFilter`.
* Add Python deepcopy support to `Image` class, this ensure the copy is unique with lazy copying implementation.
* Add Python pickling support for `Image` and `Transform` classes.
* `ResampleImageFilter` add option to use nearest neighbor extrapolation.
* Add `ReturnBinMidPoint` parameter to `OtsuThresholdImageFilter`. Defaults to false which may change results.
* Add `ImageFileWriter` and `ImageSeriesWriter` support to specify compression level and compression algorithm.
* `BSplineTransform` Python support construction and `SetCoefficientImage` with list-like series of Images.
* `MeanImageFilter` directly filters vector images, improving performance.
* Add C# constant image buffer access methods of the form `GetConstBufferAs...`.
* Add to `LabelShapeStatisticsImageFilter` per label method `GetIndexes` and `GetRLEIndexes`.


## Bug Fixes

* Update `StatisticsImageFilter` input convention for ITKv5.
* Remove `WarpImageFilter` matching image size requirement.
* The results of the `LiThresholdImageFilter` changes with ITK, baseline test results were updated. ( See ITK commit e3ce37 for details. )
* Add additional baseline images for registration results, due to change in ImageRegistration's smoothing algorithm. ( See ITK commit 569a47 for details. )
* Correct `LabelShapeStatistics` baseline for `OrientedBoundingBoxVertices` results. ( See ITK commit 50c695 for details. )
* Fix potential double memory free of pixel container in results from internal image to vector image conversions.
* Fix `RelabelComponentImageFilter` incorrect object size computation with sorting enabled. ( See ITK commit 162101 for details. )
* Fix potential ITK pipeline execution error when a filter execute on a vector image by per component.
* Add C++11 move semantics support to the Image class.
* Add direct support for C++11 lambda command to the `ProcessObject` class.
* Add `GetBufferAsVoid` method to the Image class.
* Add `Decay` parameter to the `MirrorPadImageFilter`.


## Documentation

* Update copyright to NumFOCUS.
* Add casting to N4BiasFieldCorrection example.
* Typo fixes.
* Create Docker images for generating Doxygen.
* Add C# `ConnectedThresholdSegmentation` example.
* Remove references to next branch in documentation.
* Update R installation instructions.
* Add C# `ImageReistrationMethod2` example.
* Add multi-lingual examples for `FastMarchingSegmentationImageFilter`.
* Uset stopping time parameter in `FastMarchingSegmentation` examples.
* Add C# `CannySegmentationLevelSetImageFilter` example.
* Improve documentation to `GetImageFromArray` about `isVector` parameter.
* Update referenced tutorials.
* Add acknowledgment section to readme.
* Update Java and CSharp installation instructions.
* Move Doxygen pages to Sphinx documents, remove other out dated pages.
* Move Sphinx documentation to docs directory.


## Compilation

* Require C++11 standard for compilation.
* Replace C++ tr1 usage with standard C++11 classes.
* Replace compiler depended defines with C+11 keywords.
* Prefer using C++11 lambda over `std::bind` when `std::placeholders` are not needed.
* Improve support on OSX for isysroot flag and `CMAKE_OSX_SYSROOT` variable.
* Support additional `CMAKE_GENERATOR_*`, `CMAKE_VS_PLATFORM_TOOLSET_*` variables is superbuild.
* Added AWS S3 buckets for data mirroring.
* Use SHA512 hash files as index for downloaded source code.
* Use CMake for creating zip archives.
* Improve finding of Lua interpreter.
* Update Lua superbuild version to 5.3.5, require Lua version 5.2 or 5.3 for code generation.
* Update PCRE superbuild version to 8.43.
* Add `USE_CCACHE` cmake option to automatically use ccache as launcher if available.
* Enable GNU gold linker by default if available.
* Update GTest vesrion to 1.10.0 in superbuild.
* Fix incorrect version of virtualenv detected.


## Miscellaneous

* Continuing updates and improvements to the testing, build and packaging infrastructure.
* Add tolerance for testing BSpline domains.
* Update setup for development scripts to support github workflows.
* Add Insight Software Consortium Code of Conduct.
* Archive SHA512 in distributed data archive.
* Disable ITK's automatic advanced architecture compilation settings in packaging builds.
