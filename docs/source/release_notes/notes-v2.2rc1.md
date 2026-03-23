# SimpleITK Release v2.2rc1


Announcing the SimpleITK 2.2 Release Candidate 1!

Users and developers are encouraged to test the RC before the final release and report issues, bugs, and any compatibility problems.

**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/index.html).

## Python Binary Downloads

  - Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package from GitHub releases:
  ```
  python -m pip install --upgrade pip
  python -m pip install --pre SimpleITK --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v2.2rc1
  ```
## Anaconda Binary Downloads

 Conda packages are available from Anaconda Cloud on the `SimpleITK` channel. These can be installed with:
  ```
conda install -c simpleitk/label/dev simpleitk
  ```

## Linux aarch64 wheels

Included in this release candidate are "manylinux2014_aarch64" wheels to provide initial support for the ARMv8-A (aarch64) on Linux.


**Release Notes**

**Compatibility Changes**

* The string value of sitkBSpline changed to "sitkBSpline3"
* Update to CMake 3.16.3 requirements
* SimpleITK libraries now require C++14


**New Features**

* Add wrapping of TransformGeometryImageFilter
* Improve Python GetImageFromArray performance
* Add different orders for the BSpline interpolator
* Add Python 3.10 binaries
* Add methods to the Image class, EvaluateAtPhysicalPoint and EvaluateAtContinuousIndex
* Add Python interface for Image's EvaluateAt methods
* Update ITK version to after 5.3rc02
* Downcast returned Transform objects to concrete class in Python
* Add VectorDistanceMap results to Danielsson distance filters
* Support max dimension in "projection" filters.


**Bug Fixes**

* Fix unknown enum for smoothing DisplacementFieldTransforms
* Change expected number of iterations for LBFGS2 test due to ITK changes


**Documentation**

* Add CSharp DicomSeriesReader example
* Add section about the missing SimpleITK DLL in CSharp
* Improve Doxygen documentation rendering with updated packages and improved efficiency of updates
* Add C++ and C# versions of N4 bias example
* Add favicon to Sphinx docs
* Update ImageGetSetBuffer.cs example
* Doc page for the path length issue for Windows.
* Add documentation on registration reproducibility.


**Compilation and CI**

* Update superbuild version PCRE to 8.45
* Update superbuild googletest version to 1.11
* Add dockerfile to build manylinux2014 on AZP for packaging
* Fix unused type alias warning
* Make CreateInterpolator methods with hidden linkage
* Remove Nightly Doxygen on CircleCI
* Merge Lint and Spell workflows
* Address clang lambda capture warning
* AZP Packaging use macos-10.15
* Remove old manylinux1 builds
* Dockerfile to build on linux-aarch64
