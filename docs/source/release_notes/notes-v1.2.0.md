# SimpleITK Release v1.2.0

We are pleased to announce the SimpleITK 1.2 Release!


## Installing SimpleITK

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK Read the Docs web page (http://simpleitk.readthedocs.io/en/release/Documentation/docs/source/installation.html).

- Python Binary Downloads

  - Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package form PyPI:
  ```
  python -m pip install --upgrade pip
  python -m pip install SimpleITK
  ```

  - Conda packages are available from Anaconda Cloud on the `SimpleITK` channel. These can be installed with:
  ```
  conda install -c simpleitk simpleitk
  ```

- A complete available set of compiled binaries, including select CSharp and Java distributions, along with source and data tar-balls are available on Source Forge (https://sourceforge.net/projects/simpleitk/files/SimpleITK/1.2.0/).

**Release Notes**

- Improvements
  - New look for ReadTheDocs, along with more examples and documentation. (http://simpleitk.readthedocs.io/en/master/)
  - Support for stream reading regions from files. The `ImageFileReader` adds the option to specify an image region to extract while reading from disk. (https://simpleitk.readthedocs.io/en/master/Examples/AdvancedImageReading/Documentation.html)
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
