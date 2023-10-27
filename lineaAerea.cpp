//Axel Daniel Godoy Barrios y Jose Nazario Mendoza Gomez
//25/11/2022.
//Descripcion de la clase lineaAerea

#include <iostream>
#include <string>
#include "lineaAerea.h"
//#pragma once
using namespace std;
//constructor
lineaAerea::lineaAerea(string identificador, string nombre, string pais, int flotilla) {
    this->identificador = identificador;
    this->nombre = nombre;
    this->pais = pais;
    this->flotilla = flotilla;
}
lineaAerea::lineaAerea() {
    this->identificador = "TC1033";
    this->nombre = "AeroMexico";
    this->pais = "Mexico";
    this->flotilla = 3;
    this->aviones[FLOTILLA] = aviones[FLOTILLA];
    for (int i = 0; i < FLOTILLA; ++i) {
        aviones[i].setnombre(" ");
        aviones[i].setmatricula(" ");
    }
}
//destructor
lineaAerea::~lineaAerea() {}
//setters
void lineaAerea::setidentificador(string identificador) {
    this->identificador = identificador;
}
void lineaAerea::setnombre(string nombre) {
    this->nombre = nombre;
}
void lineaAerea::setpais(string pais) {
    this->pais = pais;
}
void lineaAerea::setflotilla(int flotilla) {
    this->flotilla = flotilla;
}
//getters
string lineaAerea::getidentificador() {
    return identificador;
}
string lineaAerea::getnombre() {
    return nombre;
}
string lineaAerea::getpais() {
    return pais;
}
int lineaAerea::getflotilla() {
    return flotilla;
}
//Impresion
void lineaAerea::printLineaAerea() {
    cout<<"Identificador de la linea aerea: "<<identificador<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Pais: "<<pais<<endl;
    cout<<"Flotilla: "<<flotilla<<endl;
}
