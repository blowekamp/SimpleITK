# SimpleITK Release v0.10.0

**Announcement**

We are pleased to announce the release of SimpleITK 0.10.0!

As with all SimpleITK releases, we have a variety of binaries available. This includes fresh Python Wheels for MS Windows, GNU Linux and Apple OS X, along with Java and CSharp binaries for MS Windows. Additionally, binaries for the Python distribution Anaconda are available.

This release features major improvements to the build infrastructure, improved support for R, better downloads with pip and many new features!

Information on how to get started and download the binaries: https://www.itk.org/Wiki/SimpleITK/GettingStarted#Binaries

Binary distributions for many platforms and languages are available for downloading: https://sourceforge.net/projects/simpleitk/files/SimpleITK/0.10.0/

Release Doxygen Documentation: https://www.itk.org/SimpleITKDoxygen010/html/index.html

Key Improvements
-   The R language bindings have received extensive improvements and bug fixes.
-   Added Image::SetMetaData method
-   Added LandmarkBasedTransformInitializer
-   Added MultiLableSTAPLEImageFilter
-   Show now prefers Fiji over the basic ImageJ
-   Refactored Wrapping directory into separate languages (paths have changed!)
-   Separated Lua, GTest, and virtualenv into SuperBuild dependencies
-   Added SITK_FORBID_DOWNLOADS option
-   Enabled each language wrapping to be an independent project dependent on the SimpleITK C++ interface and libraries.
-   Many CMake build improvements to default configurations such as visibility, and link library interfaces
-   Support for gcc 6.1 and compatibility with c++14
-   CMake version 3.3 is now required

Python
-   Update your pip version!
-   Added manylinux1 wheels (PEP 513)
-   SimpleITK_PYTHON_THREADS enabled by default to better support multi-threading in Python
-   No egg binary distributions, wheels fully support the standard platforms
-   Python 2.7 is no longer packaged for 64-bit windows
-   Avoid linking against libpython.so to improve compatibility and portability

Lua
-   Lua languages bindings now compile as a loadable module
-   Created Lua rockspec builder (https://github.com/SimpleITK/SimpleITKLuaRock)
-   Can be used in Lua Torch

R
-   Fix issues with the bracket operator preserving physical location
-   Created script to generate R man pages
-   Disabled return Self value from functions
-   Create simplified R Installer (https://github.com/SimpleITK/SimpleITKRInstaller)
