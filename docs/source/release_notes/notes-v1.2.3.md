# SimpleITK Release v1.2.3

Announcing the SimpleITK 1.2.3 patch release!


## Installing SimpleITK

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](http://simpleitk.readthedocs.io/en/release/Documentation/docs/source/installation.html).

- Python Binary Downloads

  - Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package from PyPI:
  ```
  python -m pip install --upgrade pip
  python -m pip install SimpleITK
  ```

  - Conda packages are available from Anaconda Cloud on the `SimpleITK` channel. These can be installed with:
  ```
  conda install -c simpleitk simpleitk
  ```

- A complete set of compiled binaries, including CSharp and Java distributions for Windows, along with source and data archives are available on [Github release pages](https://github.com/SimpleITK/SimpleITK/releases/tag/v1.2.3).


**Release Notes**

- Bug Fixes
  - Fixes resulting image size with image slicing with stride. The images resulting form the `SliceImageFilter` and Python sliced indexing with strides may not be larger and match the size of NumPy.

- Updates
  - Uses latest Insight Toolkit (ITK) on release-v4.13 branch.
