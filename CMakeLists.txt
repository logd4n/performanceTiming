cmake_minimum_required(VERSION 3.2)

project(perf_timer)

file(GLOB
CPPS "*.cpp")

add_executable(${PROJECT_NAME} ${CPPS})
