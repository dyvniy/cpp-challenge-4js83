cmake_minimum_required(VERSION 3.10)
project(challenge)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(challenge src/main.cpp)
target_include_directories(challenge PUBLIC include)
