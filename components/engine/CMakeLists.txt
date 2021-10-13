cmake_minimum_required(VERSION 3.19)
project(ENGINE)

set(CMAKE_CXX_STANDARD 17)

# Engine project settings

add_library(${PROJECT_NAME} STATIC ${CMAKE_CURRENT_SOURCE_DIR}/Initializer.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)

set_target_properties(${PROJECT_NAME} PROPERTIES POSITION_INDEPENDENT_CODE ON)

target_link_libraries(${PROJECT_NAME})

set(${PROJECT_NAME}_INCLUDE_DIRS ${PROJECT_SOURCE_DIR} CACHE INTERNAL "${PROJECT_NAME}: Include Directiories" FORCE)

#PHYSICS 3D
set(ReactPhysics3D_DIR ${CMAKE_CURRENT_SOURCE_DIR}/vendor/reactphysics3d)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/vendor/reactphysics3d/include)

# CORE
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/core/src)
target_link_libraries(${PROJECT_NAME} PUBLIC CORE)

# PHYSICS and GRAPHICS
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/graphics)
target_link_libraries(${PROJECT_NAME} PRIVATE GRAPHICS)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/graphics/src)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/physics)
target_link_libraries(${PROJECT_NAME} PRIVATE PHYSICS)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/physics/src)

# Vendor path
set(VENDOR_PATH ${CMAKE_CURRENT_SOURCE_DIR}/vendor)

# GLAD stuff
add_subdirectory(${VENDOR_PATH}/GLAD)
target_link_libraries(${PROJECT_NAME} PRIVATE GLAD)

# ImGui stuff
add_subdirectory(${VENDOR_PATH}/ImGui)
target_link_libraries(${PROJECT_NAME} PRIVATE IMGUI)

# spdlog stuff
target_include_directories(${PROJECT_NAME} PUBLIC ${VENDOR_PATH}/spdlog/include)

# stb_image stuff
target_include_directories(${PROJECT_NAME} PUBLIC ${VENDOR_PATH}/stb_image)
