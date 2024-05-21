cmake_minimum_required(VERSION 3.10)
project(FlowSimAI)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find OpenCV package
find_package(OpenCV REQUIRED)

# Include directories
include_directories(${OpenCV_INCLUDE_DIRS})

# Add the executable
add_executable(main main.cpp opencvFunc.cpp)

# Link libraries
target_link_libraries(main ${OpenCV_LIBS})
