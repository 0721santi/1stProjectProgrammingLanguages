#include "Cajero.h"
#include <iostream>

using namespace std;

Cajero::Cajero(string claveCajero){
    this->claveCajero = claveCajero;
}
Cajero::Cajero(string claveCajero, string nombre, string email) : UserDef(nombre, email, 2){
    this->claveCajero = claveCajero;
}

void Cajero::registrarVenta(){
    mostrarContenido();
    cout << "Estoy registrando una venta." << endl;
}

void UserDef::mostrarContenido(){
    cout << "Hola, soy " << this->nombre << ", mi email es: " << this->email << " y soy un cliente." << endl;
}