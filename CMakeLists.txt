cmake_minimum_required(VERSION 3.17)
project(POO2_Riviere)

set(CMAKE_CXX_STANDARD 14)

add_executable(POO2_Riviere main.cpp riviere/boat.cpp riviere/boat.hpp riviere/container.cpp riviere/container.hpp riviere/person.cpp riviere/person.hpp riviere/bank.cpp riviere/bank.hpp riviere/controller.cpp riviere/controller.hpp)