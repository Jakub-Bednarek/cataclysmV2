cmake_minimum_required(VERSION 3.19)
project(IMGUI)

file(GLOB IMGUI_FILES files/*.cpp)

add_library(${PROJECT_NAME} STATIC ${IMGUI_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/files)