#ifndef USERDEF_H
#define USERDEF_H
#include <string>

class UserDef {
private:
    std::string nombre;
    std::string email;
    int perfil;

public:
    UserDef(std::string nombre, std::string email);
    UserDef(std::string nombre, std::string email, int perfil);
    void mostrarContenido();
};

#endif