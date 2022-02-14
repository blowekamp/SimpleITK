#ifndef sitkInternalUtilities_h
#define sitkInternalUtilities_h

namespace itk {
  namespace simple {

/** SimpleElastix and SimpleTransformix is compiled with float pixel type only. This
* saves compile time and reduces binary size. Images are automatically casted to and
* from float before and after registration.
*/
typedef typelist::MakeTypeList< BasicPixelID< float > >::Type FloatPixelIDTypeList;


} // end namespace simple
} // end namespace itk

#endif
