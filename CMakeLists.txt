cmake_minimum_required(VERSION 3.4)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#set(
#  HUNTER_CACHE_SERVERS
#  "https://github.com/bmstu-iu8-cpp-sem-3/hunter-cache"
#  CACHE STRING "Default cache server"
#)

#include("cmake/HunterGate.cmake")

#HunterGate(
#  URL "https://github.com/cpp-pm/hunter/archive/v0.23.218.tar.gz"
#  SHA1 "9a3594a61227967fb92159339ba326701b287b19"
#)

project(stack)

#hunter_add_package(Boost COMPONENTS shared_ptr)
#find_package(Boost CONFIG REQUIRED shared_ptr)

add_library(stack1 INTERFACE)
add_library(stack2 INTERFACE)

add_executable(stack sources/main.cpp)

target_include_directories(stack1 INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(stack2 INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(stack stack1 stack2)
