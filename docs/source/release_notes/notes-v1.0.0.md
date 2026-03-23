# SimpleITK Release v1.0.0

```
       .''.
      :_\/_:   .
  .''.: /\ : _\(/_
 :_\/_:'.:::. /)\*''*
 : /\ : :::::  '*_\/_*
  '..'  ':::'   * /\ *
      *          *..*
 _____  _                    _       _____  _____  _   __    __     _____
/  ___|(_)                  | |     |_   _||_   _|| | / /   /  |   |  _  |
\ `--.  _  _ __ ___   _ __  | |  ___  | |    | |  | |/ /    `| |   | |/' |
 `--. \| || '_ ` _ \ | '_ \ | | / _ \ | |    | |  |    \     | |   |  /| |
/\__/ /| || | | | | || |_) || ||  __/_| |_   | |  | |\  \   _| |_ _\ |_/ /
\____/ |_||_| |_| |_|| .__/ |_| \___|\___/   \_/  \_| \_/   \___/(_)\___/
                     | |
                     |_|
                                                              .''.
                                                             :_\/_:   .
                                                         .''.: /\ : _\(/_
                                                        :_\/_:'.:::. /)\*''*
                                                        : /\ : :::::  '*_\/_*
                                                         '..'  ':::'   * /\ *
                                                                        *..*
```


**Announcement**


The SimpleITK Development Team and the Insight Software Consortium are proud to announce the first major release of SimpleITK.

SimpleITK is a simplified multi-language interface to the National Library of Medicine’s Insight Segmentation and Registration Toolkit (ITK). Providing an easy to use interface to ITK.

SimpleITK is intended to broaden the use of ITK to researchers and domain scientist who are novice software developers, enabling them to benefit from the image-analysis power of ITK. For experienced software developers, the toolkit enables rapid prototyping of image segmentation and registration frameworks and facilitates evaluation of the effects algorithmic parameter settings have on results with minimal programming effort. In the educational setting SimpleITK's concise interface allows students to experiment with well known algorithms, enhancing their understanding of algorithm performance without the need for advanced software engineering skills.

The toolkit development process follows best software engineering practices including code reviews and continuous integration testing, with results displayed online allowing everyone to gauge the status of the current code and any code that is under consideration for incorporation into the toolkit. User support is available through a dedicated mailing list and the project’s Wiki.
SimpleITK is available for the following programing languages: Python, R, Java, C#, C++, Lua, Ruby, and TCL. Binary versions of the toolkit are available for the GNU Linux, Apple OS X, and Microsoft Windows operating systems. All of the source code is freely available on github under an Apache-2.0 license.


## Downloading SimpleITK

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK Wiki (https://itk.org/Wiki/SimpleITK/GettingStarted).

- Python Binary Downloads

  - Python binary wheels are available for download. It is important to have the latest version of pip to ensure correct wheel compatibility and installation. To install the latest SimpleITK package form PyPI:
  ```
  pip install --upgrade pip
  pip install SimpleITK
  ```

  - Many Conda package have been upload to Anaconda Cloud on the `SimpleITK`. These can be installed with:
  ```
  conda install -c simpleitk simpleitk
  ```

- A complete available set of compiled binaries, including select CSharp and Java distributions, along with source and data tar-balls are available on Source Forge (https://sourceforge.net/projects/simpleitk/files/SimpleITK/1.0.0/).


**Release Notes**

- Key Improvements:
  - Improved Python data bridge
    - New Python method `GetArrayViewFromImage` provides copy free read-only access
    - Updated Python data structures to use `memory view` objects
  - New language specific building SimpleITK front-ends
    - R devtools based installer (https://github.com/SimpleITK/SimpleITKRInstaller).
    - Python: scripts for building wheels (https://github.com/SimpleITK/SimpleITKPythonPackage) and a Conda recipe (https://github.com/SimpleITK/SimpleITKCondaRecipe).
  - Improved writing DICOM tags when writing a slice, and disabled writing a DICOM series with the ImageSeriesWriter
  - Support use of virtual image domain in the `ImageRegistrationMethod`
  - OnePlusOneOptimizer added to registration framework
  - Improved support for R: propogating C++ exceptions into R, additional R tests
  - Additional tests for Java
  - Python and R notebooks repository illustrating the basics and more advanced functionality of SimpleITK (https://github.com/InsightSoftwareConsortium/SimpleITK-Notebooks)
  - Added continous integration via CircleCI
  - Updated version and improved integration of Google Test
  - Updated ITK version to 4.11.0+
  - Updated minimal required CMake version to 3.0, and numerous CMake changes to support various build configurations
  - Fix, "pip install" works for Apple Mac OS X.
  - Updated to usage of SWIG 3.0.11 ( using the latest SIWG is strongly recommended for R )
  - Reorganized examples directory into example based sub-directories with multiple languages
  - Improvements to documentation transmogrification scripts
  - Many bug fixes and improvement to the build system!

- Additional Improvements:
  - Added multi-hash ExternalData support for sha512
  - Added R Documentation files
  - Update Python and Java documentation strings files
  - Fix allowing undefined symbols when building standalone language wrapping
  - Reorganized examples directory
  - Reorganized filter libraries to match ITK modules
  - Improved compilation with more specific ITK module usage
  - Now using modern CMake 3 style properties for exported libraries

- API Changes
  - Replaced return Self with void for wrapped languages, to address memory and segmentation fault issue.
  - Depricated CMake variables with "SITK" prefix, now consistenly using the "SimpleITK" prefix for configurable CMake variables
  - Removed `ImageSeriesReader::GetGDCMSeriesFileNames` parameter `loadPrivateTags` parameter. This removes an overloaded version of the class method.
  - Added `sitkWallClock` enum for a sentinel value for random number seed to indicate initialization from the clock
  - New method `Image::GetNumberOfPixels`
  - New method `LabelMapContourOverlayImageFilter::SetColormap`
  - New method `LabelMapToRGBImageFilter::SetColormap`
  - New method `ImageRegistrationMethod::SetVirtualDomain`
  - New method `ImageRegistrationMethod::SetVirtualDomainFromImage`
  - New seed parameter to `ImageRegistrationMethod::AddMetricSamplingSeed` method
  - `CastImageFilter::SetOutputPixelType` method no longer accepts the pixel ID by value, uses only enumerated type
