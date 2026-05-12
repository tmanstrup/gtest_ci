cmake_minimum_required(VERSION 3.14)
project(SumProgram)

set(CMAKE_CXX_STANDARD 17)

option(BUILD_TEST "Build tests" ON)

# Add executable
add_executable(sum src/main.cpp src/sum.cpp)

if (BUILD_TEST)
find_package(GTest REQUIRED)
# Add test executable
add_executable(sum_test test/sum_test.cpp src/sum.cpp)
target_link_libraries(sum_test GTest::gtest_main)

enable_testing()
add_test(NAME SumTest COMMAND sum_test)
endif()