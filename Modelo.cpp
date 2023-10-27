//Axel Daniel Godoy Barrios y Jose Nazario Mendoza Gomez
//25/11/2022.
//Descripcion de la clase Modelo

#include <iostream>
#include <string>
#include "Modelo.h"
#pragma once
using namespace std;
//constructor
Modelo::Modelo(string identificador, int numPasajeros, float velMax, int numTrip, float horaVuelo, char categoriaDestino) {
    this-> identificador = identificador;
    this-> numPasajeros = numPasajeros;
    this-> velMax = velMax;
    this-> numTrip = numTrip;
    this-> horaVuelo = horaVuelo;
    this-> categoriaDestino = categoriaDestino;
}
Modelo::Modelo() {
    this-> identificador = "Boeing737";
    this-> numPasajeros = 132;
    this-> velMax = 946;
    this-> numTrip = 5;
    this-> horaVuelo = 4;
    this-> categoriaDestino = 'C/D';
}
//destructor
Modelo::~Modelo() {}
//setters
void Modelo::setidentificador(string identificador) {
    this->identificador = identificador;
}
void Modelo::setnumPasajeros(int numPasajeros) {
    this->numPasajeros = numPasajeros;
}
void Modelo::setvelMax(float velMax) {
    this->velMax = velMax;
}
void Modelo::setnumTrip(int numTrip) {
    this->numTrip = numTrip;
}
void Modelo::sethoraVuelo(float horaVuelo) {
    this->horaVuelo = horaVuelo;
}
void Modelo::setcategoriaDestino(char categoriaDestino) {
    this->categoriaDestino = categoriaDestino;
}
//getters
string Modelo::getidentificador() {
    return identificador;
}
int Modelo::getnumPasajeros() {
    return numPasajeros;
}
float Modelo::getvelMax() {
    return velMax;
}
int Modelo::getnumTrip() {
    return numTrip;
}
float Modelo::gethoraVuelo() {
    return horaVuelo;
}
char Modelo::getcategoriaDestino() {
    return categoriaDestino;
}
//Impresion
void Modelo::printModelo() {
    cout<<"Identificador del Modelo: "<<identificador<<endl;
    cout<<"Capacidad de Pasajeros: "<<numPasajeros<<endl;
    cout<<"Velocidad Maxima(Km/h): "<<velMax<<endl;
    cout<<"Capacidad de Tripulantes: "<<numTrip<<endl;
    cout<<"Horas de vuelo: "<<horaVuelo<<endl;
    cout<<"Categoria de destinos: "<<categoriaDestino<<endl;
}
