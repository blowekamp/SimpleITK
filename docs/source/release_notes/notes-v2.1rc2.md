# SimpleITK Release v2.1rc2

Announcing the SimpleITK 2.1 Release Candidate 2!

Users and developers are encouraged to test the RC before the final release and report issues, bugs, and any compatibility problems.

**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/installation.html).

## Python Binary Downloads

  - Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package from GitHub releases:
  ```
  python -m pip install --upgrade pip
  python -m pip install --pre SimpleITK --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v2.1rc2
  ```
## Anaconda Binary Downloads

 Conda packages are available from Anaconda Cloud on the `SimpleITK` channel. These can be installed with:
  ```
conda install -c simpleitk/label/dev simpleitk
  ```



**Release Notes**


**New Features**

* Add `ImageRegistrationMethod::StopRegistration` method
* Add `StopRegistration` method to Demons based registration filters
* Update `HistogramMatchingImageFilter` to use named "referenceImage" input for second input image.


**Bug Fixes**

* R calls to nonexistent methods are now handled gracefully
* In `BinaryMagnitudeImageFilter` test, changed type from UInt32 to Int32 for defined C++ behavior, fixed Mac ARM testing failure.



**Documentation**

* Minor grammar and spelling changes to gettingStarted
* Improve documentation for [registration sampling strategies](https://simpleitk.readthedocs.io/en/master/registrationOverview.html#sampling)
* Add example demonstration [Java Image buffer interface](https://simpleitk.readthedocs.io/en/master/link_JavaGetSetBuffer_docs.html)
* Add multiple language [examples for ImageIOSelection](https://simpleitk.readthedocs.io/en/master/link_ImageIOSelection_docs.html)
* Added a [Windows build page](https://simpleitk.readthedocs.io/en/master/buildingWindows.html)



**Compilation**

* Fix comparison between signed and unsigned integer compiler warning
* Remove explicit instantiating of Image of deque of LabelObjectLine
* Update SWIG to 4 require in CMake find_package
