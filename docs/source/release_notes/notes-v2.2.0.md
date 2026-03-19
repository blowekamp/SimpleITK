# SimpleITK Release v2.2.0

**Announcement**


SimpleITK 2.2.0 has been released!

The release includes new features, API changes, documentation updates and bug fixes.

A highlight of this release is the addition of SimpleElastix as a compile time option in SimpleITK.



**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/installation.html).

## Python Binary Downloads

Python binary wheels are available for download from PyPI. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package:

```
python -m pip install --upgrade pip
python -m pip install SimpleITK
```


**Linux aarch64 Support ##**

Included in this release are "manylinux2014_aarch64" wheels to provide support for the ARMv8-A (aarch64) on Linux.


## Anaconda Binary Downloads

SimpleITK packages are available for the _conda_ Python package manager as a monolithic package:

```
conda install -c simpleitk simpleitk
```



**Release Notes**


**Compatibility Changes**

* The string value of sitkBSpline changed to "sitkBSpline3".
* Update to CMake 3.16.3 requirements.
* SimpleITK libraries now require C++14
* Require SimpleITK_INT64_PIXELIDS for 64-bit builds.
* The Python ReadTransform method now returns a downcasted transform.
* Replace internal typelist meta-programming with typelist2::typelist utilizing variadic templates.



**New Features**

* Add SimpleITK_USE_ELASTIX as a compile time option to incorporate SimpleElastix classes: ElastixImageFilter, TransformixImageFilter into the SimpleITK binary. By default, this  option is disabled and the classes are not available in the SimpleITK binary distributions. To make these classes available you will need to [build SimpleITK from its source code](https://simpleitk.readthedocs.io/en/master/building.html) with the option turned on.
* Add wrapping of TransformGeometryImageFilter.
* Add EvaluateAtPhysicalPoint and EvaluateAtContinuousIndex methods to Image class.
* Improve Python GetImageFromArray performance.
* Add different orders for the BSpline interpolator.
* Downcast returned Transform objects to concrete class in Python.
* Add VectorDistanceMap results to Danielsson distance filters.
* Support max dimension in "projection" filters.
* Improved Python packaging type information (PEP 561).
* Improved types for manual Python procedural methods: Resample, GetArrayFromImage, GetImageFromArray, GetArrayViewFromImage, ReadImage, WriteImage, SmoothingRecursiveGaussian, DiscreteGaussian.
* Add missing GridImageSource::WhichDimensions method.
* Update ITK to 5.3rc04.




**Bug Fixes**

* Fix unknown enum for smoothing DisplacementFieldTransforms.
* Change expected number of iterations for LBFGS2 test due to ITK changes.
* Additional baseline test image for AArch64/ARM64 systems.
* Fix test failure when system has more than 127 processors.
* Remove failing test with 32-bit pixel and JPEG file.
* On Apple OSX use .dylib extension for C# native library.
* Fix setup.py to not loading SimpleITK native library.
* Fix Python resample procedure handling of unexpected keyword argument.
* Fix undefined test behavior expected in BasicFilters.Cast test.
* Fix GenericException assignment by using shared_ptr internally.
* Correct SinRegularizedHeviside option for ScalarChanAndVeseDenseLevelSetImageFilter.



**Documentation**

* Add CSharp DicomSeriesReader example.
* Add section about the missing SimpleITK DLL in CSharp.
* Improve Doxygen documentation rendering with updated packages and improved efficiency of updates.
* Add C++ and C# versions of N4 bias example.
* Add favicon to Sphinx docs.
* Update ImageGetSetBuffer.cs example.
* Doc page for the path length issue for Windows.
* Add documentation on registration reproducibility.
* Added FAQ entry: Why does my image appear to be empty / all black / blank when visualized?
* Update N4BiasFieldCorrection example to save full corrected image.
* Reformat Python example for flake8.
* Improve ImageSeriesReader documentation for determining pixel type.



**Compilation and CI**

* Update superbuild version PCRE to 8.45.
* Update superbuild googletest version to 1.11.
* Add dockerfile to build manylinux2014 on AZP for packaging.
* Fix unused type alias warning.
* Make CreateInterpolator methods with hidden linkage.
* Remove Nightly Doxygen on CircleCI.
* Merge Lint and Spell workflows.
* Address clang lambda capture warning.
* AZP Packaging use macos-10.15.
* Remove old manylinux1 builds.
* Dockerfile to build on linux-aarch64.
* Update CircleCI configuration.
* Various CI maintenance update including updating OS images used and tool versions.
* Add CSharp building and packaging in AZP for Mac OSX.
* Update MacOSX version.
* Build with SimpleITK_USE_ELASTIX on Github Actions.
