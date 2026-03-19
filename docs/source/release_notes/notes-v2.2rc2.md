# SimpleITK Release v2.2rc2

Tagged on 2/2/2022 we are happy to announce SimpleITK 2.2 Release Candidate 2!

Users and developers are encouraged to test the RC before the final release and report issues, bugs, and any compatibility problems.


**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/index.html).

## Python Binary Downloads

  - Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package from GitHub releases:
  ```
  python -m pip install --upgrade pip
  python -m pip install --pre SimpleITK --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v2.2rc2
  ```
## Anaconda Binary Downloads

 Conda packages are available from Anaconda Cloud on the `SimpleITK` channel. These can be installed with:
  ```
conda install -c simpleitk/label/dev simpleitk
  ```


**Release Notes**

**Compatibility Changes**

Require SimpleITK_INT64_PIXELIDS for 64-bit builds.
The Python ReadTransform method now returns a downcasted transform.


**New Features**

Update to ITK v5.3rc3
Improved Python packaging type information (PEP 561).
Improved types for manual Python procedural methods: Resample, GetArrayFromImage, GetImageFromArray, GetArrayViewFromImage, ReadImage, WriteImage, SmoothingRecursiveGaussian, DiscreteGaussian.


**Bug Fixes**

Additional baseline test image for AArch64/ARM64 systems.
Fix test failure when system has more than 127 processors.
Remove failing test with 32-bit pixel and JPEG file.
