# SimpleITK Release v2.0.2


**Announcement**

SimpleITK 2.0.2 has been released! The release provides minor patches for the 2.0 release to address bugs.

Additionally Python 3.9 is supported and "manylinux2010" wheels are provided. This addresses interoperability with other "manylinux2010" wheels reported in some environments [#1252].



**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/gettingStarted.html).

## Python Binary Downloads

  - Python binary wheels are available for download from PyPI. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package:
  ```
  python -m pip install --upgrade pip
  python -m pip install SimpleITK
```

## Anaconda Binary Downloads

Conda packages are available from Anaconda Cloud on the `SimpleITK` channel. These can be installed with:

```
conda install -c simple simpleitk
```

To learn more about SimpleITK go to [simpleitk.org](https://simpleitk.org/).


**Bug Fixes**

- Fix return type for C# to IntPtr for  `Image::GetBufferAsVoid`, `Image::GetBufferAsUInt64` and `Image::GetBufferAsInt64` methods.
- Updated ITK to version 5.1.2
- Added Python 3.9 and manylinux2010 wheels with build scripts from 0da8a2.
