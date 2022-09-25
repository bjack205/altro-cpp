cmake_minimum_required(VERSION 3.12)
project(AltroCppCMakeExample)

find_package(AltroCpp 0.3 REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE altrocpp::altro)