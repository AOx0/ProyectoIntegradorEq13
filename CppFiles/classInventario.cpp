#include "classInventario.h"

void Inventario::MostrarInventario() {
    printf("\nInventario: \n");

    // Show inventory
    for(int i = 0; i < size; i++) producto[i].mostrarProducto(i);
}

// Return inventory, which is an instance of an array
int Inventario::getSize() {return size;};

// Delete product
Producto Inventario::eliminarProducto(int i, int cantidad) {
    if(producto[i].getCantidad()-cantidad >= 0) {
        // Delete product if the quantity of the products, by substracting products of the array
        producto[i].lessCantidad(cantidad);
        Producto prod  = this->getProductoAtIndex(i);
        return *new Producto(prod.getPrecio(), prod.getNombre(), cantidad);

    } else {
        printf("Lo siento, no hay suficientes ejemplares del producto en existencia");
        return *new Producto(0, "Error", 0);
    }

}

// Return a pointer at i of the product array in the inventory
Producto Inventario::getProductoAtIndex(int i) {return producto[i];};