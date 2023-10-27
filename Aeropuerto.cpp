//Axel Daniel Godoy Barrios y Jose Nazario Mendoza Gomez
//25/11/2022.
//Descripcion de la clase Aeropuerto

#include <iostream>
#include <string>
#include "Aeropuerto.h"
#pragma once
using namespace std;
//constructor
Aeropuerto::Aeropuerto(string nombre, string ciudad, int capacidad, int slots, int cantidadLienasA) {
    this->nombre = nombre;
    this->ciudad = ciudad;
    this->capacidad = capacidad;
    this->slots = slots;
    this->cantidadLineasA = cantidadLienasA;
}
Aeropuerto::Aeropuerto() {
    this->nombre = "Aeropuerto Internacional de la Ciudad de Mexico";
    this->ciudad = "CDMX";
    this->capacidad = 32000000;
    this->slots = 20;
    this->cantidadLineasA = 3;
    this->lineasAereas[LINAER] = lineasAereas[LINAER];
    for (int i = 0; i < LINAER; ++i) {
        lineasAereas[i].setidentificador(" ");
        lineasAereas[i].setnombre(" ");
        lineasAereas[i].setpais(" ");
        lineasAereas[i].setflotilla(FLOTILLA);
    }
}
//destructor
Aeropuerto::~Aeropuerto() {}
//setters
void Aeropuerto::setnombre(string nombre) {
    this->nombre = nombre;
}
void Aeropuerto::setciudad(string ciudad) {
    this->ciudad = ciudad;
}
void Aeropuerto::setcapacidad(int capacidad) {
    this->capacidad = capacidad;
}
void Aeropuerto::setslots(int slots) {
    this->slots = slots;
}
void Aeropuerto::setcantidadLineasA(int cantidadLineasA) {
    this->cantidadLineasA = cantidadLineasA;
}
//getters
string Aeropuerto::getnombre() {
    return nombre;
}
string Aeropuerto::getciudad() {
    return ciudad;
}
int Aeropuerto::getcapacidad() {
    return capacidad;
}
int Aeropuerto::getslots() {
    return slots;
}
int Aeropuerto::getcantidadLineasA() {
    return cantidadLineasA;
}
//impresion
void Aeropuerto::printAeropuerto() {
    cout<<"Nombre del Aeropuerto: "<<nombre<<endl;
    cout<<"Ciudad donde se encuentra el aeropuerto: "<<ciudad<<endl;
    cout<<"Capacidad del aeropuerto: "<<capacidad<<endl;
    cout<<"Slots del aeropuerto: "<<slots<<endl;
    cout<<"Cantidad de lineas aereas del aeropuerto: "<<cantidadLineasA<<endl;
    //lineasAereas.printLineaAerea();
}
