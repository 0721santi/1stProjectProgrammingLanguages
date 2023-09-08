#include "Admin.h"
#include <iostream>

using namespace std;

Admin::Admin(string claveAdmin, string nombre, string email) : UserDef(nombre, email, 3){
    this->claveAdmin = claveAdmin;
}

Cajero Admin::crearNuevoCajero(){
    cout << "Se esta creando un nuevo cajero." << endl;
    string nombre, email, claveCajero;
    cout << "Ingrese los siguientes datos en este orden: 1. Nombre, 2. Email, 3. Clave cajero." << endl;
    cin >> nombre >> email >> claveCajero;
    Cajero newCajero(claveCajero, nombre, email);
    this->cajeros.push_back(newCajero);
    cout << "Acabo de crear un nuevo cajero con nombre " << nombre << " y email " << email << "." << endl;
    return newCajero;
}
Cliente Admin::crearNuevoCliente(){
    cout << "Se esta creando un nuevo cliente." << endl;
    string nombre, email, telefonoContacto, direccionContacto;
    cout << "Ingrese los siguientes datos en este orden: 1. Nombre, 2. Email, 3. Telefono Contacto, 4. Direccion contacto." << endl;
    cin >> nombre >> email >> telefonoContacto >> direccionContacto;
    Cliente newCliente(telefonoContacto, direccionContacto, nombre, email);
    this->clientes.push_back(newCliente);
    cout << "Acabo de crear un nuevo cliente con nombre " << nombre << " y email " << email << "." << endl;
    return newCliente;
}

void Admin::mostrarPersonal(){
    cout << "Este es el personal activo actualmente:" << endl;
    for(Cajero cajero : this->cajeros){
        cajero.mostrarContenido();
    }
}
void Admin::mostrarClientes(){
    cout << "Estas son las personas registradas:" << endl;
    for(Cliente cliente : this->clientes){
        cliente.mostrarContenido();
    }
}

void Admin::mostrarContenido(){
    cout << "Hola, soy " << this->getNombre() << ", mi email es: " << this->getMail() << " y soy un administrador." << endl;
    cout << "Mi clave personal es: " << this->claveAdmin << "." << endl;
}