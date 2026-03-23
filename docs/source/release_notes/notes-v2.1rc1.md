# SimpleITK Release v2.1rc1

Announcing the SimpleITK 2.1 Release Candidate 1!

Users and developers are encouraged to test the RC before the final release and report issues, bugs, and any compatibility problems.

**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/installation.html).

## Python Binary Downloads

  - Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package from GitHub releases:
  ```
  python -m pip install --upgrade pip
  python -m pip install --pre SimpleITK --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v2.1rc1
  ```
## Anaconda Binary Downloads

 Conda packages are available from Anaconda Cloud on the `SimpleITK` channel. These can be installed with:
  ```
conda install -c simpleitk/label/dev simpleitk
  ```

## Apple M1 ARM Support

SimpleITK v2.1rc1 has been successfully compiled and tested on Apple OS X running native M1 ARM. Thanks to the ITK development team for providing the foundation.

For the v2.1 .0 final release, we are currently only planning to release M1 ARM binaries for the [conda-forge](https://github.com/conda-forge/simpleitk-feedstock) distribution.


**Release Notes**

**API Changes**

* Add `Image::getBufferAsByteBuffer` to Java interface,  returns a type specific instance of `java.nio.Buffer`.
* In Java add `GetBufferAsNativePointer` to Image class.
* Add `Image::GetSizeOfPixelComponent` method.
* Add `N4BiasFieldCorrectionImageFilter::GetLogBiasFieldAsImage` method.
* Ignore constant `Image::GetBufferAs...` methods, in wrapped languages.


**New Features**

* Update ITK superbuild version to v5.2.0.
* Add new `ComposeScaleSkewVersor3DTransform` class.
* In Python, add support for ellipsis ("...") indexing to the `Image` class.
* In Python, add class dictionary like interface for the `Image`'s meta-data dictionary. This includes implementations for `__delitem__`, `__contains__`, and `__getitem__` with a string parameter.
* Updating style in examples using modern Python, moving from 2.7 to 3.6+.
* Add 4D ( and higher ) support for `PermuteImageFilter`.
* New `LoggerBase` and `ITKLogger` classes to interface and override ITK's output messages.
* Add output pixel type parameter to `ShiftScaleImageFilter`, to support arbitrary type conversion with intensity scaling.
* Add `sitkUInt8` mask image support to `MaskNegatedImageFilter`
* Enable the ITKIOTransformMINC module for xfm transform files

**Bug Fixes**

* Set the default ITK multi-threader to "Platform" in Superbuild. This addresssed issues with multi-processing and the Google Colaborratory environment.
* Update expected results for Linux ppc64le in test ImageRegistrationMethodDisplacement1 and SLICImageFilter.
* The `GetPixelAsComplexFloat64` Image method in Python is correctly renamed to `__GetPixelAsComplexFloat64__`.



**Documentation**
* Add TCL, Ruby, Lua, R, Java, and C# languages for the Image and Transform IO example and documentation.
* Add "Image Registration Optimizer Weights" example illustrating usage of optimizer weights.
* Document details on naming conventions and object oriented, procedural interfaces.
* Document importance of registration initialization and center of rotation docs.
* Document ComposeScaleSkewVersorTransform in Sphinx overviews.
* Fix broken link in filters list.
* Add "IO Selection" examples for CSharp, C++, Java, Lua, Ruby and TCL.
* Add example illustrating how to override ITK's messages with Python's logging module.
* Separate the GetPixel example into dynamic and statically typed languages.
* Update N4 example to use bias field at input resolution
* Update `ImageViewer::SetApplication` docs.


**Compilation**

* CMake use "Ruby" find package. The CMake variable related to Ruby changed from "RUBY" prefix to "Ruby".
* Add test to echo CMakeCache.txt
* Replace virtualenv with venv
* Install wheel package to venv for packaging
* Use STEP_TARGETS option over EP Add_Step_Targets command
* Suppress MSVC getenv security warning.
* Set CMake Policy version to 3.10 in Superbuild
* Run HelloWorld examples when testing
