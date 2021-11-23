include_directories(client phone)


#define client target
set(CLIENT_TARGET client)

#add client directory header files here
set(CLIENT_HEADER_FILES 
    client/client.hpp
)

set(CLIENT_SOURCE_FILES
    client/client.cpp)


add_library(${CLIENT_TARGET}
    ${CLIENT_HEADER_FILES}
    ${CLIENT_SOURCE_FILES})