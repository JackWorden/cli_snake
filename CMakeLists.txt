cmake_minimum_required(VERSION 3.7)
project(cli_snake)

set(CMAKE_CXX_STANDARD 14)

include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB_RECURSE HEADERS "${PROJECT_SOURCE_DIR}/include/*.h")

set(SOURCE_FILES src/main.cpp src/Console.cpp src/model/Map.cpp src/model/Cell.cpp src/model/Position.cpp src/Game.cpp)

add_executable(cli_snake ${HEADERS} ${SOURCE_FILES})