//Axel Daniel Godoy Barrios y Jose Nazario Mendoza Gomez
//25/11/2022.
//Clase Modelo

#include <iostream>
#include <string>
#pragma once //Sirve para compilar una vez, si es que la clase ya esta mencionada en otra  clase y en el cpp
using namespace std;

class Modelo {
    string identificador;
    int numPasajeros;
    float velMax;
    int numTrip;
    float horaVuelo;
    char categoriaDestino;
public:
    Modelo(string, int, float, int, float, char);
    Modelo();
    ~Modelo();
    string getidentificador();
    int getnumPasajeros();
    float getvelMax();
    int getnumTrip();
    float gethoraVuelo();
    char getcategoriaDestino();
    void setidentificador(string);
    void setnumPasajeros(int);
    void setvelMax(float);
    void setnumTrip(int);
    void sethoraVuelo(float);
    void setcategoriaDestino(char);
    void printModelo();

};


