#pragma once

#include <string>
#include "classProducto.h"


using namespace std;


class Inventario {
private:
    int size;
    Producto (&cantidad)[] ;
public:
    Inventario(Producto c[], int size): size(size), cantidad(reinterpret_cast<Producto (&)[]>(*c)) {};

    void MostrarInventario();
};