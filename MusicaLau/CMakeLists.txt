cmake_minimum_required(VERSION 3.30)
project(MusicaLau)

set(CMAKE_CXX_STANDARD 20)

add_executable(MusicaLau
        ShopMusical.cpp
        ShopMusical.h
        Piano.cpp
        Piano.h
        Xylophone.cpp
        Xylophone.h
        Guitare.cpp
        Guitare.h
        Instrument.cpp
        Instrument.h
        Flute.cpp
        Flute.h
        Triangle.cpp
        Triangle.h
        main.cpp)
