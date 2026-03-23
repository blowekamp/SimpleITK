# SimpleITK Release v2.3.0


**Announcement**

Announcing the SimpleITK 2.3.0 Release!

The release includes new features, behavior changes, documentation updates and bug fixes.


**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/gettingStarted.html).

## Python Binary Downloads

Python binary wheels are available for download from PyPI. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package:

```
python -m pip install --upgrade pip
python -m pip install SimpleITK
```


## Anaconda Binary Downloads


The packages are available on conda-forge with dependecies on the ecosystem:

```
conda install --channel conda-forge simpleitk
```

Starting with SimpleITK 2.3.0, binary packages will *no longer be available* in the "simpleitk" anaconda channel. Older versions continue to be available in that channel.


**Contributors**

Thank you to all contributors to SimpleITK and ITK. The new contributors to SimpleITK include @mbopfNIH @kaspermarstal @umasehs @caolonghao @wbzyl.

**Release Notes**


**New Features**

* Added `sitkLabelLinear` interpolator for multi-label images. The implementation is the `LabelImageGenericInterpolateImageFunction` class from GenericLabelInterpolator ITK remote module. ( Contributed by @dyollb )
* In Python, add support for masked images to `__setitem__` as index parameter. The mask is considered a binary mask where assignment occurs. For example `img[img<0] = 0` can be used to remove negative numbers.
* In Python, add `MinimumMaximum() -> Tuple[float, float]` procedure for `MinimumMaximumImageFilter`.
* In Python, add `pathlib.Path` support to Transform IO methods.
* Add `Clamp` boolean option to UnsharpMaskFilter.
* Add `Image::ToVector` and `Image::ToScalar` methods to perform fast in-place conversion between vector pixel types (VectorImage), and high spatial dimension scalar images.
* Add initial seed values to `FastMarchingBaseImageFilter` and `FastMarchingImageFilter`.
* Add `KernelType` parameter `RankImageFilter` to support non box kernel shapes.
* Wrap `MaskedAssignImageFilter`.
* Add `AssignConstant` to `MaskedAssignImageFilter` and support for vector input images.
* Internally replace `NPasteImageFilter` with `PasteImageFilter`.
* Add to `N4BiasFieldCorrectionImageFilter` measurements of `CurrentLevel`, `ElapsedIterations`, and `CurrentConvergenceMeasurement` for observers.
* Update `FFTNormalizedCorrelationImageFilter` to use named inputs.
* Add missing `RequiredFractionOfOverlappingPixels` parameter to `FFTNormalizedCorrelationImageFilter`.
* Various improvements to SimpleElastix integration and support.

**Behavior Changes**

* Change to CMake FindPython module for configuration of the python build environment. CMake configuration variable such as "PYTHON_EXECUTABLE" are now changed to "Python_EXECUTABLE". Additionally, the new CMake module uses "modern" logic for detecting which python executable to use, and the "Python_EXECUTABLE" CMake variable may need to be set to ensure the correct python environment is used.
* Change `MaskImageFilter` and `MaskNegatedImageFilter` to only support `sitkUInt8` pixel types for masked input. This unifies the supported mask image types between these two filters and the `MaskedAssignedImageFilter` to match SimpleITK's  [common conventions for mask images](https://simpleitk.readthedocs.io/en/master/conventions.html#mask-image-types-and-default-values).
  * For the `MaskImageFilter` it is recommended to update to casting the mask input parameter to `sitkUInt8` pixel type. This is compatible with versions before SimpleITK 2.0.
  * The `MaskNegatedImageFilter` old behavior erroneously expected both inputs to be of the same type. The new behavior expects the inputs to be of `sitkUInt8`
* Removed Python 3.7 packaging.
* Restore functions for static members like ImageSeriesReader_GetGDCMSeriesIDs (restores 2.2 behavior).
   SWIG 4.1.0 changed behavior to removing flattened static methods for objects. The compatible behavior can be restored by adding `-flatstaticmethod` argument to SWIG. The SimpleITK_PYTHON_FLATSTATICMETHOD CMake variable has been added to control the usage of this flag. It is currently enabled by default and is planned to default to OFF in future releases.


**Bug Fixes**

* Fix already defined `GTest::Main` issue with using ITK out of a build tree.
* Add an internal "Proxy" image to safely support exceptions with certain in place operations in C++ and Python.
* Fix `FastMarchingUpwindGradientImageFilter` setting target point before setting stopping criteria.
* Test support of `LandmarkBasedInitialization` for `Similarity3DTransforms`.


**Documentation**

* Added to Sphinx generated documentation images and text output such as in [Fast Marching Segmentation](https://simpleitk.readthedocs.io/en/master/link_FastMarchingSegmentation_docs.html) and [Image Registration Method1](https://simpleitk.readthedocs.io/en/master/link_ImageRegistrationMethod1_docs.html) examples.
* Fixed bug in example, working with DICOM tags.
* Update JSON docs form ITK XML
* Document specifying pixel type as part of reading.
* Add information on dependency between GetGDCMSeriesIDs and GetGDCMSeriesFileNames.
* In DicomTagsExample, included example run of DicomImagePrintTags code in the Sphinx docs.
* Fix time date ordering in string in DicomSeriesFromArray.R example.


**Compilation**

* Require C++17 for building SimpleITK.
* Update GTest Superbuild version to 1.13.0
* Update Swig Superbuild version to 4.1.1
* Various C++17 modernization in testing include more usage of initializer lists, and namespaces.
* Change PimpleImageBase to return unique_ptr over raw.
* Address unused return value in image transform point methods and in transform tests.
* Use unique_ptr for Transform interface.
* Remove references to legacy SITK_4D_IMAGES definition.
* Enable ITK_LEGACY_REMOVE by default in SuperBuild.
* Update ITK enum to remove legacy enums type.
* Update to CSharp DotNet version 4 by default.
* Update SimpleITK Superbuild Lua to 5.4.4 and enable usage of Lua 5.4.
* Remove disutils and setupegg.py from Python packaging fallback.
* Add pyproject.toml to address wheel dependency warning.
* Add baseline images for `LaplacianSharpening` to update for ITK v5.4 changes.
* Update SuperBuild Lua version to 5.4.6.
* Many continuous integration improvements.
