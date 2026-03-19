# SimpleITK Release v1.2.2

Announcing the SimpleITK 1.2.2 patch release!

Many improvements have occurred to automate SimpleITK's continuous integration and packaging to enable more frequent releases, patches and updates.


## Installing SimpleITK

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](http://simpleitk.readthedocs.io/en/release/Documentation/docs/source/installation.html).

- Python Binary Downloads

  - Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package form PyPI:
  ```
  python -m pip install --upgrade pip
  python -m pip install SimpleITK
  ```

  - Conda packages are available from Anaconda Cloud on the `SimpleITK` channel. These can be installed with:
  ```
  conda install -c simpleitk simpleitk
  ```
   - Note: As of this announcement Conda packages version 1.2.2 for MacOS are missing until a configuration issue is resolved with Conda-build.

- A complete set of compiled binaries, including CSharp and Java distributions for windows, along with source and data archives are available on [Github release pages](https://github.com/SimpleITK/SimpleITK/releases/tag/v1.2.2).


**Release Notes**

- Bug Fixes
  - Fix `sitk::Show` stalling on Windows #661
  - Fix `ImageFileReader::GetDirection`  return the direction cosine matrix in wrong order #691

- Updates
  - Uses Insight Toolkit (ITK) version 4.13.2
  - Improved compatibility when built against ITK v5.0
  - Documentation fixes and improvements

- Note: SimpleITK v1.2.1 was tagged but due to a versioning issue it was not packaged.
