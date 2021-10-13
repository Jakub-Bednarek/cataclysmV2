cmake_minimum_required(VERSION 3.19)
project(SANDBOX)

set(CMAKE_CXX_STANDARD 17)

file(GLOB CPP_FILES src/*.cpp)

file(GLOB H_FILES src/*.h)

include_directories(${ENGINE_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} WIN32 ${CPP_FILES} ${H_FILES})
target_include_directories(${PROJECT_NAME} PRIVATE ${H_FILES})

target_link_libraries(${PROJECT_NAME} ENGINE)