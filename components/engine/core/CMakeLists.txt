cmake_minimum_required(VERSION 3.18)
project(CORE)

set(CMAKE_CXX_STANDARD 17)

set(CORE_HEADERS
        "src/Logger.h"
        "src/Macro.h"
        "src/InitConsole.h"
        )

set(CORE_SOURCES
        "src/Logger.cpp"
        )

add_library(${PROJECT_NAME} STATIC ${CORE_HEADERS} ${CORE_SOURCES})
target_link_libraries(${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../vendor/spdlog/include)