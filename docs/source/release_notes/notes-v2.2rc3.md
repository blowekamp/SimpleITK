# SimpleITK Release v2.2rc3

Announcing the SimpleITK 2.2 Release Candidate 3!

Users and developers are encouraged to test the RC before the final release and report issues, bugs, and any compatibility problems. The SimpleITK 2.2.0 final is planned to be published shortly after the next ITK tag, either v5.3rc04 or  v5.3.0.

**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/index.html).

## Python Binary Downloads

* Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package from GitHub releases:
  ```
  python -m pip install --upgrade pip
  python -m pip install --pre SimpleITK --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v2.2rc3
  ```

## Anaconda Binary Downloads

 Conda packages are available from Anaconda Cloud on the `SimpleITK` channel. These can be installed with:
  ```
conda install -c simpleitk/label/dev simpleitk
  ```

Note that pre-release packages with the "dev" channel may be deleted in the future after the releases are made.

**Release Notes**

**API Changes/Compatibility Changes**

* Replace internal typelist meta-programming with typelist2::typelist utilizing variadic template.

**New Features**

* Update ITK superbuild version to ITK hash ee664da6bb1a83cdf82e2582126e65119a4de1a4.
* Add missing GridImageSource::WhichDimensions method.

**Bug Fixes**

* On Apple OSX use .dylib extension for C# native library
* Fix setup.py to not load SimpleITK native library.
* Fix Python resample procedure handling of unexpected keyword argument.

**Documentation**

* Added FAQ entry: Why does my image appear to be empty / all black / blank when visualized?
* Update N4BiasFieldCorrection example to save full corrected image.

**Compilation**

* Update CircleCI configure
* Various CI maintenance update including updating OS images used and tool versions.
* Add CSharp building and packaging in AZP for Mac OSX.
