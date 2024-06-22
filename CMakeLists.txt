cmake_minimum_required(VERSION 3.10)

project(MediaPlayer)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

FILE(GLOB SOURCES src/*.cpp)
add_executable(MediaPlayer ${SOURCES})  

add_subdirectory(vendor/glfw)
add_subdirectory(vendor/ffmpeg)
add_subdirectory(vendor/glad)


target_link_libraries(MediaPlayer
    glfw
    glad
)
