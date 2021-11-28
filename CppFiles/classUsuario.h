#pragma once

#include <string>

using namespace std;

class Usuario {
private:
    string nombre, direccion;
    int edad;

public:
    Usuario():  nombre(""), direccion(""), edad(0) {};
    Usuario(string nombre, string direccion, int edad): nombre(nombre), direccion(direccion), edad(edad){};

    void mostrarDatos();
};





