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

void Carrito::agregarProducto(Producto prod) {
    bool alreadyExists = false;
    int i=0;
    for (; i<aComprar.size(); i++) {
        if (prod.getNombre() == aComprar[i].getNombre()) {alreadyExists = true; break;}
    }

    if (alreadyExists) {
        aComprar[i].lessCantidad(-prod.getCantidad());
    } else {
        aComprar.push_back(prod);
    }

    puts("El producto fue agregado al carrito correctamente");
    prod.mostrarProducto(-1);

}
