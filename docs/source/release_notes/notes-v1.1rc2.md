# SimpleITK Release v1.1rc2

We are pleased to announce SimpleITK 1.1 Release candidate 2.

**Release Notes**

Please see the [1.1rc1 release notes](https://github.com/SimpleITK/SimpleITK/releases/tag/v1.0.1)  for additional information since the 1.0.1 release.

- Improvements
  - Fixes and testing for image file reading and writing of 64-bit integer images across platforms.
  - Added ImageReaderBase::GetRegisteredImageIOs method to obtain list of loaded ITK ImageIO modules.
  - Added sitk::Version::ITKModulesEnabled  method to obtain a list of ITK enabled modules when SimpleITK was built.
  - Added optional wrapping of the CoherenceEnahancingDiffusionImage filter ( this will not be enabled in binary distributions ).
  - Miscellaneous build and documentation fixes.

**Python Binary Downloads**

   - Many binary Python wheels are available for download and testing. It is important to have the latest pip version to ensure correct wheel compatibility. To install the SimpleITK package:
  ```
  pip install --upgrade pip
  pip install --pre -f https://github.com/SimpleITK/SimpleITK/releases/tag/v1.1rc2 SimpleITK
  ```

## Anaconda Binaries
  - Many Conda packages for this release candidate have been upload to Anaconda Cloud on the SimpleITK channel with the `dev` label. These can be installed with:
 ```
conda install -c simpleitk/label/dev simpleitk
 ```
