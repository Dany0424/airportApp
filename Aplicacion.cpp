//Axel Daniel Godoy Barrios y Jose Nazario Mendoza Gomez
//15/11/2022.
//Descripcion de las clases Modelo, Avion, lineaAerea y Aeropuerto

#include <iostream>
#include "Modelo.h"
#include "Avion.h"
#include "lineaAerea.h"
#include "Aeropuerto.h"
#include <string>

string IdentificadorLA;
string NombreLA;
string PaisLA;
int FlotillaLA;
string MatriculaA;
string NombreA;

using namespace std;
int main(){
    const int LINAER = 3;
    for (int i = 0; i < LINAER; ++i) {
        lineaAerea l1;
        cout << "------------Linea Aerea " << i+1 << "------------" << endl;
        cout << "Ingrese el identificador de la linea aerea: " << endl;
        cin >> IdentificadorLA;
        l1.setidentificador(IdentificadorLA);
        cout << "Ingrese el nombre de la linea aerea: " << endl;
        cin >> NombreLA;
        l1.setnombre(NombreLA);
        cout << "Ingrese el pais de la linea aerea: " << endl;
        cin >> PaisLA;
        l1.setpais(PaisLA);
        cout << "Flotilla: " << FLOTILLA << endl;
        l1.printLineaAerea();
        const int FLOTILLA = 3;
        Avion aviones[FLOTILLA];
        for(int i=0; i < FLOTILLA; i++){
            cout << "------------Avion "<<i+1<<"------------"<<endl;
            cout << "Ingrese la matricula del avion: " << endl;
            cin >> MatriculaA;
            aviones[i].setmatricula(MatriculaA);
            cout << "Ingrese el nombre del avion: " << endl;
            cin >> NombreA;
            aviones[i].setnombre(NombreA);
            aviones[i].printAvion();
        }
    }
    return 0;
}
