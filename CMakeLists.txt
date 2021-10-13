cmake_minimum_required(VERSION 3.19)
project(CATACLYSM)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_INCLUDE_CURRENT_DIR ON)

if(WIN32)
    set(CMAKE_SHARED_LIBRARY_PREFIX "")
endif()

if(ENABLE_ASSERTS)
    add_compile_definitions(CTM_ENABLE_ASSERTS)
    message(STATUS "Asserts enabled.")
else()
    message(STATUS "Asserts not enabled.")
endif()

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/components/engine)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/components/executable)
