#pragma once
#include <iostream>
#include <string>
#include "classProducto.h"

using namespace std;

class Inventario {

    private:
        int size;
        Producto * producto; // Pointer of "producto", which is in the beginning of the array

    public:
        // Constructor that access to a static method declared in classProducto.h, as a constant pointer array
        Inventario(Producto c[]): producto(c), size(Producto::getSize(c)) {};

        // Getters to show data
        void MostrarInventario();
        int getSize();
        Producto getProductoAtIndex(int i); // -> return pointer of element i of an array products

        // Setter to change data
        Producto eliminarProducto(int id, int cantidad);
        
};