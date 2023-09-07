#ifndef ADMIN_H
#define ADMIN_H
#include "UserDef.h"
#include "Cajero.h"
#include "Cliente.h"
#include <string>

class Admin : public UserDef {
private:
    std::string claveAdmin;
public:
    Admin(std::string claveAdmin);
    Admin(std::string claveAdmin, std::string nombre, std::string email);

    Cliente crearNuevoCliente();
    Cajero crearNuevoCajero();
};

#endif