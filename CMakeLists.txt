cmake_minimum_required(VERSION 3.20) # Version plus standard
project(projet_parking C)

set(CMAKE_C_STANDARD 11)


add_executable(projet_parking main.c
        include/lesparkings.h
        src/affichage.c
        src/lesparkings.c)