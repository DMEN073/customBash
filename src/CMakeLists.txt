# src/lib/CMakeLists.txt

# Define the MyLib library target
set(SOURCES 
parser.cpp
util.cpp
)
add_library(MyLib ${SOURCES})

# Specify include directories for MyLib
target_include_directories(MyLib PUBLIC ${PROJECT_SOURCE_DIR}/include)
