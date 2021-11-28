#include "classCarrito.h"

void Carrito::mostrarCarrito() {
    datosUsuario.mostrarDatos();
    printf("\nCarrito: \n");
    
    int i = 0;

    // Loop to show products
    for(Producto prod : aComprar) {
        prod.mostrarProducto(i);
        i++;
    }

    // If in getTotal doesn`t have data, shows that there`s no data to show
    i != 0 ? printf("A pagar: %.2lf\n", this->getTotal()) : printf("Parece que el carrito está vacío :/\n");
}

void Carrito::agregarProducto(Producto prod) {
    // Variable to show if the product already exists in the array
    bool alreadyExists = false;
    int i;

    for(i = 0; i < aComprar.size(); i++) {
        if(prod.getNombre() == aComprar[i].getNombre()) {alreadyExists = true; break;}
    }

    if(alreadyExists) {
        // Add only quantity
        aComprar[i].lessCantidad(-prod.getCantidad());
    } else {
        // Add all data
        aComprar.push_back(prod);
    }

    puts("El producto fue agregado al carrito correctamente");
    prod.mostrarProducto(-1);

}

double Carrito::getTotal() {
    double total = 0.0;
    
    for(auto prod : aComprar) {
        total += prod.getPrecioTotal();
    }

    return total;
}

