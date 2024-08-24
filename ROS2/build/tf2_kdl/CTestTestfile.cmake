# CMake generated Testfile for 
# Source directory: /home/aakashraawat/colcon_ws/src/geometry2/tf2_kdl
# Build directory: /home/aakashraawat/colcon_ws/build/tf2_kdl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_kdl "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/aakashraawat/colcon_ws/build/tf2_kdl/test_results/tf2_kdl/test_kdl.gtest.xml" "--package-name" "tf2_kdl" "--output-file" "/home/aakashraawat/colcon_ws/build/tf2_kdl/ament_cmake_gtest/test_kdl.txt" "--command" "/home/aakashraawat/colcon_ws/build/tf2_kdl/test_kdl" "--gtest_output=xml:/home/aakashraawat/colcon_ws/build/tf2_kdl/test_results/tf2_kdl/test_kdl.gtest.xml")
set_tests_properties(test_kdl PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/aakashraawat/colcon_ws/build/tf2_kdl/test_kdl" TIMEOUT "60" WORKING_DIRECTORY "/home/aakashraawat/colcon_ws/build/tf2_kdl" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/aakashraawat/colcon_ws/src/geometry2/tf2_kdl/CMakeLists.txt;37;ament_add_gtest;/home/aakashraawat/colcon_ws/src/geometry2/tf2_kdl/CMakeLists.txt;0;")
subdirs("gtest")
