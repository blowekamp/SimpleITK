# SimpleITK Release v2.2rc4


Announcing the SimpleITK 2.2 Release Candidate 4!

Users and developers are encouraged to test the RC before the final release and report issues, bugs, and any compatibility problems. This is the final RC before the 2.2 final release.

In collaboration with the [Elastix](https://github.com/SuperElastix/elastix) team, the addition of [SimpleElastix](https://simpleelastix.github.io) as a compile time option is the highlight of this release. Please download the SimpleITK source and compile with the CMake SimpleITK_USE_ELASTIX  option enabled to try out this experimental feature.

**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/index.html).

## Python Binary Downloads

* Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package from GitHub releases:
  ```
  python -m pip install --upgrade pip
  python -m pip install --pre SimpleITK --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v2.2rc4
  ```


**Release Notes**

**New Features**

* Add SimpleITK_USE_ELASTIX as a compile time option for [SimpleElastix](https://github.com/SuperElastix/SimpleElastix) classes: ElastixImageFilter, TransformixImageFilter. This option is currently disabled by default.
* Update ITK to 5.3rc04

**Bug Fixes**

* Fix undefined behavior in BasicFilters.Cast test
* Fix GenericException assignment by using shared_ptr internally
* Correct SinRegularizedHeaviside option for ScalarChanAndVeseDenseLevelSetImageFilter


**Documentation**

* Reformat Python example for flake8
* Improve ImageSeriesReader documentation for method used to determining pixel type.

**Compilation**

* Update MacOSX version in CI
* Build with SimpleITK_USE_ELASTIX enabled on Github Actions.
