cmake_minimum_required(VERSION 3.13)
project(anti_cheat)

set(CMAKE_CXX_STANDARD 17)

add_library(anti_cheat SHARED source/dllmain.cpp source/includes.hpp source/util/values.cpp source/util/values.hpp source/wine/wine.cpp source/wine/wine.hpp source/wine/wine_report.hpp source/detection/detection.hpp source/detection/mouse/auto_clicker.cpp source/detection/mouse/auto_clicker.hpp source/detection/handler/detection_manager.cpp source/detection/handler/detection_manager.hpp)