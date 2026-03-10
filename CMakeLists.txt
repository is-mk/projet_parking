cmake_minimum_required(VERSION 3.20) # Version plus standard
project(projet_parking C)

set(CMAKE_C_STANDARD 11)


add_executable(projet_parking main.c
        include/fichiercsv.h
        src/affichage.c
        src/fichiercsv.c
        include/affichage.h
        src/gestionparking.c
        include/gestionparking.h)