cmake_minimum_required(VERSION 3.19)
project(PHYSICS)

set(PHYSICS_HEADERS
        "src/Building.h"
        "src/Enstatite.h"
        "src/Material.h"
        "src/Mineral.h"
        "src/PhysicalObject.h")

set(PHYSICS_SOURCES
        "src/Building.cpp"
        "src/Enstatite.cpp"
        "src/Material.cpp"
        "src/Meteorite.cpp"
        "src/PhysicalObject.cpp")

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../vendor/reactphysics3d reactphysics3d)
add_library(${PROJECT_NAME} STATIC ${PHYSICS_HEADERS} ${PHYSICS_SOURCES})

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../core CORE)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../vendor/reactphysics3d/include)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../core/src)

target_link_libraries(${PROJECT_NAME} PUBLIC reactphysics3d)
target_link_libraries(${PROJECT_NAME} PUBLIC CORE)