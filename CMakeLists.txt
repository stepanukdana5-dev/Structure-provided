cmake_minimum_required(VERSION 3.16)
project(BankProject LANGUAGES CXX)



add_subdirectory(lib)

add_executable(untitled13 src/main.cpp)
target_link_libraries(untitled13 PRIVATE BankLibrary)
