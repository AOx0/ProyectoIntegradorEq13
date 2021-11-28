#include <iostream>
#include "classInventario.h"
#include "classCarrito.h"

using namespace std;

int main() {
    string nombre, direccion;
    int edad, id, cantidad;

    puts("Bienvenido a Tiendas Online!");

    // Array of products
    Producto productos[5] = {

            Producto(33.9, "Jabón", 3),
            Producto(45.4, "Cereal", 4),
            Producto(203, "Salchichas", 2),
            Producto(150, "Queso", 3),
            Producto(25, "Sal", 2)
    };

    Inventario inv = Inventario(productos);

    printf("¿Cuál es tu nombre?: "); cin >> nombre;
    printf("¿Cuál es tu edad?: "); cin >> edad;
    printf("¿Cuál es tu dirección?: "); cin >> direccion;

    // Returns a new user 
    Usuario usuario = Usuario(nombre, direccion, edad);
    Carrito carrito = Carrito(usuario, inv);

    puts("\nContamos con los siguientes productos...");
    inv.MostrarInventario();

    while(true) {
        // Int to choose options
        id = 0;

        puts("\nEscriba el ID del producto que desea agregar al carrito o");
        puts("  -1 : Mostrar el inventario resultante");
        puts("  -2 : Mostrar el carrito actual");
        puts("  -3 : Terminar de agregar productos");

        printf("Su elección: "); cin >> id;

        if (id == -3) break;

        // If the id doesn`t match with the options given
        if (id < -2 || id > carrito.inventario.getSize()-1) {
            puts("Ingresa un ID válido"); continue;
        }

        // Switch case to show inventory or shopping cart
        switch(id) {
            case -1: carrito.inventario.MostrarInventario(); break;
            case -2: carrito.mostrarCarrito(); break;
            default: {
                // Add quantity of the product, that is an struct
                printf("Escriba la cantidad del producto a agregar al carrito: "); cin >> cantidad;

                if(cantidad < 1) { 
                    printf("Error: Ingresa una cantidad valida"); continue;
                }

                // Delete a product to add another product
                Producto productoParaAgregar = carrito.inventario.eliminarProducto(id, cantidad);

                // If the product matches with the method product
                if(productoParaAgregar.getNombre() != "Error") {
                    carrito.agregarProducto(productoParaAgregar);
                }

                break;
            }
        }


    }

    printf("\nExcelente! Total a pagar: %.2lf\nVuelva pronto !!", carrito.getTotal());

    return 0;
}

