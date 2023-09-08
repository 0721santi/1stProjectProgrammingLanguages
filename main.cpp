#include <iostream>
#include "./includes/Admin.h"
using namespace std;

int main(){
    Admin jefe("miClave123", "Santiago Idarraga", "mail@edi.com");
    jefe.crearNuevoCajero();
    jefe.crearNuevoCajero();
    jefe.crearNuevoCliente();
    jefe.crearNuevoCliente();

    jefe.mostrarClientes();
    jefe.mostrarPersonal();
    return 0;
};