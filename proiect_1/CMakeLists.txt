cmake_minimum_required(VERSION 3.0)

project(proiect_1)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
include_directories(interface source gtest)

#add subdirectories
#add_subdirectory(directory_name)

#add cpp files here
add_executable(
        main
        interface/phone.hpp
        source/phone.cpp 
        source/main.cpp
)

add_executable(
        mainTest
        interface/phone.hpp
        source/phone.cpp 
        gtest/mainTest.cpp
)

#add libraries
target_link_libraries(mainTest ${GTEST_LIBRARIES} pthread)