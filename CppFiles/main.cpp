#include <iostream>
#include <classInventario.h>
#include <classCarrito.h>

using namespace std;

int main() {
    puts("Bienvenido a SSSSSS Online!");
    Producto productos[5] = {
            Producto(33.9, "Jabón", 3),
            Producto(45.4, "Cereal", 4),
            Producto(203, "Salchichas", 2),
            Producto(150, "Queso", 3),
            Producto(25, "Sal", 2)
    };

    Inventario inv = *new Inventario(productos);

    string nombre, direccion;
    int edad;

    printf("¿Cuál es tu nombre?: ");
    cin >> nombre;

    printf("¿Cuál es tu edad?: ");
    cin >> edad;

    printf("¿Cuál es tu dirección?: ");
    cin >> direccion;


    Usuario usuario = *new Usuario(nombre, direccion, edad);

    puts("\nContamos con los siguientes productos...");
    inv.MostrarInventario();



    Carrito carrito = Carrito(usuario, inv);

    carrito.mostrarCarrito();


    return 0;
}