# Minimum required version of CMake
cmake_minimum_required(VERSION 3.20)

# Project name
project(Software_development2)

# Set the C++ standard to C++14
set(CMAKE_CXX_STANDARD 14)

# Set additional compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")

# Include directories for header files
include_directories(include)

# Add a library target named developer_lib with the specified source files
add_library(developer_lib
    src/developer.cpp
    src/junior_developer.cpp
    src/senior_developer.cpp
)

# Add an executable target named main_app with the specified source file
add_executable(main_app main.cpp)

# Link the developer_lib library to the main_app executable
target_link_libraries(main_app developer_lib)

# Fetch and build GoogleTest for unit testing
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
FetchContent_MakeAvailable(googletest)

# Enable testing
enable_testing()

# Add the tests subdirectory for testing
add_subdirectory(tests)
