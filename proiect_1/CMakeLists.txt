cmake_minimum_required(VERSION 3.0)

project(proiect_1)

#set project target
set(TARGET main)

#set project test target
set(TEST_TARGET mainTest)
set(CMAKE_CXX_FLAGS -pthread)

#add gtest package and direcotries
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
include_directories(interface gtest interface/basicheaders source)

set(PROJECT_DIRECTORIES interface source gtest)

#add target header files
set(HEADER_FILES
    ${CMAKE_SOURCE_DIR}/interface/client.hpp
    ${CMAKE_SOURCE_DIR}/interface/Lock.hpp
    ${CMAKE_SOURCE_DIR}/interface/phone.hpp
    ${CMAKE_SOURCE_DIR}/interface/store.hpp
)

#add target source files
set(SOURCE_FILES
    ${CMAKE_SOURCE_DIR}/source/client.cpp
    ${CMAKE_SOURCE_DIR}/source/Lock.cpp
    ${CMAKE_SOURCE_DIR}/source/phone.cpp
    ${CMAKE_SOURCE_DIR}/source/store.cpp
    ${CMAKE_SOURCE_DIR}/source/main.cpp   
)

#add test target header files
set(TEST_HEADER_FILES
    ${CMAKE_SOURCE_DIR}/interface/phone.hpp
)

#add test target source files
set(TEST_SOURCE_FILES
    ${CMAKE_SOURCE_DIR}/source/phone.cpp
    ${CMAKE_SOURCE_DIR}/gtest/mainTest.cpp   
)


#construct project target
add_executable(
        ${TARGET}
        ${HEADER_FILES}
        ${SOURCE_FILES}
)

#construct project test target
add_executable(
        ${TEST_TARGET}
        ${TEST_HEADER_FILES}
        ${TEST_SOURCE_FILES}
)

#add libraries
target_link_libraries(${TEST_TARGET} ${GTEST_LIBRARIES} pthread)
