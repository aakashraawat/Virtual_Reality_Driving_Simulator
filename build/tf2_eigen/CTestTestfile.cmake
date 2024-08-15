# CMake generated Testfile for 
# Source directory: /home/aakashraawat/colcon_ws/src/geometry2/tf2_eigen
# Build directory: /home/aakashraawat/colcon_ws/build/tf2_eigen
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tf2_eigen-test "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/aakashraawat/colcon_ws/build/tf2_eigen/test_results/tf2_eigen/tf2_eigen-test.gtest.xml" "--package-name" "tf2_eigen" "--output-file" "/home/aakashraawat/colcon_ws/build/tf2_eigen/ament_cmake_gtest/tf2_eigen-test.txt" "--command" "/home/aakashraawat/colcon_ws/build/tf2_eigen/tf2_eigen-test" "--gtest_output=xml:/home/aakashraawat/colcon_ws/build/tf2_eigen/test_results/tf2_eigen/tf2_eigen-test.gtest.xml")
set_tests_properties(tf2_eigen-test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/aakashraawat/colcon_ws/build/tf2_eigen/tf2_eigen-test" TIMEOUT "60" WORKING_DIRECTORY "/home/aakashraawat/colcon_ws/build/tf2_eigen" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/aakashraawat/colcon_ws/src/geometry2/tf2_eigen/CMakeLists.txt;25;ament_add_gtest;/home/aakashraawat/colcon_ws/src/geometry2/tf2_eigen/CMakeLists.txt;0;")
subdirs("gtest")
