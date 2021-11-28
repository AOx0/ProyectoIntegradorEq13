#include "classCarrito.h"

void Carrito::mostrarCarrito() {
    datosUsuario.mostrarDatos();
    double total = 0;
    printf("\nCarrito: \n");
    int i = 0;
    for (auto prod : aComprar) {
        prod.mostrarProducto(i);
        total += prod.getPrecioTotal();
        i++;
    }

    i != 0 ? printf("A pagar: %lf\n", total) : printf("Parece que el carrito está vacío :/\n");
}