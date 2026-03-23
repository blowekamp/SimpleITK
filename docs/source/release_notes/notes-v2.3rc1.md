# SimpleITK Release v2.3rc1



**Announcement**

Announcing the SimpleITK 2.3 Release Candidate 1!

Users and developers are encouraged to test the RC before the final release and report issues, bugs, and any compatibility problems.

**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/index.html).

## Python Binary Downloads

- Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package from GitHub releases:
  ```
  python -m pip install --upgrade pip
  python -m pip install --pre SimpleITK --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v2.3rc1
  ```

**Release Notes**


**New Features**

In Python, add support for masked images to `__setitem__` as index parameter. The mask is considered a binary mask where assignment occurs. For example `img[img<0] = 0` can be used to remove negative numbers.
In Python, add `MinimumMaximum() -> Tuple[float, float]` procedure for `MinimumMaximumImageFilter`.
In Python, add `pathlib.Path` support to Transform IO methods.

Add `Clamp` boolean option to UnsharpMaskFilter.
Add `Image::ToVector` and `Image::ToScalar` methods to perform fast in-place conversion between vector pixel types (VectorImage), and high spatial dimension scalar images.
Add initial seed values to `FastMarchingBaseImageFilter` and `FastMarchingImageFilter`.
Add `KernelType` parameter `RankImageFilter` to support non box kernel shapes.
Wrap `MaskedAssignImageFilter`.
Add `AssignConstant` to `MaskedAssignImageFilter` and support for vector input images.
Internally replace `NPasteImageFilter` with `PasteImageFilter`.
Add to `N4BiasFieldCorrectionImageFilter` measurements of `CurrentLevel`, `ElapsedIterations`, and `CurrentConvergenceMeasurement` for observers.
Update `FFTNormalizedCorrelationImageFilter` to use named inputs.
Add missing `RequiredFractionOfOverlappingPixels` parameter to `FFTNormalizedCorrelationImageFilter`.
Various improvements to SimpleElastix integration and support.

**Behavior Changes**

Change `MaskImageFilter` and `MaskNegatedImageFilter to only support `sitkUInt8` pixel types for masked input. Previously, the filter erroneously expected both inputs to be of the same type.


**Bug Fixes**

Fix already defined `GTest::Main` issue with using ITK out of a build tree.
Add an internal "Proxy" image to safely support exceptions with certain inplace operations in C++ and Python.
Fix `FastMarchingUpwindGradientImageFilter` setting target point before setting stopping criteria.
Test support of `LandmarkBasedInitialization` for `Similarity3DTransforms`.


**Documentation**

Added to Sphinx generated documentation images and text output such as in [Fast Marching Segmentation](https://simpleitk.readthedocs.io/en/master/link_FastMarchingSegmentation_docs.html) and [Image Registration Method1](https://simpleitk.readthedocs.io/en/master/link_ImageRegistrationMethod1_docs.html) examples.
Fixed bug in example, working with DICOM tags.
Update JSON docs form ITK XML
Document specifying pixel type as part of reading.
Add information on dependency between GetGDCMSeriesIDs and GetGDCMSeriesFileNames.
In DicomTagsExample, included example run of DicomImagePrintTags code in the Sphinx docs.
Fix time date ordering in string in DicomSeriesFromArray.R example.


**Compilation**

Require C++17 for building SimpleITK.
Update GTest Superbuild version to 1.13.0
Update Swig Superbuild version to 4.1.1
Various C++17 modernization in testing include more usage of initializer lists, and namespaces.
Change PimpleImageBase to return unique_ptr over raw.
Address unused return value in image transform point methods and in transform tests.
Use unique_ptr for Transform interface.
Remove references to legacy SITK_4D_IMAGES definition.
Enable ITK_LEGACY_REMOVE by default in Superbuild.
Update ITK enum to remove legacy enums type.
Update to CSharp DotNet version 4 by default.
Update SimpleITK Superbuild Lua to 5.4.4 and enable usage of Lua 5.4.
Remove disutils and setupegg.py from Python packaging fallback.
Add pyproject.toml to address wheel dependency warning
