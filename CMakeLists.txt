cmake_minimum_required(VERSION 3.15 FATAL_ERROR)
project(dlake-byte-indexer) 
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_PREFIX_PATH ${CMAKE_SOURCE_DIR}/include_libs/usr/local)
include_directories(${CMAKE_SOURCE_DIR}/include_libs/usr/local/include/)

message(STATUS ${CMAKE_PREFIX_PATH})
find_package(Arrow REQUIRED)

add_executable(dlake-indexer src/indexer.cpp src/util/FlatFileUtility.cpp src/util/JsonArgumentParser.cpp)
target_link_libraries(dlake-indexer arrow_static)