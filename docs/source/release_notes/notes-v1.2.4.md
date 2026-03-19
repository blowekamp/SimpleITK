# SimpleITK Release v1.2.4

Announcing the SimpleITK 1.2.4 patch release!

**_NOTE:_** This will be the last SimpleITK release with Python 2.7 support or pre-built 32-bit binaries.

## Installing SimpleITK

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](http://simpleitk.readthedocs.io/en/release/Documentation/docs/source/installation.html).

- Python Binary Downloads

  - Now including Python 3.8 support!
  - Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package from PyPI:
  ```
  python -m pip install --upgrade pip
  python -m pip install SimpleITK
  ```

  - Conda packages are available from Anaconda Cloud on the `SimpleITK` channel. These can be installed with:
  ```
  conda install -c simpleitk simpleitk
  ```

- A complete set of compiled binaries, including CSharp and Java distributions for Windows, along with source and data archives are available on [Github release pages](https://github.com/SimpleITK/SimpleITK/releases/tag/v1.2.4).


**Release Notes**

- Bug Fixes
  - Addresses reported DICOM buffer overflows
  - Reduces MTime modification when using N4BiasFieldCorrection to prevent integer overflow on Windows

- Updates
  - Uses latest Insight Toolkit (ITK) on release-v4.13 branch. Includes updating GDCM along release-2-8 branch for bug fixes.
