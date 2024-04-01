cmake_minimum_required(VERSION 3.27)
project(AiZO1)

MATH(EXPR stack_size "16 * 1024 * 1024") # 16 Mb
set(CMAKE_EXE_LINKER_FLAGS "-Wl,--stack,${stack_size}")
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
        Sorters/QuickSort.h
        Sorters/ShellSort.cpp
        Sorters/ShellSort.h
        Simulator/Simulator.cpp
        Simulator/Simulator.h
        Test/Test.cpp
        Test/Test.h)
