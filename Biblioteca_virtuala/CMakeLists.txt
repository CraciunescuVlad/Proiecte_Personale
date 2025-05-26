#cmake_minimum_required(VERSION 3.30)
#project(Biblioteca_virtuala)
#
#set(CMAKE_CXX_STANDARD 20)
#
#add_executable(Biblioteca_virtuala main.cpp
#        administrator/main_administrator.cpp
#        administrator/Carte.cpp
#        administrator/Carte.h
#        administrator/Administrator.cpp
#        administrator/Administrator.h
#        utilizator/main_utilizator.cpp
#        utilizator/Cos.cpp
#        utilizator/Cos.h
#        utilizator/Imprumut.cpp
#        utilizator/Imprumut.h
#        utilizator/Data.cpp
#        utilizator/Data.h
#        utilizator/Utilizator.cpp
#        utilizator/Utilizator.h
#        fisiere/GestionareFisiere.cpp
#        fisiere/GestionareFisiere.h)


cmake_minimum_required(VERSION 3.16)
project(Biblioteca_virtuala)

set(CMAKE_CXX_STANDARD 17)

# Executabil pentru administrator
add_executable(administrator_biblioteca
        administrator/main_administrator.cpp
        administrator/Carte.cpp
        administrator/Administrator.cpp
        fisiere/GestionareFisiere.cpp
        utilizator/Imprumut.cpp
        utilizator/Data.cpp
)

target_include_directories(administrator_biblioteca PRIVATE
        administrator
        fisiere
)

# Executabil pentru utilizator
add_executable(utilizator_biblioteca
        utilizator/main_utilizator.cpp
        utilizator/Cos.cpp
        utilizator/Imprumut.cpp
        utilizator/Data.cpp
        utilizator/Utilizator.cpp
        fisiere/GestionareFisiere.cpp
        administrator/Carte.cpp
)

target_include_directories(utilizator_biblioteca PRIVATE
        utilizator
        fisiere
)

add_executable(server
        backend/server.cpp
        administrator/Carte.cpp
        fisiere/GestionareFisiere.cpp
)

target_include_directories(server PRIVATE
        backend
        administrator
        fisiere
)