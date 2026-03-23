# SimpleITK Release v2.5.0rc1

This is SimpleITK 2.5.0 Release Candidate 1.

To upgrade to this Python binary package run:
```pip install --upgrade --pre SimpleITK --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v2.5.0rc1```



**What's Changed**
* Use SimpleITK_BUILD_DISTRIBUTE in Mac ARM build scrip by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2180
* Remove CircleCI from readme by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2179
* Instruct on creating isolated conda-forge ecosystem by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2182
* Additional clarification on using conda-forge by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2183
* STYLE:  Fixes to the python examples for pylint by @dave3d in https://github.com/SimpleITK/SimpleITK/pull/2178
* Update Superbuild GTest to 1.15.2 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2185
* Update docs by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2181
* Add mac-arm64 to Build.yml by @jwj019 in https://github.com/SimpleITK/SimpleITK/pull/2158
* DOC:  Fixes for pylint by @dave3d in https://github.com/SimpleITK/SimpleITK/pull/2187
* Fix SyntaxWarning in Python 3.12 by @fepegar in https://github.com/SimpleITK/SimpleITK/pull/2190
* Update for 2.5.0 development by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2192
* Remove Python 3.8 from GHA by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2194
* BUG: Correct SITK_MAX_DIMENSION usage by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2193
* Use constexpr statements over enable_if dispatched functions by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2196
* Address unused variable warning related to constexpr by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2198
* Use maybe_unused directive over Unsed function. by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2199
* Use variadic template for function traits and bindings by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2197
* Use SimpleITK_BUILD_STRIP for mac packages by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2201
* Use protected member function for safe GetIndex method by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2204
* ENH: Handle error strings in a way that doesn't produce compile warnings by @richardbeare in https://github.com/SimpleITK/SimpleITK/pull/2205
* Update Superbuild to PCRE 10.44 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2210
* Update to SWIG 4.3.0 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2208
* Update Superbuild to lua 5.4.7 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2209
* Remove legacy RUBY CMake variables by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2212
* Separate SimpleITKFilters tests by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2211
* Use Image::AllocateInitialized by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2213
* Update along ITK release_5.4 branch by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2216
* ENH: Add wrapping for ReinitializeLevelSetImageFilter by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2215
* Use cmake_minimum_required with ...max_policy by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2217
* Update ITK Superbuild version to 5.4.1 by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2223
* Update ITK to include vector image accessor patch by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2224
* Use build-in xml package by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2219
* Remove CircleCI configuration by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2150
* Add dependabot to update github actions by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2228
* Replace macos-12 batch builds by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2230
* DOC: Update R documentation. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2232
* Backport patches made in Slicer fork by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2137
* Enable external ITK module LabelErodeDilate by default by @dyollb in https://github.com/SimpleITK/SimpleITK/pull/2235
* Add upto 5D support to MinimumProjectionImageFilter by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2236
* Use loop and list for enabling ITK modules by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2237
* Update clang format by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2238
* Address Doxygen build issue with no python executable by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2242
* Use pre-commit GHA action by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2240
* Publish test pypi by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2231
* Test using GHA host linux arm by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2239
* Adress failing Doxygen builds in Packaging CI by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2243
* Update CSVtoTable arguments in CMake by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2244
* Add permissions to create release for publish action by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2246
* Explicitly set OSX_ARCHITECTURES on osx java package by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2247
* Bump pypa/gh-action-pypi-publish from 1.12.3 to 1.12.4 by @dependabot in https://github.com/SimpleITK/SimpleITK/pull/2245
* Override LabelErodeDilate module hash to fix valgrind defect by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2249
* Update ITK valgrind to include module used by simpleITK by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2250
* Second attempt to resolve valgrind issues in LabelErodeDilate by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2253

**New Contributors**
* @fepegar made their first contribution in https://github.com/SimpleITK/SimpleITK/pull/2190
* @dependabot made their first contribution in https://github.com/SimpleITK/SimpleITK/pull/2245

**Full Changelog**: https://github.com/SimpleITK/SimpleITK/compare/v2.4.1...v2.5.0rc1
