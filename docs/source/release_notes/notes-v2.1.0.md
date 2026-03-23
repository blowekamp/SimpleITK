# SimpleITK Release v2.1.0

SimpleITK 2.1.0 has been released!

The release includes new features, API changes, documentation updates and bug fixes. This is the first SimpleITK release to provide binaries for the new Apple M1 ARM.


**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/installation.html).

## Python Binary Downloads

Python binary wheels are available for download from PyPI. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package:

```
python -m pip install --upgrade pip
python -m pip install SimpleITK
```

## Apple M1 ARMv8 Support

Wheels with the platform tag "macxos-11_0_arm64" are available from PyPI, to provide initial support for the Apple M1 Silicon for Python 3.8 and 3.9.

## Anaconda Binary Downloads

SimpleITK packages are available for _conda_ Python package manager as a monolithic package:

```
conda install -c simpleitk simpleitk
```

or integrated into the _coda-forge_ package dependencies:

```
 conda install simpleitk --channel conda-forge
```




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
* Add `ImageRegistrationMethod::StopRegistration` method
* Add `StopRegistration` method to Demons based registration filters
* Update `HistogramMatchingImageFilter` to use named "referenceImage" input for second input image.

**Bug Fixes**

* Set the default ITK multi-threader to "Platform" in Superbuild. This addressed issues with multi-processing and the Google Colaboratory environment.
* Update expected results for Linux ppc64le in test ImageRegistrationMethodDisplacement1 and SLICImageFilter.
* The `GetPixelAsComplexFloat64` Image method in Python is correctly renamed to `__GetPixelAsComplexFloat64__`.
* R calls to nonexistent methods are now handled gracefully
* In `BinaryMagnitudeImageFilter` test, changed type from UInt32 to Int32 for defined C++ behavior, fixed Mac ARM testing failure.



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
* Update `ImageViewer::SetApplication` docs.* Minor grammar and spelling changes to gettingStarted
* Improve documentation for [registration sampling strategies](https://simpleitk.readthedocs.io/en/master/registrationOverview.html#sampling)
* Add example demonstration [Java Image buffer interface](https://simpleitk.readthedocs.io/en/master/link_JavaGetSetBuffer_docs.html)
* Add multiple language [examples for ImageIOSelection](https://simpleitk.readthedocs.io/en/master/link_ImageIOSelection_docs.html)
* Added a [Windows build page](https://simpleitk.readthedocs.io/en/master/buildingWindows.html)


**Compilation**

* CMake use "Ruby" find package. The CMake variable related to Ruby changed from "RUBY" prefix to "Ruby".
* Add test to echo CMakeCache.txt
* Replace virtualenv with venv
* Install wheel package to venv for packaging
* Use STEP_TARGETS option over EP Add_Step_Targets command
* Suppress MSVC getenv security warning.
* Set CMake Policy version to 3.10 in Superbuild
* Run HelloWorld examples when testing
* Fix comparison between signed and unsigned integer compiler warning
* Remove explicit instantiating of Image of deque of LabelObjectLine
* Update SWIG to 4 require in CMake find_package
