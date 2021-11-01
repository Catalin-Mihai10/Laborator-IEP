cmake_minimum_required(VERSION 3.0)

project(proiect_1)

#find_package(GTest REQUIRED)
#include_directories(${GTEST_INCLUDE_DIRS})
include_directories(interface)

#add subdirectories
add_subdirectory(source)

#add cpp files here
add_executable(
        main
        interface/main.hpp
        interface/phone.hpp
        source/phone.cpp 
        source/main.cpp
)

#add_executable(
 #       proiectTest
#)

#add libraries
#target_link_libraries(proiectTest ${GTEST_LIBRARIES} pthread)