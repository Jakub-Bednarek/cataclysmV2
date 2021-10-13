cmake_minimum_required(VERSION 3.19)
project(GRAPHICS)

set(GRAPHICS_HEADERS
        "src/Application.h"
        "src/Window.h"
        )

set(GRAPHICS_SOURCES
        "src/Application.cpp"
        "src/Window.cpp"
        )

add_library(${PROJECT_NAME} STATIC ${GRAPHICS_HEADERS} ${GRAPHICS_SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../core/src)

target_link_libraries(${PROJECT_NAME} PUBLIC CORE)