# SimpleITK Release v2.1.1

SimpleITK 2.1.1 has been released!

The patch release Updates the ITK version to 5.2.1.

**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/installation.html).

## Python Binary Downloads

Python binary wheels are available for download from PyPI. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package:

```
python -m pip install --upgrade pip
python -m pip install SimpleITK
```

## Anaconda Binary Downloads

SimpleITK packages are available for _conda_ Python package manager as a monolithic package:

```
conda install -c simpleitk simpleitk
```

or integrated into the _coda-forge_ package dependencies:

```
 conda install simpleitk --channel conda-forge
```

**Improvements**

* Update ITK superbuild version to v5.2.1.
