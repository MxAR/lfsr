cmake_minimum_required(VERSION 3.9)
project(lfsr C)
set(CMAKE_C_STANDARD 11)
add_library(lfsr lfsr.h)
set_target_properties(lfsr PROPERTIES LINKER_LANGUAGE C)