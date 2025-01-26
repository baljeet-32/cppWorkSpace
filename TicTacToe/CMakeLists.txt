# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(TicTacToe VERSION 1.0)

# Set the C++ standard to use
set(CMAKE_CXX_STANDARD 23)

# Require the C++ standard to be set
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set the source files for the project
set(SOURCES
    src/main.cpp
)

# Add an executable target for the project
add_executable(TicTacToe ${SOURCES})
