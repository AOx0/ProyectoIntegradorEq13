#include "classCarrito.h"

void Carrito::mostrarCarrito() {
    datosUsuario.mostrarDatos();
    printf("\nCarrito: \n");
    int i = 0;
    for (auto prod : aComprar) {
        prod.mostrarProducto(i);
        i++;
    }

    i != 0 ? printf("A pagar: %.2lf\n", this->getTotal()) : printf("Parece que el carrito está vacío :/\n");
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

double Carrito::getTotal() {
    double total = 0.0;
    for (auto prod : aComprar) {
        total += prod.getPrecioTotal();
    }

    return total;
}

