#include "Admin.h"
#include <iostream>
#include <time.h>
#include <vector>
#include <random>

using namespace std;

//Se crean funciones propias del archivo cpp para creación automática de datos:
string creaNombre(){
    vector<string> nombres = {"Santiago", "Juan", "Andres", "Edison", "Oscar", "Eduardo", "Felipe", "Samuel", "Mateo", "Sofia","Salome","Andrea","Susana","Juliana","Maria","Nelly","Anderson","Jesus", "Jose", "Bernardo","Daniel", "Miguel", "Edwin", "Diego", "Cecilia", "Roberto", "Carolina", "Franciso", "Leidy", "Mauicio", "Jacobo", "Leon", "Alejandra", "Catalina", "Nidia", "Cristiano"};
    vector<string> apellidos = {"Idarraga", "Cardona", "Escobar", "Valencia", "Garcia", "Solis", "Usma", "Villa", "Garcia", "Ceballos", "Duarte", "Rojas", "Arcila", "Alzate", "Lopez", "Carrero", "Duque", "Mier", "Castillo", "Aguirre", "Zapata", "Ocampo", "Salazar", "Mosquera", "Candelo", "Andrade", "Alvez", "Angel", "Mejia", "Ronaldo", "Barrera", "Burgos", "Hincapie", "Sepulveda", "Padilla", "Uribe"};
    return nombres[rand()%nombres.size()] + "_" + apellidos[rand()%apellidos.size()];
}
string creaMail(string nombre){
    vector<string> mail = {"@gmail.com", "@hotmail.com", "@eafit.edu.co", "@yahoo.com"};
    return nombre + mail[rand()%mail.size()];
}
string creaClave(){
    vector<string> numchar = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};
    string claveCajero = "";
    for(int i=0;i<8;i++){
        claveCajero = claveCajero + numchar[rand()%numchar.size()];
    }
    return claveCajero;
}
string creaTelefono(){
    string telefonoContacto = "";
    for(int i=0; i<=10; i++){
        telefonoContacto = telefonoContacto + to_string(rand()%10);
    }
    return telefonoContacto;
}
string creaDireccion(){
    string direccionContacto = "";
    int a = rand()%2;
    if(a==0){
        direccionContacto = "Calle " + to_string(rand()%120) + "#" + to_string(rand()%120) + "-" + to_string(rand()%120);
    }else{
        direccionContacto = "Carrera " + to_string(rand()%120) + "#" + to_string(rand()%120) + "-" + to_string(rand()%120);
    }
    return direccionContacto;
}

Admin::Admin(string claveAdmin, string nombre, string email) : UserDef(nombre, email, 3){
    this->claveAdmin = claveAdmin;
}

Cajero Admin::crearNuevoCajeroMan(){
    cout << "Se esta creando un nuevo cajero." << endl;
    string nombre, email, claveCajero;
    cout << "Ingrese nombre: "; cin >> nombre;
    cout << "Ingrese email: "; cin >> nombre;
    cout << "Ingrese clave cajero: "; cin >> nombre;
    cin >> nombre >> email >> claveCajero;
    Cajero newCajero(claveCajero, nombre, email);
    this->cajeros.push_back(newCajero);
    cout << "Acabo de crear un nuevo cajero con nombre " << nombre << " y email " << email << "." << endl;
    return newCajero;
}
Cajero Admin::crearNuevoCajeroAuto(){
    cout << "Se esta creando un nuevo cajero." << endl;
    string nombre = creaNombre();
    string email = creaMail(nombre);
    string claveCajero = creaClave();
    Cajero newCajero(claveCajero, nombre, email);
    this->cajeros.push_back(newCajero);
    cout << "Acabo de crear un nuevo cajero con nombre " << nombre << " y email " << email << "." << endl;
    return newCajero;
}
Cliente Admin::crearNuevoClienteMan(){
    cout << "Se esta creando un nuevo cliente." << endl;
    string nombre, email, telefonoContacto, direccionContacto;
    cout << "Ingrese los siguientes datos en este orden: 1. Nombre, 2. Email, 3. Telefono Contacto, 4. Direccion contacto." << endl;
    cin >> nombre >> email >> telefonoContacto >> direccionContacto;
    Cliente newCliente(telefonoContacto, direccionContacto, nombre, email);
    this->clientes.push_back(newCliente);
    cout << "Acabo de crear un nuevo cliente con nombre " << nombre << " y email " << email << "." << endl;
    return newCliente;
}
Cliente Admin::crearNuevoClienteAuto(){
    cout << "Se esta creando un nuevo cliente." << endl;
    string nombre =  creaNombre();
    string email = creaMail(nombre);
    string telefonoContacto = creaTelefono();
    string direccionContacto = creaDireccion();
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