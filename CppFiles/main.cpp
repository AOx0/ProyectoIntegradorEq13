#include <iostream>
#include <classInventario.h>
#include <classCarrito.h>

using namespace std;

int main() {
    string nombre, direccion;
    int edad, id, cantidad;

    puts("Bienvenido a SSSSSS Online!");
    Producto productos[5] = {
            Producto(33.9, "Jabón", 3),
            Producto(45.4, "Cereal", 4),
            Producto(203, "Salchichas", 2),
            Producto(150, "Queso", 3),
            Producto(25, "Sal", 2)
    };

    Inventario inv = *new Inventario(productos);




    printf("¿Cuál es tu nombre?: ");
    cin >> nombre;

    printf("¿Cuál es tu edad?: ");
    cin >> edad;

    printf("¿Cuál es tu dirección?: ");
    cin >> direccion;


    Usuario usuario = *new Usuario(nombre, direccion, edad);
    Carrito carrito = Carrito(usuario, inv);

    puts("\nContamos con los siguientes productos...");
    inv.MostrarInventario();

    while (true) {
        id = 0;

        puts("\nEscriba el ID del producto que desea agregar al carrito o");
        puts("  -1 : Mostrar el inventario resultante");
        puts("  -2 : Mostrar el carrito actual");
        puts("  -3 : Terminar de agregar productos");

        printf("Su elección: ");
        cin >> id;

        if (id == -3) break;

        if (id < -2 || id > carrito.inventario.getSize()) {puts("Ingresa un ID válido"); continue;}

        switch (id) {
            case -1: carrito.inventario.MostrarInventario(); break;
            case -2: carrito.mostrarCarrito(); break;
            default:
            {
                printf("Escriba la cantidad del producto a agregar al carrito: ");
                cin>> cantidad;

                Producto productoParaAgregar = carrito.inventario.eliminarProducto(id, cantidad);

                if (productoParaAgregar.getNombre() != "Err") {
                    carrito.agregarProducto(productoParaAgregar);
                }
            }
                break;
        }

        printf("%d", id);
    }




    return 0;
}