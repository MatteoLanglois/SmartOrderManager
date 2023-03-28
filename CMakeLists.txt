cmake_minimum_required(VERSION 3.24)
project(LangloisMatteoDevObjet_ProjetSmartOrderManager)

set(CMAKE_CXX_STANDARD 17)

add_executable(LangloisMatteoDevObjet_ProjetSmartOrderManager main.cpp src/Model/Autre/Colis.h src/Model/Autre/Colis.cpp src/Model/Autre/Trajet.h src/Model/Autre/Trajet.cpp src/Model/Personne/Admin.h src/Model/Personne/Admin.cpp src/Model/Personne/Dispatcher.h src/Model/Personne/Dispatcher.cpp src/Model/Personne/Chauffeur.cpp)
