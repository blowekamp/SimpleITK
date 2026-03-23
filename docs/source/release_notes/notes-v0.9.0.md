# SimpleITK Release v0.9.0

**Announcement**

We are pleased to announce the release of SimpleITK 0.9!

NOW WITH REGISTRATION

Here is a quick overview of the ITKv4's registration in SimpleITK via IPython/Jupiter notebook: http://insightsoftwareconsortium.github.io/SimpleITK-Notebooks/60_RegistrationIntroduction.html

This release features the [ImageRegistrationMethod](http://www.itk.org/SimpleITKDoxygen/html/classitk_1_1simple_1_1ImageRegistrationMethod.html) which brings a SimpleITK style interface to the modular ITKv4 registration framework. This adds support for a variety of transforms including rigid, affine, b-spline, and deformation fields. The metrics supported include correlation, means squares, ANTS neighborhood correlation, and mutual information. A variety of optimizers are available along with scales estimators for the optimized transformation parameters and built in multi-scale registration support.

Additionally, a number of registration filters have been added: DemonsRegistrationFilter, DiffeomorphicDemonsRegistrationFilter, FastSymmetricForcesDemonsRegistrationFilter, LevelSetMotionRegistrationFilter and SymmetricForcesDemonsRegistrationFilter.

Several examples can be found in the examples directory to help you get started. These examples include Affine registration, BSpline, Demons and Displacement fields. http://www.itk.org/SimpleITKDoxygen/html/examples.html

We have also added the following filters: AdditiveGaussianNoiseImageFilter, AggregateLabelMapFilter, BinaryImageToLabelMapFilter, ChangeLabelLabelMapFilter, CollidingFrontsImageFilter, DisplacementFieldJacobianDeterminantFilter, FastMarchingBaseImageFilter, FastMarchingUpwindGradientImageFilter, InverseDisplacementFieldImageFilter, InvertDisplacementFieldImageFilter, LabelImageToLabelMapFilter, LabelShapeStatisticsImageFilter, LabelStatisticsImageFilter, LabelUniqueLabelMapFilter, MergeLabelMapFilter, RelabelLabelMapFilter, SaltAndPepperNoiseImageFilter, ShotNoiseImageFilter, SpeckleNoiseImageFilter and TransformToDisplacementFieldFilter

Information on how to get started and download the binaries: http://www.itk.org/Wiki/SimpleITK/GettingStarted#Binaries

Binary distributions for many platforms and languages are available for downloading: https://sourceforge.net/projects/simpleitk/files/SimpleITK/0.9rc1/

Release Doxygen Documentation: http://www.itk.org/SimpleITKDoxygen09/html/index.html

Additional Release Notes: http://www.itk.org/Wiki/SimpleITK/ReleaseNotes#SimpleITK_-_Version_0.9.0_Release

**Sub-task**
-   [SIMPLEITK-426](https://issues.itk.org/jira/browse/SIMPLEITK-426) - Wrap Image registration filters
-   [SIMPLEITK-521](https://issues.itk.org/jira/browse/SIMPLEITK-521) - Add initial RegistrationMethod class with basic components
-   [SIMPLEITK-522](https://issues.itk.org/jira/browse/SIMPLEITK-522) - Add support for active optimizing transform.
-   [SIMPLEITK-536](https://issues.itk.org/jira/browse/SIMPLEITK-536) - Create Infrastructure to support testing registration
-   [SIMPLEITK-537](https://issues.itk.org/jira/browse/SIMPLEITK-537) - Add support for Displacement fields
-   [SIMPLEITK-538](https://issues.itk.org/jira/browse/SIMPLEITK-538) - Add support for B-Splines Transforms
-   [SIMPLEITK-549](https://issues.itk.org/jira/browse/SIMPLEITK-549) - Add initial Implementation of ImageRegistrationMethodv4
-   [SIMPLEITK-558](https://issues.itk.org/jira/browse/SIMPLEITK-558) - Add support for fixed and moving image masks.
-   [SIMPLEITK-560](https://issues.itk.org/jira/browse/SIMPLEITK-560) - Comprehensive coverage testing of the registration framework is needed.
-   [SIMPLEITK-561](https://issues.itk.org/jira/browse/SIMPLEITK-561) - Handle copy on write for the InitialTransform input to the ImageRegistrationMethod
-   [SIMPLEITK-562](https://issues.itk.org/jira/browse/SIMPLEITK-562) - Write documentation for the transform and registration method classes.
-   [SIMPLEITK-563](https://issues.itk.org/jira/browse/SIMPLEITK-563) - Wrap CenteredVersorTransformInitaizalizer
-   [SIMPLEITK-564](https://issues.itk.org/jira/browse/SIMPLEITK-564) - Refactor ImageRegistrationMethodv4 ivar for components
-   [SIMPLEITK-574](https://issues.itk.org/jira/browse/SIMPLEITK-574) - Add ImageRegistrationMethodv4 methods to set all transforms
-   [SIMPLEITK-575](https://issues.itk.org/jira/browse/SIMPLEITK-575) - Add access to the estimated optimizer scales
-   [SIMPLEITK-595](https://issues.itk.org/jira/browse/SIMPLEITK-595) - Add DisplacementField specific interface
-   [SIMPLEITK-608](https://issues.itk.org/jira/browse/SIMPLEITK-608) - Add Evaluate metod to the ImageRegistrationMethod
-   [SIMPLEITK-609](https://issues.itk.org/jira/browse/SIMPLEITK-609) - Remove Transform's polymorphism cast/conversion

**Bug**
-   [SIMPLEITK-393](https://issues.itk.org/jira/browse/SIMPLEITK-393) - Does not write correct type for Int8
-   [SIMPLEITK-525](https://issues.itk.org/jira/browse/SIMPLEITK-525) - Enable deletion of command while an filter exists.
-   [SIMPLEITK-526](https://issues.itk.org/jira/browse/SIMPLEITK-526) - Fix CreateInterpolator guarder define miss match
-   [SIMPLEITK-565](https://issues.itk.org/jira/browse/SIMPLEITK-565) - The filters with multiple named inputs are not being checked if the image's type and dimension match.
-   [SIMPLEITK-582](https://issues.itk.org/jira/browse/SIMPLEITK-582) - Unable to load certain DICOM series by seriesID
-   [SIMPLEITK-590](https://issues.itk.org/jira/browse/SIMPLEITK-590) - Fix PNG sCal issue in master
-   [SIMPLEITK-598](https://issues.itk.org/jira/browse/SIMPLEITK-598) - CMake BUILD_EXAMPLES SuperBuild flag not propogated correctly
-   [SIMPLEITK-616](https://issues.itk.org/jira/browse/SIMPLEITK-616) - Using the ImageSeriesWriter with VectorImages does not work.
-   [SIMPLEITK-617](https://issues.itk.org/jira/browse/SIMPLEITK-617) - Check if the LBFGSB optimizer respects the number of iteration parameters. This may be an ITK bug.
-   [SIMPLEITK-622](https://issues.itk.org/jira/browse/SIMPLEITK-622) - LevelSetMotionRegistrationFilter documentation
-   [SIMPLEITK-624](https://issues.itk.org/jira/browse/SIMPLEITK-624) - Linking is running out of memory on windows with the monolithic build for distrubutions
-   [SIMPLEITK-626](https://issues.itk.org/jira/browse/SIMPLEITK-626) - When printing transform the reported ITK reference count is 2.
-   [SIMPLEITK-629](https://issues.itk.org/jira/browse/SIMPLEITK-629) - VS11 has compilation error with std::bind
-   [SIMPLEITK-632](https://issues.itk.org/jira/browse/SIMPLEITK-632) - Intermettent build failure of SimpleITK
-   [SIMPLEITK-633](https://issues.itk.org/jira/browse/SIMPLEITK-633) - invoking execute method without setting initial transform segfaults

**Epic**
-   [SIMPLEITK-1](https://issues.itk.org/jira/browse/SIMPLEITK-1) - Develop registration framework for ITKv4 Framework
-   [SIMPLEITK-571](https://issues.itk.org/jira/browse/SIMPLEITK-571) - Add More Registration Examples

**Improvement**
-   [SIMPLEITK-378](https://issues.itk.org/jira/browse/SIMPLEITK-378) - The Readme.md file is not particularly user friendly for Windows

users. Could it be renamed for the C# package to say "Readme.txt"?
-   [SIMPLEITK-490](https://issues.itk.org/jira/browse/SIMPLEITK-490) - Update Measurements to be tr1::function calls to the base ITK object.
-   [SIMPLEITK-512](https://issues.itk.org/jira/browse/SIMPLEITK-512) - Add basic LabelMap Filters for manipulating labels.
-   [SIMPLEITK-586](https://issues.itk.org/jira/browse/SIMPLEITK-586) - Enforcing System ITK Module dependencies
-   [SIMPLEITK-596](https://issues.itk.org/jira/browse/SIMPLEITK-596) - Update SimpleITK Doxygen doxygen.config
-   [SIMPLEITK-611](https://issues.itk.org/jira/browse/SIMPLEITK-611) - request for transform constructors

**New Feature**
-   [SIMPLEITK-298](https://issues.itk.org/jira/browse/SIMPLEITK-298) - MergeLabelMapFilter
-   [SIMPLEITK-345](https://issues.itk.org/jira/browse/SIMPLEITK-345) - The Image readers should have a cast or read as option
-   [SIMPLEITK-429](https://issues.itk.org/jira/browse/SIMPLEITK-429) - Some filter have optional inputs. This include PDE registration and masked thresholding. The needs to be added to the JSON.
-   [SIMPLEITK-533](https://issues.itk.org/jira/browse/SIMPLEITK-533) - Develop the Interface for the ImageRegistrationMethodv4 based on the ITKv4 registration framework.
-   [SIMPLEITK-541](https://issues.itk.org/jira/browse/SIMPLEITK-541) - The Demons registration based filters need an optional input for the initial deformation field.
-   [SIMPLEITK-542](https://issues.itk.org/jira/browse/SIMPLEITK-542) - Add the filter from the ImageNoise module
-   [SIMPLEITK-543](https://issues.itk.org/jira/browse/SIMPLEITK-543) - Update ITK towards version 4.6
-   [SIMPLEITK-550](https://issues.itk.org/jira/browse/SIMPLEITK-550) - Add TransfromToDisplacementField filter.
-   [SIMPLEITK-555](https://issues.itk.org/jira/browse/SIMPLEITK-555) - Refactor Transforms to allow specific interface for different transformation types
-   [SIMPLEITK-567](https://issues.itk.org/jira/browse/SIMPLEITK-567) - Add wrapping for the ScaleSkewVersor
-   [SIMPLEITK-573](https://issues.itk.org/jira/browse/SIMPLEITK-573) - Add missing methods to the transform interfaces
-   [SIMPLEITK-588](https://issues.itk.org/jira/browse/SIMPLEITK-588) - Add access to the GlobalPhysicalSpaceTolerance variable.
-   [SIMPLEITK-603](https://issues.itk.org/jira/browse/SIMPLEITK-603) - Add transform adaptor support for the ImageRegistration method
-   [SIMPLEITK-605](https://issues.itk.org/jira/browse/SIMPLEITK-605) - Add ScaleTransform
-   [SIMPLEITK-607](https://issues.itk.org/jira/browse/SIMPLEITK-607) - Missing methods to the ImageRegistrationMethod class
-   [SIMPLEITK-612](https://issues.itk.org/jira/browse/SIMPLEITK-612) - For Image and Transform class make public and rename MakeUniqueForWrite to MakeUnique
-   [SIMPLEITK-613](https://issues.itk.org/jira/browse/SIMPLEITK-613) - Add FastMarchingUpwindGradient and CollidingFronts filters
-   [SIMPLEITK-623](https://issues.itk.org/jira/browse/SIMPLEITK-623) - Add optimizer weights to image registration method

**Task**
-   [SIMPLEITK-438](https://issues.itk.org/jira/browse/SIMPLEITK-438) - add method to use a VectorImage as a Image of Vectors for displacement fields.
-   [SIMPLEITK-530](https://issues.itk.org/jira/browse/SIMPLEITK-530) - Test and validate useful and correct functionality of the components in the ImageRegistrationMethods
-   [SIMPLEITK-531](https://issues.itk.org/jira/browse/SIMPLEITK-531) - Use SimpleITK's Registration to perform a complete neuro-imaging registration sequence.
-   [SIMPLEITK-544](https://issues.itk.org/jira/browse/SIMPLEITK-544) - Update SWIG to 3.0.2
-   [SIMPLEITK-545](https://issues.itk.org/jira/browse/SIMPLEITK-545) - Upgrade PCRE to latest version.
-   [SIMPLEITK-591](https://issues.itk.org/jira/browse/SIMPLEITK-591) - run script that propagates doxygen documentation to python docstring
-   [SIMPLEITK-599](https://issues.itk.org/jira/browse/SIMPLEITK-599) - Update SWIG to 3.0.4 and PCRE to 8.36
-   [SIMPLEITK-610](https://issues.itk.org/jira/browse/SIMPLEITK-610) - Fix Dashboard warnings and failing tests.
-   [SIMPLEITK-614](https://issues.itk.org/jira/browse/SIMPLEITK-614) - Address CMake CMP0054 policy warnings.
-   [SIMPLEITK-618](https://issues.itk.org/jira/browse/SIMPLEITK-618) - Update ITK super build version to 4.7.1
-   [SIMPLEITK-619](https://issues.itk.org/jira/browse/SIMPLEITK-619) - Update SWIG doc strings.
-   [SIMPLEITK-630](https://issues.itk.org/jira/browse/SIMPLEITK-630) - Reduce dashboard warnings.
-   [SIMPLEITK-634](https://issues.itk.org/jira/browse/SIMPLEITK-634) - Update ITK super build toward 4.7.2
-   [SIMPLEITK-636](https://issues.itk.org/jira/browse/SIMPLEITK-636) - Update SimpleITK Doxygen documentation form ITK and update the SWIG documentation.
-   [SIMPLEITK-637](https://issues.itk.org/jira/browse/SIMPLEITK-637) - Why are there no symbols in the Doxygen?
