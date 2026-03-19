# SimpleITK Release v0.8.1

**Announcement**

We are pleased to announce the SimpleITK 0.8.1 Release.

SimpleITK is a simplified layer built on top of ITK, intended to facilitate its use in rapid prototyping, education and interpreted languages. SimpleITK provides binaries for several wrapped languages to enable users to rapidly get started using ITK.

Information on how to get started and download the binaries: http://www.itk.org/Wiki/SimpleITK/GettingStarted#Binaries

This patch release updates the ITK version to the newly released 4.7.0. Additionally, this patch contains improved support for CMake 3.0, fixes for compilation issues, the addition of the LabelOverlapMeasures filter, and a fix for the ClampCast filter.

Also, we are now compiling for Python 3.4, and have stopped compiling for Python 3.2. Lastly, we are providing some binaries for the Anaconda Python distribution on Binstar.

Binary distributions for many platforms and languages are available for downloading: https://sourceforge.net/projects/simpleitk/files/SimpleITK/0.8.1/

Release Doxygen Documentation: http://www.itk.org/SimpleITKDoxygen08/html/index.html

**Sub-task**
-   [SIMPLEITK-583](https://issues.itk.org/jira/browse/SIMPLEITK-583) - Don't always use ez_setup which downloads setup tools

**Bug**
-   [SIMPLEITK-513](https://issues.itk.org/jira/browse/SIMPLEITK-513) - The R package has version 0.5-1 for SimpleITK
-   [SIMPLEITK-514](https://issues.itk.org/jira/browse/SIMPLEITK-514) - Off by one error in CMake code for splitting the basic filters library, can result in missing link dependencies.
-   [SIMPLEITK-517](https://issues.itk.org/jira/browse/SIMPLEITK-517) - Associate installation of all headers with "Development" component
-   [SIMPLEITK-518](https://issues.itk.org/jira/browse/SIMPLEITK-518) - Version variable not set after "find_package(SimpleITK)
-   [SIMPLEITK-526](https://issues.itk.org/jira/browse/SIMPLEITK-526) - Fix CreateInterpolator guarder define miss match
-   [SIMPLEITK-529](https://issues.itk.org/jira/browse/SIMPLEITK-529) - Minor Help Documentation bug
-   [SIMPLEITK-546](https://issues.itk.org/jira/browse/SIMPLEITK-546) - SimpleITK Java bindings fail to compile
-   [SIMPLEITK-551](https://issues.itk.org/jira/browse/SIMPLEITK-551) - Clamp cast filter is not setting correct bounds.
-   [SIMPLEITK-552](https://issues.itk.org/jira/browse/SIMPLEITK-552) - CMake 3.0 warning - Do not use LOCATION property in Wrapping/CMakeLists.txt
-   [SIMPLEITK-553](https://issues.itk.org/jira/browse/SIMPLEITK-553) - CMake 3.0 warning - sitkConfigureFileBuildtime - non-existent target in get_target_property
-   [SIMPLEITK-554](https://issues.itk.org/jira/browse/SIMPLEITK-554) - CMake 3.0 Waring - TARGET SimpleITKBasicFilters does not exist
-   [SIMPLEITK-568](https://issues.itk.org/jira/browse/SIMPLEITK-568) - In Doxygen coming from ITK, there are missing spaces before and after some reference links
-   [SIMPLEITK-581](https://issues.itk.org/jira/browse/SIMPLEITK-581) - For the Superbuild have a way so specify the paths which are searched for system libraries.
-   [SIMPLEITK-584](https://issues.itk.org/jira/browse/SIMPLEITK-584) - Address compilation warning on the CDash package release section.
-   [SIMPLEITK-589](https://issues.itk.org/jira/browse/SIMPLEITK-589) - Update png test images with an sCal of METER.

**Improvement**
-   [SIMPLEITK-489](https://issues.itk.org/jira/browse/SIMPLEITK-489) - Wrap the LabelOverlapMeasures filter
-   [SIMPLEITK-510](https://issues.itk.org/jira/browse/SIMPLEITK-510) - LabelStatisticsImageFilter needs the option to turn off using histograms.
-   [SIMPLEITK-577](https://issues.itk.org/jira/browse/SIMPLEITK-577) - On Windows add support to build SimpleITK shared but use release Python libraries.
-   [SIMPLEITK-585](https://issues.itk.org/jira/browse/SIMPLEITK-585) - Upgrade ITK Superbuild version to 4.7
-   [SIMPLEITK-569](https://issues.itk.org/jira/browse/SIMPLEITK-569) - Upgrade 0.8 to use ITK 4.6

**Task**
-   [SIMPLEITK-503](https://issues.itk.org/jira/browse/SIMPLEITK-503) - Update a the visual guide for building on Linux, change to debian, and update packages needed.
-   [SIMPLEITK-511](https://issues.itk.org/jira/browse/SIMPLEITK-511) - Update to ITK 4.5.2
-   [SIMPLEITK-523](https://issues.itk.org/jira/browse/SIMPLEITK-523) - Update the SWIG .i documentation files for the new LabelOverlap filter.
-   [SIMPLEITK-578](https://issues.itk.org/jira/browse/SIMPLEITK-578) - Update To ITK 4.6.1
-   [SIMPLEITK-587](https://issues.itk.org/jira/browse/SIMPLEITK-587) - Update JSON Doxygen strings with latest from ITK 4.7
