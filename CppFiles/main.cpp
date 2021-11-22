#include <iostream>
#include <classInventario.h>
#include <classCarrito.h>

int main() {
    Producto productos[5] = {
            Producto(23.9, "Jabon", 3),
            Producto(23.9, "Jabon", 3),
            Producto(23.9, "Jabon", 3),
            Producto(23.9, "Jabon", 3),
            Producto(23.9, "Jabon", 3)
    };
    Inventario inv = Inventario(productos, 5);

    Usuario usuario = Usuario("Pepe", "Maple 54 54414", 18);

    Carrito carrito = Carrito(productos, 5, usuario);

    carrito.mostrarCarrito();

    inv.MostrarInventario();

    printf("Lol");
    return 0;
}