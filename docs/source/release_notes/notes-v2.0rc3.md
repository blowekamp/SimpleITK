# SimpleITK Release v2.0rc3

Announcing the SimpleITK 2.0 Release Candidate 3!

This is anticipated to be the last release candidate before 2.0 final. Users and developers are encouraged to test the RC before the final release and report issues, bugs, and any significant compatibility problems.

Additional release notes can be found in prior candidates:
- [Release Candidate 1](https://github.com/SimpleITK/SimpleITK/releases/tag/v2.0rc1)
- [Release Candidate 2](https://github.com/SimpleITK/SimpleITK/releases/tag/v2.0rc2)

**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/installation.html).

## Python Binary Downloads

  - Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package from GitHub releases:
  ```
  python -m pip install --upgrade pip
  python -m pip install --pre SimpleITK --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v2.0rc3
  ```
## Anaconda Binary Downloads

 Conda packages are available from Anaconda Cloud on the `SimpleITK` channel. These can be installed with:
  ```
conda install -c simpleitk/label/dev simpleitk
  ```

**Release Notes**

**API and Compatibility Changes**

* The environment variables related to the `Show` method are only checked once. The `Show` method now is a wrapper for the `ImageViewer` class, and the behavior changed. The `SITK_SHOW_EXTENSION` and `SITK_SHOW_COMMAND` environment variables if defined initialize the corresponding global defaults *only* the first time accessed. The environment variables `SITK_COLOR_COMMAND` and `SITK_SHOW_3D_COMMAND` are removed as the `ImageViewer` class allows for direct configuration of the command.


**New Features**

* Rewrote `Show` to use `ImageViewer` class.
* Added "~/Application" path to `ImageView` application search path for Mac.
* Add custom Python procedures or `DiscreteGaussian`, `SmoothingRecursiveGaussian`, `ReadImage` and `WriteImage` to support keyword arguments.
* Add to the `WriteImage` Python procedure the keyword only arguments `imageIO` and `compressor`.
* Use `NPasteImageFilter` from the SimpleITKFilters remote ITK module to replace `PasteImageFilter`.
* Add to SimpleITK's `PasteImageFilter`:
  - `DestinationSkipAxes` parameter
  - Support for pasting lower dimension to higher dimension image e.g 2D slice into 3D volume
  - Ability to use a constant value as input instead of image
* Add Python `__setitem__` for [] operator support:
  - assignment constant to a sliced indexed region
  - assignment of lower dimension image to matching sliced indexed region
* Add method to `ImageFileReader::GetImageIOFromFileName`  get the ITK ImageIO automatically used for file.
* Update superbuild Swig version to 4.0.2.


**Bug Fixes**

- Fix the `ImageRegistrationMethod` exception to use `GetPixelIDTypeAsString`
- Update `ndarray.tostring` to `tobyte` ( `tostring` deprecated in numpy 1.19.0 )


**Documentation**

* Update doc strings for Python and JAVA from JSON filter descriptions.
* Update examples to use slice based assignment instead of `PasteImageFilter`.
* Update the tutorials page.
* Update FAQ.
* Improve `WriteImage` Doxygen documentation.
* Update RTD `Show` procedure documentation.
* Add custom HTML Doxygen header with dynamic timestamp insertion, and privacy policy.
* Add procedural example to IO page.
* Updating the main Doxygen page.


**Compilation**

* Address signed to unsigned comparison compiler warnings.
* Fix `PYTHON_EXECUTABLE` being undefined in CMake for Doxygen.
* Add Doxygen MathJAX URL as CMake option.

**Miscellaneous**

* Test the `ImageViewer` class and `Show` procedure.
* Update and add more testing for Python `ImageRead` and `ImageWrite` procedures.
* Prefer using absolute imports in Python.
