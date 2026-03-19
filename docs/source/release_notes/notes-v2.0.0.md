# SimpleITK Release v2.0.0

SimpleITK 2.0 has been released! This major version update to SimpleITK includes updating to ITK version 5, significant code improvements, performance enhancements, and API changes.


**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/gettingStarted.html).

## Python Binary Downloads

  - Python binary wheels are available for download from PyPI. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package:
  ```
  python -m pip install --upgrade pip
  python -m pip install SimpleITK
```

## Anaconda Binary Downloads

Conda packages are available from Anaconda Cloud on the `SimpleITK` channel. These can be installed with:

```
conda install -c simple simpleitk
```

**2.0 Documentation**

* [Migration Guide](https://simpleitk.readthedocs.io/en/master/migrationGuide2.0.html)
* [Doxygen API Documentation](https://simpleitk.org/doxygen/v2_0/html/)
* [Sphinx Documentation](https://simpleitk.readthedocs.io/en/v2.0.0/)
* [Github Release](https://github.com/SimpleITK/SimpleITK/releases/tag/v2.0.0)


To learn more about SimpleITK go to [simpleitk.org](https://simpleitk.org/).

**Highlights**

* Now using ITK version 5.1 with all the new improvements from ITKv5!
* 5D `Image` support for improved support of time series, and multi-channel images commonly used in microscopy.
  - The default and distributed configurations now support image dimensions from 2 to 5 dimensions. The following filters are also instantiated in 4 and 5 dimensions: `ExtractImageFilter`, `JoinSeriesImageFilter`, `PasteImageFilter`, `HashImageFilter`, `ImageFileReader`, `ImageFileWriter`, `ImageSeriesWriter`.
* Python's Image class has improved set item for assignment operations with a slice indexed sub-region on the left hand side. Also assignment of a constant value to a sub-region is supported.
  - Please see the [Slice by Slice](https://simpleitk.readthedocs.io/en/master/link_SliceBySliceDecorator_docs.html) example for details.
* Python pickling of `Image` and `Transform` classes. Please note this is designed for operations such as interprocess communications; the standard ITK IO formats should be used as portable storage formats.
* The `Show` procedure calls the `ImageViewer` class interface which utilizes the class's defaults and configuration.
* Modernization of C++ code base with C++11, and clang tidy
* In C++, temporary images or Rvalue References as arguments automatically enable filters to execute "in-place".
   - Please see the [In Place](https://simpleitk.readthedocs.io/en/master/link_CppInPlace_docs.html) example for details.



**Release Notes**

**API and Compatibility Changes**

* The environment variables related to the `Show` procedure are only checked once. The `Show` method now is a wrapper for the `ImageViewer` class, and the behavior changed. The `SITK_SHOW_EXTENSION` and `SITK_SHOW_COMMAND` environment variables if defined initialize the corresponding global defaults *only* the first time accessed. The environment variables `SITK_COLOR_COMMAND` and `SITK_SHOW_3D_COMMAND` are removed as the `ImageViewer` class allows for direct configuration of the command.


* Remove from *all* filters the `Execute` method with filter parameters as arguments. The `Execute` method with the input images remains.
* Remove `AddTrialPoints` and `ClearTrialPoints` methods from `FastMarchingImageFilter` due to consolidation of code generation templates.
* With Java wrapped `Vector` types whose C++ element type is an unsigned integer, the wrapped element type changed to the next larger Java signed integer type ( see 618d89 ).
* Removed procedural methods taking scalar radius from the following ( see 444f9a ):
  - BinaryClosingByReconstruction
  - BinaryDilate
  - BinaryErode
  - BinaryMorphologicalClosing
  - BinaryMorphologicalOpening
  - BinaryOpeningByReconstruction
  - BlackTopHat
  - ClosingByReconstruction
  - DilateObjectMorphology
  - ErodeObjectMorphology
  - GrayscaleDilate
  - GrayscaleErode
  - GrayscaleMorphologicalClosing
  - GrayscaleMorphologicalOpening
  - MorphologicalGradient
  - OpeningByReconstruction
  - WhiteTopHat
* Dropped Python 3.4 support due to end of life.
* Remove the `sitk::ImageFilter` template parameter because it is no longer utilized.
* The Python installation command using `setup.py` changed with the location of `setup.py`. To install see updated Sphinx documentation.
* Remove `Transform::AddTransform` and `Transform::FlattenTransform` methods. Use the `CompositeTransform` class.



**New Features**

* Rewrote `Show` to use `ImageViewer` class.
* For ImageViewer add user's Application folder to search path.

* Use `NPasteImageFilter` from the SimpleITKFilters remote ITK module to replace `PasteImageFilter`.
* Add to SimpleITK's `PasteImageFilter`:
  - `DestinationSkipAxes` parameter
  - Support for pasting lower dimension to higher dimension image e.g 2D slice into 3D volume
  - Ability to use a constant value as input instead of image
* Add method to `ImageFileReader::GetImageIOFromFileName`  get the ITK ImageIO automatically used for file.

* Update superbuild Swig version to 4.0.2. SWIG >= 4 is now required.
* Update ITK version to 5.1.1.
* Disable ITK 4 legacy behaviors.

* Add `SignedDanielssonDistanceMapImageFilter::GetVoronoiMap` method.
* Add wrapping for `CannySegmentationLevelSetImageFilter`.
* Update levelset segmentation filters to support named inputs.
* Add 4D support to`SliceImageFilter` and to the Python slice indexing.
* Add complex pixel support to `Image::GetBufferAs...` methods.
* Add wrapping for `BinaryPruningImageFilter`.
* Add per label measurements to `LabelOverlapMeasuresImageFilter`.
* `ResampleImageFilter` add option to use nearest neighbor extrapolation.
* Add `ReturnBinMidPoint` parameter to `OtsuThresholdImageFilter`. Defaults to false which may change results.
* Add support to specify compression level and compression algorithm to `ImageFileWriter` and `ImageSeriesWriter` classes.
* `BSplineTransform` Python support construction and `SetCoefficientImage` with list-like series of Images.
* `MeanImageFilter` directly filters vector images, improving performance.
* Add to `LabelShapeStatisticsImageFilter` per label method `GetIndexes` and `GetRLEIndexes`.
* Add `Image::IsUnique` method.
* Add wrapping for `DICOMOrientImageFilter`.
* Add complex pixel type support to `GetBufferAs` methods.
* Improve checking and error messages when `Image` inputs require the dimensions, sizes or pixel types to match.
* Add `LevelSetMotionRegistrationImageFilter::InitialDisplacementField` method.
* Refactor of the template code generation system to enable numerous new features and C++ style enhancements.
* Add boolean `in_place` field to all JSON filter descriptions.
* Add C++ automatic "in place" ITK filter execution with r-value image input.
* Add C++ `Image` operators with automatic in-place filter execution with r-value `Image` classes.
* Use native SWIG/R enumeration support.
* Add named filter inputs to morphological reconstruction image filters.
* Replace the CMake configuration option of "SimpleITK_4D_IMAGE" with "SimpleITK_MAX_DIMENSION"
* Default configuration now include 5D Image support.
* The following filters support up to "SimpleITK_MAX_DIMENSION":
  - ExtractImageFilter
  - JoinSeriesImageFilter
  - PasteImageFilter
  - HashImageFilter
  - ImageFileReader
  - ImageFileWriter and ImageSeriesWriter
* Refactored MemberFunctionFactory's hashing function.
* Add `ExtractImageFilter` support to extract an abitrary dimension e.g. 3D image from 5D image.
* Add `sitkScaleVersor` enum.
* Add `Transform::GetTransfromEnum` method.
* Add `CompositeTransform` class.
* Update to ITKv5 threading model behaviors for the following `ProcessObject` methods:
  - `SetGlobalDefaultThreader` and `GetGlobalDefaultThreader`
  - `SetGlobalDefaultNumberOfThreads` and `GetGlobalDefaultNumberOfThreads`
  - `SetNumberOfWorkUnits` and `GetNumberOfWorkUnits`


Python

* Add custom Python procedures for `DiscreteGaussian`, `SmoothingRecursiveGaussian`, `ReadImage` and `WriteImage` to support keyword arguments.
* Add to the `WriteImage` Python procedure the keyword only arguments `imageIO` and `compressor`.
* Add Python `__setitem__` for [] operator support:
  - assignment constant to a sliced indexed region
- assignment of lower dimension image to matching sliced indexed region
* Add Python support for complex pixels to `GetArrayFromImage`, `GetImageFromArray` and `GetArrayViewFromImage` methods.
* Add Python deepcopy support to `Image` class, ensuring the copy is unique with lazy copying implementation.
* Add Python pickling support for `Image` and `Transform` classes.
* Add Python keyword argument support for `Resample` procedure.
* Improve Python `Image` class's in-place operators to use C++ in-place operators.
* Improve Python keyword arguments for procedural methods due to removal of overloaded methods.
* Add Python slice indexing for arbitrary dimension extracting.
* Add Python `__setitem__` support for assigning sub-regions via the PasteImageFilter.
* Refactor Python SWIG code to separate classes and add Python code as modules.
* Add Python `Transform.Downcast` method.
* Applied PEP 8 style to Python examples.

CSharp

* Add C# constant image buffer access methods of the form `GetConstBufferAs...`.



**Bug Fixes**

* Fix the `ImageRegistrationMethod` exception to use `GetPixelIDTypeAsString`
* Update `ndarray.tostring` to `tobyte` ( `tostring` deprecated in numpy 1.19.0 )

* Add missing deepcopy implementation for Image with RLE "Label" pixel types.
* Fixed Python pickling for missed transform classes.
* Refactored `GetImageFromVector` method to retain reference to original container with a command object. Fixing image buffer aliasing with `BSplineTransform` and `DisplacementFieldTransform`.
* Make `TranslationTransform` conversion constructor explicit.
* Remove implicit conversion from `Image` to `Transform` class.

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



**Documentation**

* Update doc strings for Python and JAVA from JSON filter descriptions.
* Update examples to use slice based assignment instead of `PasteImageFilter`.
* Update the tutorials page.
* Update FAQ.
* Improve `WriteImage` Doxygen documentation.
* Update RTD `Show` procedure documentation.
* Add custom HTML Doxygen header with dynamic timestamp insertion, and privacy policy.
* Add procedural example to IO page.
* Updating the main Doxygen page.


* Update Sphinx filter list.
* Add example for reading raw image files.
* Add DICOM series writing example with floating point pixels.
* Add FAQ entry for the differences between ITK and SimpleITK.
* Rename Sphinx "installation" page to "getting started".
* Update examples from using scalar radius to vector.
* Use Doxygen interactive SVG output, and enable client side MathJax for Latex rendering.
* Add C++ CMake example for using SimpleITK.
* Update examples to use `CompositeTransform`.


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


**Compilation**

* Address signed to unsigned comparison compiler warnings.
* Fix `PYTHON_EXECUTABLE` being undefined in CMake for Doxygen.
* Add Doxygen MathJAX URL as CMake option.

* Continue to address compilation warnings.
* Pin Sphinx version for Read-The-Docs.
* Remove EXPORT specification for static member function declaration.
* Support pass TBB_DIR to ITK in the Superbuild.

* Require C++11 standard for compilation.
* Replace C++ tr1 usage with standard C++11 classes.
* Replace compiler depended defines with C++11 keywords.
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


**Miscellaneous**

* Update SimpleITK logo.
* Test the `ImageViewer` class and `Show` procedure.
* Update and add more testing for Python `ImageRead` and `ImageWrite` procedures.
* Prefer using absolute imports in Python.
* Updates to manylinux Dockerfile including updating CMake and openssl versions.
* Write testing output with compression enabled.
* Use C++11 `nullptr` over NULL.
* Update classes to use C++11 inline class initializaton.
* Use C++11 default class constructors.
* Use C++11 type alias over typedefs.
* Use clang-tidy to improve code with:
  - modernize-redundant-void-arg
  - modernize-use-equals-default
  - modernize-use-override
  - modernize-use-emplace
  - readability-container-size-empty
* Continuing updates and improvements to the testing, build and packaging infrastructure.
* Update set parameter methods to use std::vector by value with C++ std::move internally.
* Add CI for running flake8.
* Continuing updates and improvements to the testing, build and packaging infrastructure.
* Add tolerance for testing BSpline domains.
* Update setup for development scripts to support github workflows.
* Add Insight Software Consortium Code of Conduct.
* Archive SHA512 in distributed data archive.
* Disable ITK's automatic advanced architecture compilation settings in packaging builds.
