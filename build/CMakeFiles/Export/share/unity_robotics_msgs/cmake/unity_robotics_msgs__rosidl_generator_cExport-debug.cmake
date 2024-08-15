#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "unity_robotics_msgs::unity_robotics_msgs__rosidl_generator_c" for configuration "Debug"
set_property(TARGET unity_robotics_msgs::unity_robotics_msgs__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(unity_robotics_msgs::unity_robotics_msgs__rosidl_generator_c PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libunity_robotics_msgs__rosidl_generator_c.so"
  IMPORTED_SONAME_DEBUG "libunity_robotics_msgs__rosidl_generator_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS unity_robotics_msgs::unity_robotics_msgs__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_unity_robotics_msgs::unity_robotics_msgs__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libunity_robotics_msgs__rosidl_generator_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
