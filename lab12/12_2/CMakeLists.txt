cmake_minimum_required(VERSION 3.10)

project(task1)
add_subdirectory("./background")
add_subdirectory("./pipes")
include_directories("background")
include_directories("pipes")
add_executable(main src/main.c background/background.c pipes/read_pipe.c pipes/write_pipe.c)

add_definitions("-DTEST_DEF=5")
