# SimpleITK Release v1.0rc3

- Additional Improvements:
  - Added multi-hash ExternalData support for sha512
  - Added R Documentation files
  - Update Python and Java documentation strings files
  - Doxygen fixes
  - Fix allowing undefined symbols when building standalone language wrapping
  - More minor bug fixes


- Python Binary Downloads
  - Many Conda package have been upload to Anaconda Cloud on the `SimpleITK` change with the `dev`   label. These can be installed with:
  ```
  conda install -c simpleitk/label/dev simpleitk
  ```
   - Many binary Python wheels are available for download and testing. It is important to have the latest version form pip to ensure correct wheel compatibility. To install the SimpleITK package:
  ```
  pip install --upgrade pip
  pip install --pre -f https://github.com/SimpleITK/SimpleITK/releases/tag/v1.0rc3 SimpleITK
  ```
