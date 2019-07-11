# CMakeList.txt : CMake project for ApplicationCpp, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(DataStructures)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories("./include")

# Add source to this project's executable.
add_executable (
	DataStructures
	"src/Main.cpp"
	"src/List.cpp"
	"src/Stack.cpp"
	"src/Binary.cpp"
)
