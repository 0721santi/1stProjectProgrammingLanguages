#include <iostream>
#include "./includes/Admin.h"
using namespace std;

int main(){
    string clave, nombre, email;
    cout << "Ingrese nombre: "; cin >> nombre;
    cout << "Ingrese email: "; cin >> email;
    cout << "Ingrese clave: "; cin >> clave;
    Admin jefe("abc", "cde", "fgh");
    while(true){
        cout << "MENU" << endl;
        cout << "1. Crear un cajero manualmente." << endl;
        cout << "2. Crear un cajero automaticamente." << endl;
        cout << "3. Crear un cliente manualmente." << endl;
        cout << "4. Crear un cliente automaticamente." << endl;
        cout << "5. Mostrar info del administrador. " << endl;
        cout << "6. Mostrar clientes." << endl;
        cout << "7. Mostrar cajeros." << endl;
        cout << "8. Salir." << endl;
        int opc; 
        cout << "Selecciones una opción: "; cin >> opc;
        switch (opc){
        case 1:
            jefe.crearNuevoCajeroMan();
            break;
        case 2:
            jefe.crearNuevoCajeroAuto();
            break;
        case 3:
            jefe.crearNuevoClienteMan();
            break;
        case 4:
            jefe.crearNuevoClienteAuto();
            break;
        case 5:
            jefe.mostrarContenido();
            break;
        case 6:
            jefe.mostrarClientes();
            break;
        case 7:
            jefe.mostrarPersonal();
            break;
        default:
            cout << "Gracias por usar el programa." << endl;
            return 0;
        }
    }
    return 0;
};