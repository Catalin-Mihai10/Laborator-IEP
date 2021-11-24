#define client target
set(CLIENT_TARGET client)

#add client directory header files here
set(CLIENT_HEADER_FILES 
    client.hpp
)

set(CLIENT_SOURCE_FILES
    client.cpp
)


add_library(${CLIENT_TARGET}
    ${CLIENT_HEADER_FILES}
    ${CLIENT_SOURCE_FILES})

target_include_directories(${CLIENT_TARGET} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})