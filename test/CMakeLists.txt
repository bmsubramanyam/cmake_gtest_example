cmake_minimum_required(VERSION 3.20.2)

# for visual studio in windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
enable_testing()

add_subdirectory(googletest-master)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(AdderTest AdderTest.cpp)

#add_test(NAME AdderTest COMMAND AdderTest)

target_link_libraries(AdderTest PUBLIC gtest gtest_main)

