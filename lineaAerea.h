//Axel Daniel Godoy Barrios y Jose Nazario Mendoza Gomez
//25/11/2022.
//Clase Linea Aerea

#include <iostream>
#include <string>
#include "Avion.h"
#pragma once
using namespace std;
const int FLOTILLA = 3;

class lineaAerea{
    string identificador;
    string nombre;
    string pais;
    int flotilla;
    Avion aviones[FLOTILLA];
public:
    lineaAerea(string, string, string, int);
    lineaAerea();
    ~lineaAerea();
    string getidentificador();
    string getnombre();
    string getpais();
    int getflotilla();
    void setidentificador(string);
    void setnombre(string);
    void setpais(string);
    void setflotilla(int);
    void printLineaAerea();
};



