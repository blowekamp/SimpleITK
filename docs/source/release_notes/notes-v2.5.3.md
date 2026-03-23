# SimpleITK Release v2.5.3


To upgrade to this Python binary package run:
```pip install --upgrade --pre simpleitk --find-links https://github.com/SimpleITK/SimpleITK/releases/tag/v2.5.3```



**What's Changed**
* Use rossetta arch command to run python executable - for release by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2419
* FOR RELEASE - Update docker based package builds to use external source by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2446
* Fix generation of checksums - FOR RELEASE by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2450
* Update superbuild ITK version to 5.4.5 release by @blowekamp in https://github.com/SimpleITK/SimpleITK/pull/2449


**Security Fixes**

* Addresses Out-of-Bounds vulnerability with a malformed DICOM file containing encapsulated PixelData fragments.  The fix is contained in ITK 5.4.5.

**Full Changelog**: https://github.com/SimpleITK/SimpleITK/compare/v2.5.2...v2.5.3
