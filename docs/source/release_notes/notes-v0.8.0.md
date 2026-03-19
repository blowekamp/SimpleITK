# SimpleITK Release v0.8.0

**Announcement**

We are happy to announce the SimpleITK 0.8.0 Release.

SimpleITK is a simplified layer built on top of ITK, intended to facilitate its use in rapid prototyping, education and interpreted languages. SimpleITK provide binaries for several wrapped languages to enable users to rapidly get started using ITK.

Information on how to get started and download the binaries: http://www.itk.org/Wiki/SimpleITK/GettingStarted#Binaries

Improvements:
-   Support for events and command call-backs. More information can be found here: http://www.itk.org/SimpleITKDoxygen/html/CommandPage.html
  -   Includes lambdas for Python, and derived delegate classes for CSharp, Java, Ruby and Python.
-   Support for compiling OSX Mavericks, by enabling C+11 automatically.
-   Improved support for C++11
-   Improved support for setting dimensional vector parameters as scalars in the OOP interface
-   Improved ProcessObject base class features in OOP interface
-   Swig 2.0.12
-   Wrapping for R will automatically be enabled if detected due to increased stability with SWIG update.
-   Improved printing of enum types.
-   Automatically enabling >4GB image on windows.
-   Newly wrapped filters BinShrinkImageFilter, CyclicShiftImageFilter, DiscreteGaussianDerivativeImageFilter, LabelVotingImageFilter, and WarpImageFilter.
-   Threshold measurement available in automatic thresholding filters
-   Experimental Support for generating Python wheels
-   ITK 4.5.1

Compatibility:
-   The operator "~" was incorrectly implemented as a logical not. This has been corrected to be a bitwise not operator for images.
-   The KernelEnum types as an object member has been deprecated.
  -   In-favor of namespace enum: http://www.itk.org/SimpleITKDoxygen/html/namespaceitk_1_1simple.html#a38998f2c7b469b1ad8e337a0c6c0697b

Updated Documentation:
-   http://www.itk.org/Wiki/SimpleITK/GettingStarted/Visual_guide_to_building_on_Linux
-   http://www.itk.org/Wiki/SimpleITK/GettingStarted/A_visual_guide_to_SimpleITK_with_CSharp
-   http://simpleitk.github.io/SimpleITK-Notebooks/41_Progress.html

Binary distribution for many platforms and languages are available for downloading: https://sourceforge.net/projects/simpleitk/files/SimpleITK/0.8.0/

Release Doxygen Documentation: http://www.itk.org/SimpleITKDoxygen08/html/index.html

**Sub-task**
-   [SIMPLEITK-391](https://issues.itk.org/jira/browse/SIMPLEITK-391) - Correct overloaded operator to use Bitwise filter for bitwise operators
-   [SIMPLEITK-476](https://issues.itk.org/jira/browse/SIMPLEITK-476) - Check if the custom std_vector.i file for R is still needed
-   [SIMPLEITK-477](https://issues.itk.org/jira/browse/SIMPLEITK-477) - Latest R installs require a NAMESPACE file

**Bug**
-   [SIMPLEITK-445](https://issues.itk.org/jira/browse/SIMPLEITK-445) - `GLIBC_2.14' not found
-   [SIMPLEITK-451](https://issues.itk.org/jira/browse/SIMPLEITK-451) - The C++ Examples are not being tested.
-   [SIMPLEITK-453](https://issues.itk.org/jira/browse/SIMPLEITK-453) - CLang 5.0 OS X 10.9 std::tr1 namespace doesn't exist
-   [SIMPLEITK-478](https://issues.itk.org/jira/browse/SIMPLEITK-478) - Test Java Command Delegate
-   [SIMPLEITK-480](https://issues.itk.org/jira/browse/SIMPLEITK-480) - Automatically add -std=c++11 flag for clang 5.0 on mavericks.
-   [SIMPLEITK-482](https://issues.itk.org/jira/browse/SIMPLEITK-482) - Fix CMake configuration warning about linking to ourselves.
-   [SIMPLEITK-495](https://issues.itk.org/jira/browse/SIMPLEITK-495) - Update virtualenv version, not compatible with Ubuntu 13.10, or Debian testing
-   [SIMPLEITK-496](https://issues.itk.org/jira/browse/SIMPLEITK-496) - On Maverick with c++11 SWIG is failing with Java and std::vector<bool>
-   [SIMPLEITK-507](https://issues.itk.org/jira/browse/SIMPLEITK-507) - The Examples in the "Segmentation" sub-directory are not being run and need to be updated.
-   [SIMPLEITK-508](https://issues.itk.org/jira/browse/SIMPLEITK-508) - The Python PEP386 version should not have a '.' before the release candidate suffix.

**Improvement**
-   [SIMPLEITK-430](https://issues.itk.org/jira/browse/SIMPLEITK-430) - The InterpolatorEnums are print as integers, this should be strings.
-   [SIMPLEITK-431](https://issues.itk.org/jira/browse/SIMPLEITK-431) - The enums for morphology filters are local to each filter, they should be moved to common location with the sitk prefix.
-   [SIMPLEITK-432](https://issues.itk.org/jira/browse/SIMPLEITK-432) - upgrade toward ITK 4.5
-   [SIMPLEITK-433](https://issues.itk.org/jira/browse/SIMPLEITK-433) - Add Warp ImageFilter
-   [SIMPLEITK-434](https://issues.itk.org/jira/browse/SIMPLEITK-434) - Add BinShrink filter
-   [SIMPLEITK-436](https://issues.itk.org/jira/browse/SIMPLEITK-436) - Expose the hidden CMake Variable as advanced options.
-   [SIMPLEITK-450](https://issues.itk.org/jira/browse/SIMPLEITK-450) - Break compilation of LabelStatisticsImageFilter into 2 file for compilation speed.
-   [SIMPLEITK-457](https://issues.itk.org/jira/browse/SIMPLEITK-457) - Add CSharp example and test for GetBuffer methods.
-   [SIMPLEITK-467](https://issues.itk.org/jira/browse/SIMPLEITK-467) - Update super ITK build version towards 4.5.1.
-   [SIMPLEITK-472](https://issues.itk.org/jira/browse/SIMPLEITK-472) - make using 64 integers default for windows 64
-   [SIMPLEITK-473](https://issues.itk.org/jira/browse/SIMPLEITK-473) - Turn on R by default if detected.
-   [SIMPLEITK-491](https://issues.itk.org/jira/browse/SIMPLEITK-491) - Move WRAPITK option to advanced.
-   [SIMPLEITK-494](https://issues.itk.org/jira/browse/SIMPLEITK-494) - Reduce time taken for lengthy tests.
-   [SIMPLEITK-501](https://issues.itk.org/jira/browse/SIMPLEITK-501) - An optional stripping of symbols needs to be done on OSX for the distributed libraries. This reduces the size of the libraries by ~100 Megabytes.

**New Feature**
-   [SIMPLEITK-372](https://issues.itk.org/jira/browse/SIMPLEITK-372) - When testing is disabled Python eggs are not created by the "dist" target.
-   [SIMPLEITK-410](https://issues.itk.org/jira/browse/SIMPLEITK-410) - Add BUILD_EXAMPLES option to SimpleITK actual build.
-   [SIMPLEITK-422](https://issues.itk.org/jira/browse/SIMPLEITK-422) - Add missing connectivity to threshold connected image filter
-   [SIMPLEITK-423](https://issues.itk.org/jira/browse/SIMPLEITK-423) - adding missing resulting measurements to confidence connected filter.
-   [SIMPLEITK-435](https://issues.itk.org/jira/browse/SIMPLEITK-435) - Add basic access to Image's Meta Data Dictionary
-   [SIMPLEITK-440](https://issues.itk.org/jira/browse/SIMPLEITK-440) - Add option to dim_vec to set as a scalar for all components.
-   [SIMPLEITK-441](https://issues.itk.org/jira/browse/SIMPLEITK-441) - Create Prototype for progress reporting and call backs from filters.
-   [SIMPLEITK-443](https://issues.itk.org/jira/browse/SIMPLEITK-443) - add DiscreteGaussianDerivative Filter
-   [SIMPLEITK-444](https://issues.itk.org/jira/browse/SIMPLEITK-444) - Add additional procedure which take dim_vec as scalars if first parameter.
-   [SIMPLEITK-447](https://issues.itk.org/jira/browse/SIMPLEITK-447) - Refactor ImageFilter to include ProcessObject base class
-   [SIMPLEITK-449](https://issues.itk.org/jira/browse/SIMPLEITK-449) - There are some basic missing matrix based transforms that are missing such as Euler and Versor transforms.
-   [SIMPLEITK-454](https://issues.itk.org/jira/browse/SIMPLEITK-454) - Add call-back events and progress reporting form ITK process objects.
-   [SIMPLEITK-456](https://issues.itk.org/jira/browse/SIMPLEITK-456) - Add support to transform continuous index to physical point.
-   [SIMPLEITK-462](https://issues.itk.org/jira/browse/SIMPLEITK-462) - Add SWIG Delegate Support for Command Class
-   [SIMPLEITK-463](https://issues.itk.org/jira/browse/SIMPLEITK-463) - Add direct lambda support to ProcessObject::AddCommand in Python
-   [SIMPLEITK-468](https://issues.itk.org/jira/browse/SIMPLEITK-468) - Add output operator support for KernelEnums
-   [SIMPLEITK-469](https://issues.itk.org/jira/browse/SIMPLEITK-469) - Add output operator to PixelIDTypeEnum
-   [SIMPLEITK-493](https://issues.itk.org/jira/browse/SIMPLEITK-493) - Add script to upload data to midas.
-   [SIMPLEITK-505](https://issues.itk.org/jira/browse/SIMPLEITK-505) - Add threshold value as measurement to auto thresholding filters.
-   [SIMPLEITK-506](https://issues.itk.org/jira/browse/SIMPLEITK-506) - Add support for generating python wheel to enable pip to download binaries.

**Task**
-   [SIMPLEITK-437](https://issues.itk.org/jira/browse/SIMPLEITK-437) - Add more Filters.
-   [ SIMPLEITK-452](https://issues.itk.org/jira/browse/SIMPLEITK-452) - Add const correctness to Get member functions.
-   [SIMPLEITK-455](https://issues.itk.org/jira/browse/SIMPLEITK-455) - Update to SWIG version 2.0.11
-   [SIMPLEITK-466](https://issues.itk.org/jira/browse/SIMPLEITK-466) - Add Doxygen page describing commands, and events in process objects.
-   [SIMPLEITK-479](https://issues.itk.org/jira/browse/SIMPLEITK-479) - Remove SWIG patch step and just patch the downloaded source
-   [SIMPLEITK-481](https://issues.itk.org/jira/browse/SIMPLEITK-481) - Update the Wrapping.dox Doxygen page
-   [SIMPLEITK-485](https://issues.itk.org/jira/browse/SIMPLEITK-485) - Update to SWIG 2.0.12
-   [SIMPLEITK-486](https://issues.itk.org/jira/browse/SIMPLEITK-486) - Update the JSON doxygen from the ITK XML.
-   [SIMPLEITK-487](https://issues.itk.org/jira/browse/SIMPLEITK-487) - Update the SWIG docs files from the update SimpleITK JSON.
-   [SIMPLEITK-488](https://issues.itk.org/jira/browse/SIMPLEITK-488) - Update the Filter Coverage
-   [SIMPLEITK-492](https://issues.itk.org/jira/browse/SIMPLEITK-492) - Reduce warnings on the dashboard.
-   [SIMPLEITK-502](https://issues.itk.org/jira/browse/SIMPLEITK-502) - Create Visual guide for using SimpleITK with CSharp on Windows.
-   [SIMPLEITK-504](https://issues.itk.org/jira/browse/SIMPLEITK-504) - Add the SimpleITK Notebook page on progress reporting to the master.
