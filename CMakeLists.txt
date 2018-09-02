cmake_minimum_required(VERSION 3.12)
project(DesignPatterns)

set(CMAKE_CXX_STANDARD 14)

add_executable(DesignPatterns main.cpp Observer/WeatherData.cpp Observer/WeatherData.h Observer/Client.cpp Observer/Client.h Observer/Observer.h Observer/Subject.h Adapter/Adapter.cpp Adapter/Adapter.h Adapter/AmericanSocketInterface.h Adapter/ElectricKettle.cpp Adapter/ElectricKettle.h Adapter/EuropeanSocketInterface.h Adapter/Socket.h Builder/cocinero.cpp Builder/cocinero.h Builder/pastel.cpp Builder/pastel.h Builder/pasteleria.cpp Builder/pasteleria.h)