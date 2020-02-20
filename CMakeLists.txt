cmake_minimum_required(VERSION 3.15)
project(timelapse_auto_ramp)

set(CMAKE_CXX_STANDARD 17)

add_executable(timelapse_auto_ramp src/main.cpp src/Timelapse.cpp src/Timelapse.h src/Utils.cpp src/Utils.h src/Image.cpp src/Image.h)