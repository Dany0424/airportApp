//Axel Daniel Godoy Barrios y Jose Nazario Mendoza Gomez
//25/11/2022.
//Clase Avion

#include <iostream>
#include <string>
#include "Modelo.h"
#pragma once
using namespace std;

class Avion{
    string matricula;
    string nombre;
    Modelo modelo;
public:
    Avion(string, string, Modelo);
    Avion();
    ~Avion();
    string getmatricula();
    string getnombre();
    Modelo getmodelo();
    void setmatricula(string);
    void setnombre(string);
    void setmodelo(Modelo);
    void printAvion();
};
