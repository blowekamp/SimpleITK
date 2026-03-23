# SimpleITK Release v2.5.0

**Release Notes**


Announcing the SimpleITK 2.5.0 Release!

The release includes critical bug fixes and compilation issues including an update to ITK v5.4.2.


**Installing SimpleITK**

Complete instructions on getting started with SimpleITK including downloading binaries or building SimpleITK can be found on the SimpleITK [Read the Docs web page](https://simpleitk.readthedocs.io/en/master/index.html).

## Python Binary Downloads

- Python binary wheels are available for download. It is important to have the latest version of pip for correct wheel compatibility and installation. To install the latest SimpleITK package from PyPI:
  ```
  python -m pip install --upgrade pip
  python -m pip install SimpleITK
  ```

*NOTE*: The Python package filename now follows the enforced [name normalization](https://packaging.python.org/en/latest/specifications/name-normalization/) on PyPI. That is the name of the file is now `simpleitk....whl`.  PyPI is case insensitive with regards to names of packages. However, the name of the Python package when importing is still case and should be `import SimpleITK`.

The binary distribution contains wheels built on the Python 3.11 stable API ( see [PEP 384](https://peps.python.org/pep-0384/) ) and should work with Python versions including and after 3.11.



## Anaconda Binary Downloads

SimpleITK Conda binaries are available for the conda-forge ecosystem. To get started run the following command:

```
conda create --name sitk python=3.12 simpleitk --channel conda-forge --override-channels
```

## Getting Started

To get started with pre-compiled Java or C# bindings, building the R binding via a devtools installer or building SimpleITK from source code see the [Getting Started Guide](https://simpleitk.readthedocs.io/en/master/gettingStarted.html).



**Release Notes**

**New Features**
- Added support for up to 5D images in `MinimumProjectionImageFilter`.
- Introduced wrapping for `ReinitializeLevelSetImageFilter`.
- Enabled external ITK module `LabelErodeDilate` by default.

**Updates**
- Removed packaging of Python 3.8 (EOL) in manylinux wheels and GitHub Actions.
- Updated ITK to version 5.4.3.
- Upgraded Superbuild components:
  - PCRE2 to version 10.44.
  - Lua to version 5.4.7.
  - SWIG to version 4.3.0.
  - GTest to version 1.15.2.

**Bug Fixes**
- Resolved Valgrind issues in `LabelErodeDilate` module.
- Fixed syntax warnings for Python 3.12 compatibility.

**Documentation**
- Updated R documentation.
- Conformed to Python package name normalization in documentation.
- Fixed dead URLs in the read-the-docs documentation.


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
* Slicer backport for release by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2233
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
* Update Superbuild ITK version to v5.4.3 tag by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2256
* BUG: Normalize Python package name to simpleitk by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2257
* Image reader base dox by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2248
* Make GHA packaging case insensitive for python wheels by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2258
* Update documentation for python package name normalization by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2260
* Normalize Python package name for latest release notes by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2262
* Don't use head.sha for ci group by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2263
* Replace self-hosted runners with GH hosted runners by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2259
* Remove Python 3.8 from docker build script for manylinux wheels by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2267
* BUG: Remove ">=" from command line requirements by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2270
* DOC: Remove reference to kitware hosted wiki. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2273
* DOC: Updated dead URLs in read-the-docs documentation. by @zivy in https://github.com/SimpleITK/SimpleITK/pull/2274

**New Contributors**
* @fepegar made their first contribution in https://github.com/SimpleITK/SimpleITK/pull/2190
* @dependabot made their first contribution in https://github.com/SimpleITK/SimpleITK/pull/2245

**Full Changelog**: https://github.com/SimpleITK/SimpleITK/compare/v2.4.1...v2.5.0
