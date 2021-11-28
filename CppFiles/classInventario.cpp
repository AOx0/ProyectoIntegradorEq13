#include "classInventario.h"

void Inventario::MostrarInventario() {
    printf("\nInventario: \n");
    for (int i=0; i<size; i++) producto[i].mostrarProducto(i);
}

int Inventario::getSize() {
    return size;
}

bool Inventario::eliminarProducto(int i, int cantidad) {
    if (producto[i].getCantidad()-cantidad > 0) {
        producto[i].lessCantidad(cantidad);
        return true;
    } else {
        printf("Lo siento, no hay suficientes ejemplares del producto en existencia");
        return false;
    }

}
