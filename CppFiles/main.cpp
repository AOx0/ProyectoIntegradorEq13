#include <iostream>
#include <classInventario.h>
#include <classCarrito.h>

int main() {
    puts("Yayaya");
    Producto productos[5] = {
            Producto(23.9, "Jabon", 3),
            Producto(23.9, "Jabon", 3),
            Producto(23.9, "Jabon", 3),
            Producto(23.9, "Jabon", 3),
            Producto(23.9, "Jabon", 3)
    };

    Inventario inv = *new Inventario(productos);
    Usuario usuario = Usuario("Pepe", "Maple 54 54414", 18);

    Carrito carrito = Carrito(productos, usuario);

    carrito.mostrarCarrito();

    inv.MostrarInventario();

    printf("Lol");
    return 0;
}