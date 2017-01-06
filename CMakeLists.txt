cmake_minimum_required(VERSION 3.6)
project(Code)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp recursiveCrawler.cpp recursiveCrawler.h nonRecursiveCrawler.cpp nonRecursiveCrawler.h)

find_package(Boost 1.63.0 COMPONENTS filesystem system)

add_executable(Code ${SOURCE_FILES})

include_directories(${Boost_INCLUDE_DIR})

target_link_libraries (Code ${Boost_LIBRARIES})