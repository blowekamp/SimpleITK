# SimpleITK Release v2.4rc2

Announcing the SimpleITK 2.4 Release Candidate 2!

This release was made with new infrastructure in Github Actions. Users and developers are encouraged to test the RC before the final release and report issues, bugs, and any compatibility problems.

**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/index.html).

## Python Binary Downloads

- Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package from GitHub releases:
  ```
  python -m pip install --upgrade pip
  python -m pip install --pre SimpleITK --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v2.4rc2
  ```

Please note that the binary distribution now contains wheels build on the Python 3.11 stable API ( see [PEP 384](https://peps.python.org/pep-0384/) ). These wheels contain "cp311-abi3" in the filename and should work with Python versions including and after 3.11.






**Release Notes**

**New Features**
* Updated to ITK 5.4.0 [release](https://github.com/InsightSoftwareConsortium/ITK/releases) benefiting from all of the significant improvements in the underlying toolkit.
* Add `SimpleITK_PYTHON_USE_USE_LIMITED_API` CMake option.
* Build SimpleITK packages with limited Python API support for Python >=3.11.
* Add `ThresholdAbove`, `ThresholdBelow` and `OutsideValue` methods to `ThresholdImageFilter`.
* Add to Image readers `SpacingWarningRelThreshold` accessors.
* Use new `PathType` for file paths across toolkit.
* Improve Python support for `pathlib.Path` across the toolkit with custom conversion for new `PathType`.
* Add Image member functions `IsSameImageGeometryAs`, `IsCongruent`.
* Update Superbuild version of PCRE2 to 10.43
* Update Superbuild version of GTest to 1.14.0
* Update Superbuild SWIG to 4.2.1


**Behavior Changes**

* CenteredTransformInitializer now returns DowncastedTransform in Python.


**Bug Fixes**

* Refactor `ImageViewer` class to fix initialization problems.
* Fix MD5 hash for CSharp ImageGetSetBuffer example.
* Use ITK's SizeGreatestPrimeFactor for `FFTPadImageFilter` , which is 5 for VNL and 13 for FFTW.


**Documentation**

* Correct sphinx registration transform order in Registration Overview.
* Fix undeleted N4 filter in example.
* DICOM meta-data tags are lower case.
* Update documentation with Python version support policy.
* Add simplex delta documentation for Amoeba optimizer.
* Include a DICOM tag number with upper case letter in example.
* Fix math Latex notation for T_opt.
* Add FAQ entry for non-ASCII paths on windows.
* Added description of `LabelShapeStatisticFilter`'s bounding box.


**Compilation and Infrastructure**

* Use GitHub Actions for packing and CI, removing Azure Pipelines.
* Fix build dependency on option ITK GenericLabelInterpolator module.
* Apply clang tidy modernize-concat-nested-namespaces, modernize-avoid-bind, modernize-make-unique.
* Code improvements for modern C++17.
* Get CommentSpellCheck from PyPI.
* Format Python files per Black.
* Use pre-commit for black, yaml, json checks and other linting.
* In R, remove overloaded AddCommand method.
* Restrict SWIGWORDSIZE64 definition to required SWIG versions.
* Use optional components feature when finding ITK.
* Directly use fold expression in TypeListHasPixelIDValue.
* Package Java and CSharp on Linux.
* Use new CMP0156 to address duplicate library warnings.
