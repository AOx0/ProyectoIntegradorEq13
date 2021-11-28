#include "classInventario.h"

void Inventario::MostrarInventario() {
    printf("\nInventario: \n");

    for (int i=0; i<size; i++) producto[i].mostrarProducto(i);
}

int Inventario::getSize() {
    return size;
}

Producto Inventario::eliminarProducto(int i, int cantidad) {
    if (producto[i].getCantidad()-cantidad >= 0) {
        producto[i].lessCantidad(cantidad);

        Producto prod  = this->getProductoAtIndex(i);
        return *new Producto(prod.getPrecio(), prod.getNombre(), cantidad);
    } else {
        printf("Lo siento, no hay suficientes ejemplares del producto en existencia");
        return *new Producto(0, "Err", 0);
    }

}

Producto Inventario::getProductoAtIndex(int i) {
    return producto[i];
}