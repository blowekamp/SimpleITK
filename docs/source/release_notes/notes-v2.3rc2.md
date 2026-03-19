# SimpleITK Release v2.3rc2


**Announcement**

Announcing the SimpleITK 2.3 Release Candidate 2!

This is expected to be the final RC before the 2.3.0 release. Users and developers are encouraged to test the RC before the final release and report issues, bugs, and any compatibility problems.

**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/index.html).

## Python Binary Downloads

- Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package from GitHub releases:
  ```
  python -m pip install --upgrade pip
  python -m pip install --pre SimpleITK --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v2.3rc2
  ```

**Release Notes**

**Behavior Changes**

* Removed Python 3.7 packaging.
* Restore functions for static members like ImageSeriesReader_GetGDCMSeriesIDs (restores 2.2 behavior).

  SWIG 4.1.0 change behavior to removing flattened static methods for objects. The compatible behavior can be restored by adding `-flatstaticmethod` argument to SWIG. The SimpleITK_PYTHON_FLATSTATICMETHOD CMake variable has been added to control the usage of this flag. It is currently enabled by default and is planned to default to OFF in future releases.

**Compilation**

* Add baseline images for `LaplacianSharpening` to update for ITK v5.4 changes.
* Update Superbuild Lua version to 5.4.6
* Additional CI changes.
