cmake_minimum_required(VERSION 3.12)
project(ResizeBilinear_C C)

set(CMAKE_C_STANDARD 99)

add_executable(ResizeBilinear_C main.c)

# For OpenCV
cmake_minimum_required(VERSION 2.8)
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
target_link_libraries( ResizeBilinear_C ${OpenCV_LIBS} )