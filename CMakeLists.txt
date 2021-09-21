cmake_minimum_required(VERSION 3.17)
project(ADT_SortedIteratedList___dlla)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ADT_SortedIteratedList___dlla
        App.cpp
        ExtendedTest.cpp
        ExtendedTest.h
        ListIterator.cpp
        ListIterator.h
        ShortTest.cpp
        ShortTest.h
        SortedIteratedList.cpp
        SortedIteratedList.h)
