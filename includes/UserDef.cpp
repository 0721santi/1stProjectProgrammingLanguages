#include "UserDef.h"
#include <iostream>
using namespace std;
UserDef::UserDef(string nombre, string email){
    this->nombre = nombre;
    this->email = email;
    this->perfil = 0;
}
UserDef::UserDef(string nombre, string email, int perfil){
    this->nombre = nombre;
    this->email = email;
    this->perfil = perfil;
}

UserDef::mostrarContenido(){
    switch (this->perfil)
    {
    case 2:
        cout << "Hola, soy " << this->nombre << ", mi email es: " << this->email << " y soy un cajero." << endl;
        break;
    case 3:
        cout << "Hola, soy " << this->nombre << ", mi email es: " << this->email << " y soy un cliente." << endl;
        break;
    default:
        cout << "Hola, soy " << this->nombre << " y mi email es: " << this->email << "." << endl;
        break;
    }
    
}