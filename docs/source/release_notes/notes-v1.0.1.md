# SimpleITK Release v1.0.1

**Announcement**

The SimpleITK Development Team and the Insight Software Consortium are announcing the release of version 1.0.1 of SimpleITK.


SimpleITK is available for the following programing languages: Python, R, Java, C#, C++, Lua, Ruby, and TCL. Binary versions of the toolkit are available for the GNU Linux, Apple OS X, and Microsoft Windows operating systems. All of the source code is freely available on Github under an Apache-2.0 license.

We are in the process of migrating the old SimpleITK Wiki (https://itk.org/Wiki/SimpleITK), to Read The Docs (http://simpleitk.readthedocs.io/en/latest/).

## Downloading SimpleITK

Complete instructions on getting started with SimpleITK including downloading binaries can be found on Read The Docs (http://simpleitk.readthedocs.io/en/latest/Documentation/docs/source/installation.html).

- Python Binary Downloads

  - Python binary wheels are available for download. It is important to have the latest version of pip to ensure correct wheel compatibility and installation. To install the latest SimpleITK package form PyPI:
  ```
  python -m pip install --upgrade pip
  python -m pip install SimpleITK
  ```

  - Many Conda package have been upload to Anaconda Cloud on the `SimpleITK`. These can be installed with:
  ```
  conda install -c simpleitk simpleitk
  ```

- A complete available set of compiled binaries, including select CSharp and Java distributions, along with source and data tar-balls are available on Source Forge (https://sourceforge.net/projects/simpleitk/files/SimpleITK/1.0.0/).

- SimpleITK has a robust Superbuild CMake system which minimized the dependencies needed to build SimpleITK from scratch. Complete compilation instructions can be found on Read the Docs (http://simpleitk.readthedocs.io/en/latest/Documentation/docs/source/building.html).


**Release Notes**

- Improvements
  - Uses ITK 4.11.1, tested for compatibility with ITK 4.12
  - Improved error reporting for sitk.Show
  - Improved search paths for sitk.Show
  - Updated documentation from ITK and corrected spelling mistakes

- Bug Fixes
  - Numerous compilation issues related to R and mingw
  - Fix CMake searching for Lua and Python
  - Fix enabling SITK_4D_IMAGE
  - Fix SimpleITKConfig.cmake.in compatibility for installed ITK
  - Fix Superbuild issues with the Example directory as a project
  - Fix out of bound array access in Image4D.ExtractImageFilter test
  - Fixes to Python's setup.py for build_ext
