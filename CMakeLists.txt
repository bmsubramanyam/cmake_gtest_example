cmake_minimum_required(VERSION 3.20.2)

#Name and version of project
project(cmake_adder VERSION 1.0)

#For version: configuring input and output files
configure_file(cmake_adderConfig.h.in cmake_adderConfig.h)

#include_directories(Adder)

#including Adder directory as subdirectory
add_subdirectory(Adder)
add_subdirectory(test)

#linking main.cpp our executable
add_executable(${PROJECT_NAME} main.cpp)

#For version: output file "cmake_adderConfig.h" will be present in "PROJECT_BINARY_DIR", so including it
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

#linking Adder directory, so that #include will be easier in files 
target_include_directories(${PROJECT_NAME} PUBLIC Adder test)

#linking the generated Adder libraby to our project
target_link_libraries(${PROJECT_NAME} PUBLIC Adder)