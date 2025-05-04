# Root CMakeLists.txt

cmake_minimum_required(VERSION 3.14)
project(MyProject VERSION 1.0.0 LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add subdirectories for src, app, and third_party
add_subdirectory(external)
add_subdirectory(src)
# add executable
add_subdirectory(app)

