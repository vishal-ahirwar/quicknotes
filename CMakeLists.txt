#Auto Generated Root CMake file by Flick CLI
#Copyright(c) 2025 None.All rights reerved.
cmake_minimum_required(VERSION 3.6...3.31)
project(quicknotes VERSION 1.0.0 LANGUAGES CXX)
include(cmake/config.cmake)
#@add_find_package Warning: Do not remove this line
find_package(wxWidgets CONFIG REQUIRED)
find_package(libpqxx CONFIG REQUIRED)
#@add_subproject Warning: Do not remove this line
add_subdirectory(quicknotes)
