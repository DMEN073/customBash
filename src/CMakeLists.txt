# src/lib/CMakeLists.txt

# Define the MyLib library target
add_library(MyLib mylib.cpp)

# Specify include directories for MyLib
target_include_directories(MyLib PUBLIC ${PROJECT_SOURCE_DIR}/include)
