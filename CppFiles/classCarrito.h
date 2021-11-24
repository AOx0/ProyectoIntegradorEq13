#pragma once

#include <string>

#include "classUsuario.h"
#include "classProducto.h"

using namespace std;

class Carrito {
    private:
        Usuario datosUsuario;
        int size;
        Producto (&productos)[];
    public:
        Carrito(Producto c[], int size, Usuario datosUsuario) :
        productos(reinterpret_cast<Producto (&)[]>(*c)),
        datosUsuario(datosUsuario),
        size(size){};

        void mostrarCarrito();
        void mostrarInventario();
};
