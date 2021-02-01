cmake_minimum_required(VERSION 3.15)

project(dw-cli VERSION 0.1 LANGUAGES CXX)

include_directories("../dw-lib/src")
link_directories("../dw-lib/build/src")

add_subdirectory(src)