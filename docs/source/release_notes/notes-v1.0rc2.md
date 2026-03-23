# SimpleITK Release v1.0rc2

- Additional Improvements:
  - Updated ITK version along 4.11 release branch
  - Reorganized examples directory
  - Reorganized filter libraries to match ITK modules
  - Improved compilation with more specific ITK module usage
  - Now using modern CMake 3 style properties for exported libraries

- API Changes
  - Depricated CMake variables with "SITK" prefix, now consistenly using the "SimpleITK" prefix for configurable CMake variables
  - Removed `ImageSeriesReader::GetGDCMSeriesFileNames` parameter `loadPrivateTags` parameter. This removes an overloaded version of the class method.
  - Added `sitkWallClock` enum for a sentinel value for random number seed to indicate initialization from the clock

- Python Binary Downloads
  - A number of binary Python wheels are available for download and test. It is important to have the latest version form pip to ensure correct wheel compatibility. To install the SimpleITK package:
```
pip install --upgrade pip
pip install --pre -f https://github.com/SimpleITK/SimpleITK/releases/tag/v1.0rc2 SimpleITK
```
