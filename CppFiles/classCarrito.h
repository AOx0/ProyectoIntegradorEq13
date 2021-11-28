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

        // Vectore used to store data
        vector<Producto> aComprar;

    public:
        Inventario inventario;

        // Constructor declared 
        Carrito(Usuario datosUsuario, Inventario inventario) : 
            aComprar(vector<Producto>()), datosUsuario(std::move(datosUsuario)), inventario(inventario) 
        {};

        // Getter and setter to show and change data
        void mostrarCarrito();
        void agregarProducto(Producto);
        
        double getTotal();
};
