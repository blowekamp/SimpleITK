# SimpleITK Release v2.4.1

**Release Notes**


Announcing the SimpleITK 2.4.1 Release!

The release includes critical bug fixes and compilation issues including an update to ITK v5.4.2.


**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/index.html).

## Python Binary Downloads

- Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package from PyPI:
  ```
  python -m pip install --upgrade pip
  python -m pip install SimpleITK
  ```

The binary distribution now contains wheels built on the Python 3.11 stable API ( see [PEP 384](https://peps.python.org/pep-0384/) ) and should work with Python versions including and after 3.11.

## Anaconda Binary Downloads

SimpleITK Conda binaries are available for the conda-forge ecosystem. To get started run the following command:

```
conda create --name sitk python=3.12 simpleitk --channel conda-forge --override-channels
```

## Getting Started

To get started with pre-compiled Java or C# bindings, building the R binding via a devtools installer or building SimpleITK from source code see the [Getting Started Guide](https://simpleitk.readthedocs.io/en/master/gettingStarted.html).




**Bug Fixes**

* For windows addresses issue with incorrect computation with image of vector pixel type larger than 4 gigabytes. #2220

To upgrade to the latest pre-release Python binary package run:
```pip install --upgrade --pre SimpleITK --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v2.4.1```



**What's Changed**
* BUG: Correct SITK_MAX_DIMENSION usage - For Release by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2195
* ENH: Use stderr in R, and modify string formatting to avoid compiler … by @richardbeare in https://github.com/SimpleITK/SimpleITK/pull/2207
* Update ITK Superbuild version to 5.4.1 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2222
* Update ITK superbuild to 5.4.2 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2227


**Full Changelog**: https://github.com/SimpleITK/SimpleITK/compare/v2.4.0...v2.4.1
