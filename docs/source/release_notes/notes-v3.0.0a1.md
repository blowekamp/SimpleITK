# SimpleITK Release v3.0.0a1

This is SimpleITK 3.0.0 Alpha Release 1.

To upgrade to this Python binary package run:
```pip install --upgrade --pre simpleitk --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v3.0.0a1```



**What's Changed**
* Update Superbuild SWIG version to 4.3.1 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2279
* Use CodeBuild runners in nightly. by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2280
* Json tweaks by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2282
* Add Clion default build paths and venvs to gitignore by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2285
* Address compilation error when building ruby on OSX by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2287
* Use target compile options over source properties by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2288
* Add permision restriction to actions by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2284
* use nullptr by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2290
* Add ForceOrthogonalDirection and ReverseOrder options by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2293
* Use O1 optimization flag for ITK valgrind by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2295
* Update itk to 6.0a3 for development by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2289
* Use ITK valgrind suppression file for Ubuntu 22.04 LTS by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2298
* STYLE: Upgrade to comment_spell_check v0.4.0 by @dave3d in https://github.com/SimpleITK/SimpleITK/pull/2300
* Add key word only options to ReadImage by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2296
* Remove return self functionality by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2278
* Add flag to suppress sprintf warning in SWIG build on OSX by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2303
* Fix Docker FromAs error  by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2305
* Fix CMake version policy max is now correctly 3.20 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2304
* DOC: Correct minor spelling mistake. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2307
* Use boolean types for boolean attributes in JSON by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2302
* Json conformance by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2308
* Update to windows-2022 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2309
* More pre-commit by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2312
* Add formal JSON schema by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2310
* DOC: improving documentation for basic DICOM series reader example by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2313
* Add pretty-format-json to pre-commit by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2315
* Allow measurements results parameters to be numbers. by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2316
* ENH: Address changes in Fiji installation on windows. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2317
* Replace template code generation with a JINJA and Python based system. by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2318
* Update the getting started page to point to the virtual tutorial. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2321
* Update JSONBeautify Python script. by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2326
* Update typing for Resample in extra.py by @chris-rapson-formus in https://github.com/SimpleITK/SimpleITK/pull/2323
* Change JSON values to numbers from strings by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2325
* Restore removal of GHA Nightly ITK build requirements. by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2324
* Add Superbuild target to create Python virtual environment by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2322
* Update build docucmentation for Python JINJA2 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2327
* Fix requirement of Python in superbuild by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2328
* Fixes for Dockerfiles used in the Package GHA workflow by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2329
* Add additional support for a main branch by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2330
* Jinja improvements by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2331
* DOC: Add C# and java versions to the DemonsRegistration1 example. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2334
* Add gersemi cmake formatter by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2332
* Use uv to create python venv for SimpleITK Python by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2338
* DOC: Add C# and java versions to the DemonsRegistration2 example. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2335
* Fix using IS_EXECUTABLE with older CMake versions by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2340
* Convert the Python unit tests to use pytest by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2337
* DOC: Update url to ITK 5.0 migration guide. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2342
* ENH: create a spell checking pre-commit by @dave3d in https://github.com/SimpleITK/SimpleITK/pull/2333
* DOC: Add C#, C++ and java versions to the DicomImagePrintTags example. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2344
* Disable uv modifying shell environments by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2343
* Document usage of uv in build process by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2341
* Keep uv install XDG receipt local to build. by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2346
* BUG: inverting intensity for MONOCHROME1 not needed. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2348
* Disable passing filename on some local pre-commit hooks by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2350
* DOC: Add C#, C++ and java versions to the DicomConvert example. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2336
* Fixes for Nightly Package builds by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2349
* Refactor the function factories to not take pointer in constructor by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2351
* Adding DICOM reading failure question to FAQ. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2353
* Make the Addressor constexpr by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2354
* COMP: address issue with recursive_directory_iterator on OSX CI. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2356
* Convert to a smart pointer for member. by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2358
* Address CMP0175 warnings by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2359
* Add export specification for ProcessObjectDeleter by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2362
* Use copy mode for uv environment creation by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2361
* Suppress single_module obsolete warning by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2363
* Fix and clean up copying files for CSharp distribution by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2364
* PERF: Avoid Nightly CI on forks by @hjmjohnson in https://github.com/SimpleITK/SimpleITK/pull/2365
* fix pre commit setup by @hjmjohnson in https://github.com/SimpleITK/SimpleITK/pull/2366
* Fix GHA Nightly constrains to not run on forks by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2367
* Use a singleton for function factory in coded filter by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2357
* Additional correction to Nightly workflow repository name by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2368
* Add container template parameter to MemberFunctionFactory by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2370
* Address shadowed declaration warnings for factory variables. by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2374
* Add C#, java and C++ versions to the DICOMSeriesFromArray. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2372
* Add C#, java and C++ versions to the DICOMSeriesReadModifySeriesWrite. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2373
* Add C#, java and C++ versions to the ImageRegistrationMethod4. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2380
* Add java version to the ImageRegistrationMethod2 example. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2378
* Use MAX_DIMENSION for slice filter's defaults by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2376
* Improve formatting of generated doxygen code blocks by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2382
* Add C#, java and C++ versions to the ImageRegistrationMethod3. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2379
* Add C#, java and C++ versions to ImageRegistrationMethodExhaustive. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2385
* Add C#, java and C++ versions to ImageRegistrationOptimizerWeights. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2384
* Use constant for doxygen word wrap size. by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2383
* Add java version to N4BiasFieldCorrection. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2388
* DOC: correct referencing of code in the rst file. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2387
* BUG: missing assignment of returned value. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2377
* Add java and c# to ImageRegistrationMethodBSpline1. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2389
* Add java, c++ and c# to ImageRegistrationMethodBSpline2 by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2391
* Add java, c# and R to ImageRegistrationMethodBSpline3. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2392
* DOC: Add FAQ about multiprocessing. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2396
* Migrate main by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2339
* Bump actions/download-artifact from 4 to 5 by @dependabot[bot] in https://github.com/SimpleITK/SimpleITK/pull/2390
* Bump actions/checkout from 4 to 5 by @dependabot[bot] in https://github.com/SimpleITK/SimpleITK/pull/2398
* Convert JSON to YAML by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2394
* COMP: Move TransformIO factory registration from IO to Common by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2400
* COMP: Remove unused field in C# ImageRegistrationMethodBSpline2 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2401
* Add c#, cxx, java and R versions to the LandmarkRegistration. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2386
* In generated C++ tests, static_cast the result value by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2403
* Add java and c# to ImageRegistrationMethodDisplacement1. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2393
* Update the ImageGridManipulation example. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2405
* ENH: Improve JSON schema documentation and remove deprecated fields by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2402
* Add optional input for initial estimated displacement field by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2271
* ENH: Add JSON to YAML conversion utility script by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2407
* Remove signed label image support from label intensity filter by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2272
* DOC: Modernize documentation generation workflow - switch to YAML-only and Python-based tools by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2406
* Use GHA hosted macos-15 ARM runner by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2241
* Improve schema documentation for test dim_vec by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2408
* Fix Sphinx docs warnings by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2412
* Update FilterTemplates.rst for YAML-based code generation by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2411
* Update documentation for InvertDisplacementFields from ITK. by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2410
* Fix unused variable warnings in ImageGridManipulation examples by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2413
* Improve Python Test Template by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2404
* Update Superbuild ITK tag to August 21, 2025 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2414
* Add rosetta intel build by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2409
* Update Google Test to v1.17.0 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2415
* GHA: Split ITK and SimpleITK nightly workflows by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2420
* Replace macos-13 build with macos-14 and 15 arm builds by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2417
* Use Github hosted mac-15 cross intel for packaging by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2421
* Remove extra cmake variable by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2423
* Add python version variable to GHA batch builds by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2422
* Move python tests by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2424
* Use superbuild python for language builds by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2428
* Bump actions/setup-python from 5 to 6 by @dependabot[bot] in https://github.com/SimpleITK/SimpleITK/pull/2426
* Bump pypa/gh-action-pypi-publish from 1.12.4 to 1.13.0 by @dependabot[bot] in https://github.com/SimpleITK/SimpleITK/pull/2427
* For tests fix check if language is enabled by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2429

**New Contributors**
* @chris-rapson-formus made their first contribution in https://github.com/SimpleITK/SimpleITK/pull/2323
* @hjmjohnson made their first contribution in https://github.com/SimpleITK/SimpleITK/pull/2365

**Full Changelog**: https://github.com/SimpleITK/SimpleITK/compare/v2.5.2...v3.0.0a1
