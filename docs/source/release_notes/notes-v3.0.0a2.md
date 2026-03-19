# SimpleITK Release v3.0.0a2


To upgrade to this Python binary package run:
```pip install --upgrade --pre simpleitk --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v3.0.0a2```



**What's Changed**
* Use rossetta arch command to run python executable - for release by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2419
* BUG: Remove '%' from tmp file names by @dave3d in https://github.com/SimpleITK/SimpleITK/pull/2432
* Update ITK version to v6.0b01 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2431
* Template tweaks by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2437
* Use macos-15-intel for intel binaries by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2435
* Adjust white space in filter templates by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2438
* Add wrapping for ContourExtractor2D by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2436
* Bump actions/upload-artifact from 4 to 5 by @dependabot[bot] in https://github.com/SimpleITK/SimpleITK/pull/2439
* Bump actions/download-artifact from 5 to 6 by @dependabot[bot] in https://github.com/SimpleITK/SimpleITK/pull/2440
* Update to latest versions of packages. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2441
* Script for analyzing GitHub release downloads. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2442
* Replace the environment.yml file with usage of uv. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2444
* COMP: Address CMake warning related to empty elseif by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2443
* FOR RELEASE - Update docker based package builds to use external source by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2446
* Fix generation of checksums by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2448
* Fix generation of checksums - FOR RELEASE by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2450
* Update superbuild ITK version to 5.4.5 release by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2449
* Add PyBuffer interface to Image (PEP 688) and numpy array conversion by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2447
* Bump actions/checkout from 5 to 6 by @dependabot[bot] in https://github.com/SimpleITK/SimpleITK/pull/2452
* Update tutorials page. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2453
* Move Python package metadata to pyproject.toml by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2451
* Add ContainerManageMemory method to the PimpleImage by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2455
* Utilities for download analysis. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2454
* Use pip wheel for PEP 571 python build system by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2456
* Remove cmake checks for unsupported MSVC compilers. by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2457
* Use CMake's ContentFetch for GoogleTest by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2458
* check the used GTest::gtest target for existing package by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2461
* Add CMake block to Source Version script by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2462
* Set unique file name for the SimpleIO examples. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2464
* Specify SWIG 4.3.0 as minimum required by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2418
* Propagate used CMake git version variables by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2468
* Various CMake improvements by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2466
* Add SWIG 4.3.0 version requirement to superbuild by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2472
* Add optional --output flag to expand script by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2467
* Fix extension for Python module on windows by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2474
* GHA in Build and Test CI, use pip for SimpleITK python build environment. by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2471
* Tune and fix options in GitHub Actions by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2473
* Bump actions/upload-artifact from 5 to 6 by @dependabot[bot] in https://github.com/SimpleITK/SimpleITK/pull/2477
* Bump actions/download-artifact from 6 to 7 by @dependabot[bot] in https://github.com/SimpleITK/SimpleITK/pull/2479
* Bump actions/cache from 4 to 5 by @dependabot[bot] in https://github.com/SimpleITK/SimpleITK/pull/2478
* Use CMAKE_LINKER_TYPE to set ld as gold by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2480
* Add support for pyyaml C based loaders by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2481
* Standardize Module_ITKReview option in Superbuild by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2482
* GH fix missing matrix to environment variable propagation by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2483
* Fix compile options for Lua wrapping. by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2485
* Add uv installer for powershell by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2487
* Fix setup-precommit to support Windows venv paths by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2489
* Fix if logic when using IS_EXECUTABLE before cmake 3.29 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2488
* Fix path to uv in SuperBuild on non-windows by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2490
* Refactor to use scikit-build-core with installation script by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2484
* Use a funciton over block for CMake version compatibility by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2491
* Fix python dist by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2492
* GHA enable Lua wrapping in batch build by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2486
* Move ITK link and flags properties to targets by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2493
* Add manylinux_2_28 Python Packages by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2496
* Remove extra find_package for ITK by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2495
* Update ITK Superbuild version to 6.0b2 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2498
* Add using ITK with CMake's FetchContent module by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2475
* Prefer usage of CMake foreach with IN LISTS by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2503
* Update Doxygen build to use ITK FetchContent by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2501
* ENH: Migrate to CMake 3.23+ FILE_SET for header management by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2502
* Address missing SimpleITKBasicFiltersGeneratedHeaders.i file by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2506
* Create BasicFilters/src directory for output of generated code. by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2507
* Stop support packaging for Python 3.9 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2508
* Add toplevel pyproject.toml by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2509
* Use environment varialbe to configure Mac OSX target by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2510
* Fixup pyproject by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2511
* Fix CMake check for using python limited API by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2512
* Use new ITK interface Modules in PR by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2504
* Update exports to use same export-name by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2514
* ENH: Update ITK to v6.0b02 tag by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2516


**Full Changelog**: https://github.com/SimpleITK/SimpleITK/compare/v3.0.0a1...v3.0.0a2
