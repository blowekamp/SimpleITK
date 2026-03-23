# SimpleITK Release v2.0.1


**Announcement**

SimpleITK 2.0.1 has been released! The release provides minor patches for the 2.0 release to address bugs.



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

- Update ITK version along 5.1 release branch
- Fix SignedMaurerDistanceMap divide by zero error (#1213)
- Fix Python packaging description field content type (#1202)
- Fix symbol conflict with importing `tensorflow` (#1208, #1192)
