cmake_minimum_required(VERSION 3.12)
project(facade)

set(CMAKE_CXX_STANDARD 14)

add_executable(facade main.cpp facade.cpp facade.h Audi.cpp Audi.h Mazda.cpp Mazda.h)