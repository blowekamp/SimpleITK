# SimpleITK Release v0.7.0

**Announcement**

We are pleased to announce the release of SimpleITK 0.7.0!

The release's binary built distributions are available for many languages and platforms. They are available for download:

http://sourceforge.net/projects/simpleitk/files/SimpleITK/0.7.0/

There are numerous binaries available for download for Python via setuptools' easy_install. Additionally, we have select binary distributions for C# and Java. Information on downloading and getting started can be found here:

http://www.itk.org/Wiki/SimpleITK/GettingStarted#Downloading_the_binaries

Notable improvement:
-   Based on ITK 4.4.2 with enhanced performance for operators
-   New filters including: Clamp, PatchedBasedDenoising, ScalarChanAndVese, BitwiseNot
-   Support for 64-bit integer Pixels ( not enable with windows VS9, nor packaged )
-   Add Debug flag for filters to print ITK filter
-   Bug fixes.
-   And Many more!

CSharp:
-   Additional image overloaded operators

Doxygen for this release can be found here: http://itk.org/SimpleITKDoxygen07/html/pages.html

**Sub-task**
-   [SIMPLEITK-359](https://issues.itk.org/jira/browse/SIMPLEITK-359) - Look into integration of ExternalData.cmake

**Bug**
-   [SIMPLEITK-210](https://issues.itk.org/jira/browse/SIMPLEITK-210) - Use printable types for ToString methods
-   [SIMPLEITK-371](https://issues.itk.org/jira/browse/SIMPLEITK-371) - SetPixel test is failing on windows in debug mode
-   [SIMPLEITK-387](https://issues.itk.org/jira/browse/SIMPLEITK-387) - CSharp version is invalid causing compilation error.
-   [SIMPLEITK-398](https://issues.itk.org/jira/browse/SIMPLEITK-398) - CSharp is missing the Image::GetBufferAs... methods
-   [SIMPLEITK-401](https://issues.itk.org/jira/browse/SIMPLEITK-401) - Verify TR1 error checking for logic
-   [SIMPLEITK-405](https://issues.itk.org/jira/browse/SIMPLEITK-405) - Fix some dashboard warnings
-   [SIMPLEITK-406](https://issues.itk.org/jira/browse/SIMPLEITK-406) - Can not convert image >4GB to numpy array
-   [SIMPLEITK-408](https://issues.itk.org/jira/browse/SIMPLEITK-408) - Swig build error on windows64 when ITK is not installed, due to excessive path length.
-   [SIMPLEITK-417](https://issues.itk.org/jira/browse/SIMPLEITK-417) - LabelStatisticsImageFilter does not reset internal measurements for each execution.

**Improvement**
-   [SIMPLEITK-389](https://issues.itk.org/jira/browse/SIMPLEITK-389) - Overload image operators for C# wrappers
-   [SIMPLEITK-390](https://issues.itk.org/jira/browse/SIMPLEITK-390) - Add BitwiseNot functor filter
-   [SIMPLEITK-392](https://issues.itk.org/jira/browse/SIMPLEITK-392) - Improve scanning time of JSON files.
-   [SIMPLEITK-399](https://issues.itk.org/jira/browse/SIMPLEITK-399) - Update to ITK patch release 4.3.2
-   [SIMPLEITK-400](https://issues.itk.org/jira/browse/SIMPLEITK-400) - Update towards ITK 4.4
-   [SIMPLEITK-409](https://issues.itk.org/jira/browse/SIMPLEITK-409) - There is an unneeded dependency of many of the BasicFilter libraries on the previous on. This should be removed.

**New Feature**
-   [SIMPLEITK-330](https://issues.itk.org/jira/browse/SIMPLEITK-330) - Add PatchBaseDenoising filter
-   [SIMPLEITK-411](https://issues.itk.org/jira/browse/SIMPLEITK-411) - Add new json field type for enums.
-   [SIMPLEITK-415](https://issues.itk.org/jira/browse/SIMPLEITK-415) - Add ClampImageFilter

**Task**
-   [SIMPLEITK-352](https://issues.itk.org/jira/browse/SIMPLEITK-352) - Have separate versions of SimpleITK doxygen for each version or tag
-   [SIMPLEITK-355](https://issues.itk.org/jira/browse/SIMPLEITK-355) - Add CMake file to use Midas and MD5 files for data.
-   [SIMPLEITK-356](https://issues.itk.org/jira/browse/SIMPLEITK-356) - Migrate the data from the data submodule to the Midas md5 download system.
-   [SIMPLEITK-366](https://issues.itk.org/jira/browse/SIMPLEITK-366) - System ITK with Superbuild.
-   [SIMPLEITK-367](https://issues.itk.org/jira/browse/SIMPLEITK-367) - Move WIki pages to version directories.
-   [SIMPLEITK-375](https://issues.itk.org/jira/browse/SIMPLEITK-375) - Update SimpleITK Wiki and FAQ, including compiler support and FAQ entries.
-   [SIMPLEITK-407](https://issues.itk.org/jira/browse/SIMPLEITK-407) - Update the style of SWIG and PCRE.
-   [SIMPLEITK-412](https://issues.itk.org/jira/browse/SIMPLEITK-412) - Fix dashboard issues
-   [SIMPLEITK-416](https://issues.itk.org/jira/browse/SIMPLEITK-416) - Update Source Tarball script for midas data.
-   [SIMPLEITK-418](https://issues.itk.org/jira/browse/SIMPLEITK-418) - The size of the monolithic test driver is too big on windows. This should be broken up
