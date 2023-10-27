//Axel Daniel Godoy Barrios y Jose Nazario Mendoza Gomez
//25/11/2022.
//Clase Aeropuerto

#include <iostream>
#include <string>
#include "lineaAerea.h"
#pragma once
using namespace std;
const int LINAER = 3;

class Aeropuerto{
    string nombre;
    string ciudad;
    int capacidad;
    int slots;
    int cantidadLineasA;
    lineaAerea lineasAereas[LINAER];
public:
    Aeropuerto(string, string, int, int, int);
    Aeropuerto();
    ~Aeropuerto();
    string getnombre();
    string getciudad();
    int getcapacidad();
    int getslots();
    int getcantidadLineasA();
    void setnombre(string);
    void setciudad(string);
    void setcapacidad(int);
    void setslots(int);
    void setcantidadLineasA(int);
    void printAeropuerto();
};
