cmake_minimum_required(VERSION 3.23)
project(AttendanceSystem C)

set(CMAKE_C_STANDARD 99)

add_executable(AttendanceSystem main.c Show.c header/Show.h)
