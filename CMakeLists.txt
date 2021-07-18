cmake_minimum_required(VERSION 3.10)

# set the project name
project(CornersOnly)

# add the executable
add_executable(CornersOnly src/main.cpp include/corners_only/board/board_dim.hpp include/corners_only/board/board_data.hpp)