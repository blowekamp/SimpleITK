# SimpleITK Release v2.2.1

**Release Notes**


SimpleITK 2.2.1 has been released!

The patch release includes bug fixes, and updates.


**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/installation.html).

## Python Binary Downloads

Python binary wheels are available for download from PyPI. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package:

```
python -m pip install --upgrade pip
python -m pip install SimpleITK
```


## Anaconda Binary Downloads

SimpleITK packages are available for the _conda_ Python package manager as a monolithic package:

```
conda install -c simpleitk simpleitk
```

The packages are also on conda-forge with dependecies on the ecosystem:

```
conda install --channel conda-forge simpleitk
```


**Release Notes**


**New Features**

Update ITK to 5.3.0 tagged release.
Add Python 3.11 binary packages.
Update LabelOverlapMeasures with ITK 5.3 changes: existing computation for FalsePositiveError was renamed to
    FalseDiscoveryRate, and the computation for FPE corrected.


**Bug Fixes**

Fix segmentation fault with exception in inplace operators, caused by invalid images after C++ move.
Fix viewer test to use system python executable.
Fix duplicate GTest CMake configuration from ITK
Support CMake DOWNLOAD_EXTRACT_TIMESTAMP option for correct SWIG and PCRE file timestamps.
Fix numpy character dtype conversion warning.
Fix error with itk::LabelOverlapMeasuresImageFilter::SetInput.


**Compilation and CI**

Update Github actions to fix warning.
Fix CircleCI Python 3.8 builds.
