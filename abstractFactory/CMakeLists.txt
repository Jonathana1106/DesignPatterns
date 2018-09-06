cmake_minimum_required(VERSION 3.12)
project(abstractFactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(abstractFactory main.cpp car.cpp carFactory.cpp)