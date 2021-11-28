#pragma once

#include <string>
#include <utility>

#include "classUsuario.h"
#include "classProducto.h"
#include "classInventario.h"
#include <vector>

using namespace std;


class Carrito {
private:
    Usuario datosUsuario;

    vector<Producto> aComprar;
public:
    Inventario inventario;

    Carrito(Usuario datosUsuario, Inventario inventario)
    : aComprar(vector<Producto>())
    , datosUsuario(std::move(datosUsuario))
    , inventario(inventario) {};

    void mostrarCarrito();
    void mostrarInventario();
    void agregarProducto(Producto);
};
