cmake_minimum_required(VERSION 3.27)
project(AiZO1)

set(CMAKE_CXX_STANDARD 17)

add_executable(AiZO1 main.cpp
        Helpers/Checker.cpp
        Helpers/Checker.h
        Helpers/Generator.cpp
        Helpers/Generator.h
        Helpers/Counter.cpp
        Helpers/Counter.h
        Sorters/InsertSort.cpp
        Sorters/InsertSort.h
        Sorters/HeapSort.cpp
        Sorters/HeapSort.h
        Sorters/QuickSort.cpp
        Sorters/QuickSort.h)
