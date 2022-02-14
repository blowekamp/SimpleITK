set( ITK_NO_IMAGEIO_FACTORY_REGISTER_MANAGER 1 )
include( ${ITK_USE_FILE} )


# TODO (Niels Dekker, LKEB, 2022) include(${ELASTIX_CONFIG_TARGETS_FILE})
include(${CMAKE_BINARY_DIR}/../Elastix-build/ElastixTargets.cmake)

add_library( ElastixImageFilter sitkElastixImageFilter.cxx sitkElastixImageFilterImpl.h sitkElastixImageFilterImpl.cxx )
set_target_properties( ElastixImageFilter PROPERTIES SKIP_BUILD_RPATH TRUE )
target_include_directories( ElastixImageFilter
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/Code/ElastixTransformixWrappers/include>
    $<INSTALL_INTERFACE:${SimpleITK_INSTALL_INCLUDE_DIR}>
  PRIVATE
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/Code/BasicFilters/include>
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/Code/Common/include>
    $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/Code/Common/include>
    $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/../Elastix/Common/ParameterFileParser>
    $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/../Elastix/Common/xout>
    $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/../Elastix/Core/Configuration>
    $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/../Elastix/Core/Install>
    $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/../Elastix/Core/Kernel>
    $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/../Elastix/Core/Main>
    ${CMAKE_CURRENT_SOURCE_DIR} )
target_link_libraries( ElastixImageFilter INTERFACE elastix_lib )
target_compile_options( ElastixImageFilter PUBLIC ${SimpleITK_PUBLIC_COMPILE_OPTIONS} PRIVATE ${SimpleITK_PRIVATE_COMPILE_OPTIONS} )
target_compile_features( ElastixImageFilter PUBLIC cxx_std_14 )
sitk_install_exported_target( ElastixImageFilter )


add_library( TransformixImageFilter sitkTransformixImageFilter.cxx sitkTransformixImageFilterImpl.h  sitkTransformixImageFilterImpl.cxx )
set_target_properties( TransformixImageFilter PROPERTIES SKIP_BUILD_RPATH TRUE )
target_include_directories( TransformixImageFilter
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/Code/ElastixTransformixWrappers/include>
    $<INSTALL_INTERFACE:${SimpleITK_INSTALL_INCLUDE_DIR}>
  PRIVATE
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/Code/ElastixTransformixWrappers/include>
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/Code/BasicFilters/include>
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/Code/Common/include>
    $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/Code/Common/include>
    $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/../Elastix/Common/ParameterFileParser>
    $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/../Elastix/Common/xout>
    $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/../Elastix/Core/Configuration>
    $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/../Elastix/Core/Install>
    $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/../Elastix/Core/Kernel>
    $<BUILD_INTERFACE:${CMAKE_BINARY_DIR}/../Elastix/Core/Main>
    $<INSTALL_INTERFACE:${SimpleITK_INSTALL_INCLUDE_DIR}>
    ${CMAKE_CURRENT_SOURCE_DIR} )
target_link_libraries( TransformixImageFilter INTERFACE transformix_lib )
target_compile_options( TransformixImageFilter PUBLIC ${SimpleITK_PUBLIC_COMPILE_OPTIONS} PRIVATE ${SimpleITK_PRIVATE_COMPILE_OPTIONS} )
target_compile_features( TransformixImageFilter PUBLIC cxx_std_14 )
sitk_install_exported_target( TransformixImageFilter )
