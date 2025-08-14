cmake_minimum_required(VERSION 3.5)

project(MyApp
        VERSION 0.0.1
        DESCRIPTION "This is a project to learning CMake"
        LANGUAGES CXX)

        
add_executable(MyAppBinary main.cpp)

target_compile_features(MyAppBinary PRIVATE cxx_std_20)