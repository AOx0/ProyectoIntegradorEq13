#pragma once

#include <string>
#include <utility>

#include "classUsuario.h"
#include "classProducto.h"


using namespace std;


class Carrito {
private:
    Usuario datosUsuario;
    int size;
    Producto * productos;
public:
    Carrito(Producto c[], Usuario datosUsuario) : productos(c), datosUsuario(std::move(datosUsuario)), size(Producto::getSize(c)){};

    void mostrarCarrito();
    void mostrarInventario();
};
