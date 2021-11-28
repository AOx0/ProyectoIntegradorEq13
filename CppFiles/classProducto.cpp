#include "classProducto.h"

void Producto::mostrarProducto(int num= -1) {
    printf(
            "%sNombre: %-10s Precio: %-9.2f Cantidad: %-9d\n",
            num == -1 ? "" : (string("    ") + std::to_string(num) + ". ").c_str() ,
            nombre.c_str(), precio, cantidad
    );
}

double Producto::getPrecioTotal() {
    return precio * cantidad;
}

int Producto::getSize(Producto * array) {
    int size = 0;
    while (true) {
        if (array[size]._flag == 874834909249234.28347242384 ) size ++;
        else break;
    }
    return size;
}

void Producto::lessCantidad(int c = 1) {
    cantidad -= c;
}

int Producto::getCantidad() {
    return cantidad;
}

string Producto::getNombre() {
    return nombre;
}

double Producto::getPrecio() {
    return precio;
}
