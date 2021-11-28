#pragma once

#include <iostream>
#include <string>
#include "classProducto.h"


using namespace std;


class Inventario {
private:
    int size;
    Producto * cantidad ;
public:

    Inventario(Producto c[]): cantidad(c), size(Producto::getSize(c)) {};

    void MostrarInventario();
};