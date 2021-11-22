#include <iostream>
#include "classShopRequirements.h"

int main() {
    Producto productos[5] = {
            Producto(23.9, "Jabon", 3),
            Producto(23.9, "Jabon", 3),
            Producto(23.9, "Jabon", 3),
            Producto(23.9, "Jabon", 3),
            Producto(23.9, "Jabon", 3)
    };
    Inventario inv = Inventario(productos, 5);

    inv.MostrarInventario();

    printf("Lol");
    return 0;
}