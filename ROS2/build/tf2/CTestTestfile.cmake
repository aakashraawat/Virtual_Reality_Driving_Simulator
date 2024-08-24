# CMake generated Testfile for 
# Source directory: /home/aakashraawat/colcon_ws/src/geometry2/tf2
# Build directory: /home/aakashraawat/colcon_ws/build/tf2
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_cache_unittest "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/aakashraawat/colcon_ws/build/tf2/test_results/tf2/test_cache_unittest.gtest.xml" "--package-name" "tf2" "--output-file" "/home/aakashraawat/colcon_ws/build/tf2/ament_cmake_gtest/test_cache_unittest.txt" "--command" "/home/aakashraawat/colcon_ws/build/tf2/test_cache_unittest" "--gtest_output=xml:/home/aakashraawat/colcon_ws/build/tf2/test_results/tf2/test_cache_unittest.gtest.xml")
set_tests_properties(test_cache_unittest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/aakashraawat/colcon_ws/build/tf2/test_cache_unittest" TIMEOUT "60" WORKING_DIRECTORY "/home/aakashraawat/colcon_ws/build/tf2" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/aakashraawat/colcon_ws/src/geometry2/tf2/CMakeLists.txt;49;ament_add_gtest;/home/aakashraawat/colcon_ws/src/geometry2/tf2/CMakeLists.txt;0;")
add_test(test_static_cache_unittest "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/aakashraawat/colcon_ws/build/tf2/test_results/tf2/test_static_cache_unittest.gtest.xml" "--package-name" "tf2" "--output-file" "/home/aakashraawat/colcon_ws/build/tf2/ament_cmake_gtest/test_static_cache_unittest.txt" "--command" "/home/aakashraawat/colcon_ws/build/tf2/test_static_cache_unittest" "--gtest_output=xml:/home/aakashraawat/colcon_ws/build/tf2/test_results/tf2/test_static_cache_unittest.gtest.xml")
set_tests_properties(test_static_cache_unittest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/aakashraawat/colcon_ws/build/tf2/test_static_cache_unittest" TIMEOUT "60" WORKING_DIRECTORY "/home/aakashraawat/colcon_ws/build/tf2" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/aakashraawat/colcon_ws/src/geometry2/tf2/CMakeLists.txt;58;ament_add_gtest;/home/aakashraawat/colcon_ws/src/geometry2/tf2/CMakeLists.txt;0;")
add_test(test_simple "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/aakashraawat/colcon_ws/build/tf2/test_results/tf2/test_simple.gtest.xml" "--package-name" "tf2" "--output-file" "/home/aakashraawat/colcon_ws/build/tf2/ament_cmake_gtest/test_simple.txt" "--command" "/home/aakashraawat/colcon_ws/build/tf2/test_simple" "--gtest_output=xml:/home/aakashraawat/colcon_ws/build/tf2/test_results/tf2/test_simple.gtest.xml")
set_tests_properties(test_simple PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/aakashraawat/colcon_ws/build/tf2/test_simple" TIMEOUT "60" WORKING_DIRECTORY "/home/aakashraawat/colcon_ws/build/tf2" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/aakashraawat/colcon_ws/src/geometry2/tf2/CMakeLists.txt;68;ament_add_gtest;/home/aakashraawat/colcon_ws/src/geometry2/tf2/CMakeLists.txt;0;")
add_test(test_time "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/aakashraawat/colcon_ws/build/tf2/test_results/tf2/test_time.gtest.xml" "--package-name" "tf2" "--output-file" "/home/aakashraawat/colcon_ws/build/tf2/ament_cmake_gtest/test_time.txt" "--command" "/home/aakashraawat/colcon_ws/build/tf2/test_time" "--gtest_output=xml:/home/aakashraawat/colcon_ws/build/tf2/test_results/tf2/test_time.gtest.xml")
set_tests_properties(test_time PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/aakashraawat/colcon_ws/build/tf2/test_time" TIMEOUT "60" WORKING_DIRECTORY "/home/aakashraawat/colcon_ws/build/tf2" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/aakashraawat/colcon_ws/src/geometry2/tf2/CMakeLists.txt;77;ament_add_gtest;/home/aakashraawat/colcon_ws/src/geometry2/tf2/CMakeLists.txt;0;")
subdirs("gtest")