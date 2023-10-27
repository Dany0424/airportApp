//Axel Daniel Godoy Barrios y Jose Nazario Mendoza Gomez
//25/11/2022.
//Descripcion de la Avion

#include <iostream>
#include <string>
#include "Avion.h"
#pragma once
using namespace std;
//constructor
Avion::Avion(string matricula, string nombre, Modelo modelo){
    this->matricula = matricula;
    this->nombre = nombre;
    this->modelo = modelo;
}
Avion::Avion(){
    this->matricula = "A01425316";
    this->nombre = "Tinmouse";
    this->modelo = modelo;
}
//destructor
Avion::~Avion() {}
//setters
void Avion::setmatricula(string matricula) {
    this-> matricula = matricula;
}
void Avion::setnombre(string nombre) {
    this-> nombre = nombre;
}
void Avion::setmodelo(Modelo) {
    this-> modelo = modelo;
}
//getters
string Avion::getmatricula() {
    return matricula;
}
string Avion::getnombre() {
    return nombre;
}
Modelo Avion::getmodelo() {
    return modelo;
}
//Impresion
void Avion::printAvion() {
    cout<<"Matricula del avion: "<<matricula<<endl;
    cout<<"Nombre del Avion: "<<nombre<<endl;
    modelo.printModelo();
}

//void Avion::setCambiaHoras(float H){
//modelo.sethoraVuelo(H);
//vgg}
