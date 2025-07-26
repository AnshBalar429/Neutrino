cmake_minimum_required(VERSION 3.15)
project(MyApi
        VERSION 0.1
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Include path for headers
include_directories(${CMAKE_SOURCE_DIR}/include)

# Define our executable
add_executable(MyApi
        src/main.cpp
)
