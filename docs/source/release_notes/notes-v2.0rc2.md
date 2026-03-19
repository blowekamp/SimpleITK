# SimpleITK Release v2.0rc2

Announcing the SimpleITK 2.0 Release Candidate 2!

This RC contains backwards incompatible changes. Users are encouraged to test the RC with their code and report back bugs and issues.

This update contains major improvements and changes to the code generation used in SimpleITK. The changes include support for in-place operations of filters in C++ and improved C++11 style and usage.

Additional release notes can be found in [Release Candidate 1](https://github.com/SimpleITK/SimpleITK/releases/tag/v2.0rc1).

**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/installation.html).

## Python Binary Downloads

  - Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package from GitHub releases:
  ```
  python -m pip install --upgrade pip
  python -m pip install --pre SimpleITK --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v2.0rc2
  ```
## Anaconda Binary Downloads

 Conda packages are available from Anaconda Cloud on the `SimpleITK` channel. These can be installed with:
  ```
conda install -c simpleitk/label/dev simpleitk
  ```

**Release Notes**


**API and Compatibility Changes**

* Remove from *all* filters the `Execute` method with filter parameters as arguments.
* Remove `AddTrailPoints` and `ClearTrialPoints` methods from `FastMarchingImageFilter` due to consolidation of code generation templates.
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

* Update ITK version to on 5.1.0 release branch, which includes critical patches for Mattes mutual information and the `CompositeTransform` class. ITK hash c8c42430626f0123e7ec401c17c72c7d5ce82669.
* Add `Image::IsUnique` method.
* Add wrapping for `DICOMOrientImageFilter`.
* Add complex pixel type support to `GetBufferAs` methods.
* Improve checking and error messages when `Image` inputs require the dimensions, sizes or pixel types to match.
* Add `LevelSetMotionRegistrationImageFilter::InitialDisplacementField` method.
* Update to use SWIG 4.0.1; SWIG >= 4 is now required.
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
* Add Python keyword argument support for `Resample` procedure.
* Improve Python `Image` class's in-place operators to use C++ in-place operators.
* Improved Python keyword arguments for procedual methods due to removal of overloaded methods.
* Add Python slice indexing for arbitrary dimension extracting.
* Add Python `__setitem__` support for assigning sub-regions via the PasteImageFilter.
* Refactor Python SWIG code to separate classes and add Python code as modules.
* Add Python `Transform.Downcast` method.
* Applied PEP 8 style to Python examples.


**Bug Fixes**

* Add missing deepcopy implementation for Image with RLE "Label" pixel types.
* Fixed Python pickling for missed transform classes.
* Refactored `GetImageFromVector` method to retain reference to original container with a command object. Fixing image buffer aliasing with `BSplineTransform` and `DisplacementFieldTransform`.
* Make `TranslationTransform` conversion constructor explicit.
* Remove implicit conversion from `Image` to `Transform` class.


**Documentation**

* Update Sphinx filter list.
* Add example for reading raw image files.
* Add DICOM series writing example with floating point pixels.
* Add FAQ entry for the differences between ITK and SimpleITK.
* Rename Sphinx "installation" page to "getting started".
* Update examples from using scalar radius to vector.
* Use Doxygen interactive SVG output, and enable client side MathJax for Latex rendering.
* Add C++ CMake example for using SimpleITK.
* Update examples to use `CompositeTransform`.


**Compilation**

* Continue to address compilation warnings.
* Pin Sphinx version for Read-The-Docs.
* Remove EXPORT specification for static member function declaration.
* Support pass TBB_DIR to ITK in the Superbuild.


**Miscellaneous**

* Update SimpleITK logo.
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
