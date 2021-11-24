#include "classCarrito.h"

void Carrito::mostrarCarrito() {
    datosUsuario.mostrarDatos();
    mostrarInventario();
}

void Carrito::mostrarInventario() {
    double total;
    printf("\nCarrito: \n");

    for(int i = 0; i < size; i++) {
        productos[i].mostrarProducto(i);
        total += productos[i].obtenerPrecioTotal();
    }
    
    printf("A pagar: %lf\n", total);
}