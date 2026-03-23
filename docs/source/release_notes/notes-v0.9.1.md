# SimpleITK Release v0.9.1

**Announcement**

We are pleased to announce the release of SimpleITK 0.9.1!

As with all SimpleITK releases, we have a variety of binaries available. This includes fresh Python Wheels and Eggs, along with Java, and CSharp binaries. Additionally, new binaries for Anaconda have been made improving the dependency requirements.

This is a patch release and includes an update to the ITK version from 4.7.2+ to 4.8.1. Additional updates include: improved formatting for python documentation, fixes to the transform interfaces, improved ImageIO exceptions and build improvements.

Information on how to get started and download the binaries: http://www.itk.org/Wiki/SimpleITK/GettingStarted#Binaries

Binary distributions for many platforms and languages are available for downloading: https://sourceforge.net/projects/simpleitk/files/SimpleITK/0.9.1/

Release Doxygen Documentation: http://www.itk.org/SimpleITKDoxygen09/html/index.html

**Commits**

<!-- language: lang-none -->

```
* db0ce5d Updating SimpleITK to 0.9.1 version for release
*   aa2c3ff Merge branch 'UpdateITKTo4.8.1' into release
|\
| * fee435f Update ITK superbuild to 4.8.1 release
* |   6c3b4f0 Merge branch 'AddMissingJavaCMakeVariables' into release
|\ \
| * | cec0b39 Add missing Java variables to the language options files
|/ /
* |   1c5f9b4 Merge branch 'UpdateITKTo4.8.1' into release
|\ \
| |/
| * c027978 Updating ITK superbuild towards v4.8.1 pending release
|/
* aa33380 Do not pass unneeded language arguments on the command line
* 7b83998 Require libraries when a wrapping for a language is enabled
* 5b1c3b5 Regenerated the .i files
* 0399fb6 Updated space_parse with a noLeadingSpace flag
* 792c306 Fix leading space problem in doxy2swig.py
* 8754ca5 Add unsigned int specifier
* 92fee75 Adding ObjectCount measurement to ConnectedComponents filter
* 1ac4872 WIP: Adding local transform fixes
*   a389ca0 Merge branch 'SIMPLEITK-638_ImproveImageReadException' into release
|\
| * a55f6b0 Improve exception when unable to create ImageIO
* 706b697 Merge branch 'SIMPLEITK-639_PatchRevisionDescription' into release
* fd06d0b Replace tabs with spaces.
* 13c0d41 GetGitRevisionDescription: Fix issue referencing project source
```
