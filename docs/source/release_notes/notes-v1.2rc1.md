# SimpleITK Release v1.2rc1

We are pleased to announce SimpleITK 1.2 Release candidate 1.

**Release Notes**

- Improvements
  - New look for ReadTheDocs, along with more examples and documentation. (http://simpleitk.readthedocs.io/en/master/)
  - Support for stream reading regions from files. The `ImageFileReader` adds the option to specify a image region to extract while reading from disk. (https://simpleitk.readthedocs.io/en/master/Examples/AdvancedImageReading/Documentation.html)
  - Option to specify the ITK `ImageIO` used in the `ImageFileReader class` or `ReadImage` procedure. (https://simpleitk.readthedocs.io/en/master/Examples/ImageIOSelection/Documentation.html)
  - Multi-resolution BSpline registration by adapting the `BSplineTransform` resolution in the `ImageRegistrationMethod`. (https://simpleitk.readthedocs.io/en/master/Examples/ImageRegistrationMethodBSpline3/Documentation.html)
  - Added `BSplineDecompositionImageFilter` , and new `BSplineTransform` initialization from coefficient images.
  - Added `ImageRegistrationMethod` method `GetMetricSamplingPercentage` to get the number of samples used after each iteration.
  - Wrapping of the SLICImageFilter ( http://hdl.handle.net/10380/3596 ).
  - New `ImageViewer` class to support state-full parameters while providing the behavior supported by the `Show` procedure.
  - Added support for multi-component images to `ClampImageFilter`, `MeanProjectionImageFilter`, `SumProjectionImageFilter`, and the  `TileImageFilter`.
  - Improvements to the R interface and packaging.
  - Fix 4D Image support in the Python `GetArrayFromImage` and `GetArrayViewFromImage` procedures.
  - Added Transform `FlattenTransform` method, to combine nested composite transforms.
  - ITKv5 compatibility enables SimpleITK to be compiled against ITKv5 betas.
  - The default and binaries are built against the proven ITK 4.13.1 release branch. Comprehensive SimpleITK testing has lead to improvements in upstream ITK. (https://github.com/InsightSoftwareConsortium/ITK/releases/tag/v4.13.1)
  - Miscellaneous build and documentation fixes.


**Python Binary Downloads**

   - Many binary Python wheels are available for download and testing. It is important to have the latest pip version to ensure correct wheel compatibility. To install the SimpleITK package:
  ```
  pip install --upgrade pip
  pip install --pre -f https://github.com/SimpleITK/SimpleITK/releases/tag/v1.2rc1 SimpleITK
