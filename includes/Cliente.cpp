#include <iostream>
#include "cliente.h"
using namespace std;

Cliente::Cliente(string telefonoContacto, string direccionContacto, string nombre, string email) : UserDef(nombre, email, 1){
    this->telefonoContacto = telefonoContacto;
    this->direccionContacto = direccionContacto;
}

void Cliente::consultarProductos(){
    mostrarContenido();
    cout << "Estoy viendo los productos." << endl;
}

void UserDef::mostrarContenido(){
    cout << "Hola, soy " << this->nombre << ", mi email es: " << this->email << " y soy un cliente." << endl;
}