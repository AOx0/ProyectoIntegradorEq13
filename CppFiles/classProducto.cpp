#include "classProducto.h"


// Show product
void Producto::mostrarProducto(int num= -1) {
    printf(
            "%sNombre: %-10s Precio: %-9.2f Cantidad: %-9d\n",
            num == -1 ? "" : (string("    ") + to_string(num) + ". ").c_str() ,
            nombre.c_str(), precio, cantidad
    );
}

double Producto::getPrecioTotal() {return precio * cantidad;};

int Producto::getSize(Producto * array) {
    int size = 0;

    while(true) {
        // Condition declared in classProducto.h
        if(array[size]._flag == 874834909249234.28347242384) size ++;
        else break;
    }
    return size;
}

void Producto::lessCantidad(int c = 1) {
    // Define the index of the quantity of the product
    cantidad -= c;
}

// Constructors referenced as getters
int Producto::getCantidad() {return cantidad;};
string Producto::getNombre() {return nombre;};
double Producto::getPrecio() {return precio;};
