#include "Admin.h"
#include <iostream>

using namespace std;

Admin::Admin(string claveAdmin){
    this->claveAdmin = claveAdmin;
}
Admin::Admin(string claveAdmin, string nombre, string email) : UserDef(nombre, email, 3){
    this->claveAdmin = claveAdmin;
}

Cajero Admin::crearNuevoCajero(){
    mostrarContenido();
    string nombre, email, claveCajero;
    cin >> nombre >> email >> claveCajero;
    Cajero newCajero(claveCajero, nombre, email);
    cout << "Acabo de crear un nuevo cajero con nombre " << nombre << " y email " << email << "." << endl;
    return newCajero;
}
Cliente Admin::crearNuevoCliente(){
    mostrarContenido();
    string nombre, email, telefonoContacto, direccionContacto;
    cin >> nombre >> email >> telefonoContacto >> direccionContacto;
    Cliente newCliente(telefonoContacto, direccionContacto, nombre, email);
    cout << "Acabo de crear un nuevo cliente con nombre " << nombre << " y email " << email << "." << endl;
    return newCliente;
}

void UserDef::mostrarContenido(){
    cout << "Hola, soy " << this->nombre << ", mi email es: " << this->email << " y soy un administrador." << endl;
}