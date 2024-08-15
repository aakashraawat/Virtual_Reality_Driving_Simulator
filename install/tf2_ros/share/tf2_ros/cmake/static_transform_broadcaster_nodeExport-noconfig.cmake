#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tf2_ros::static_transform_broadcaster_node" for configuration ""
set_property(TARGET tf2_ros::static_transform_broadcaster_node APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tf2_ros::static_transform_broadcaster_node PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libstatic_transform_broadcaster_node.so"
  IMPORTED_SONAME_NOCONFIG "libstatic_transform_broadcaster_node.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tf2_ros::static_transform_broadcaster_node )
list(APPEND _IMPORT_CHECK_FILES_FOR_tf2_ros::static_transform_broadcaster_node "${_IMPORT_PREFIX}/lib/libstatic_transform_broadcaster_node.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
