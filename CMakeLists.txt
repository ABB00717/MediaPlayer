cmake_minimum_required(VERSION 3.10)

project(MediaPlayer)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(vendor/glfw)

add_executable(MediaPlayer src/mediaPlayer.cpp)

target_link_libraries(MediaPlayer
    glfw
)
