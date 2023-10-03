cmake_minimum_required(VERSION 3.27)

set(CMAKE_CXX_STANDARD 17)

project(DynamicBuffer)

add_executable(BufferApp main.cpp)

#TODO add subdirs and include dirs
include_directories(${CMAKE_SOURCE_DIR}/includes)

add_subdirectory(${CMAKE_SOURCE_DIR}/Concrete_DynamicBuffer)

# target_include_directories(BufferApp )
message("HELLO")
message("${CMAKE_SOURCE_DIR}")

target_link_libraries(BufferApp BufferLib)
