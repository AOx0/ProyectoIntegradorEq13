#include "classProducto.h"

void Producto::mostrarProducto(int num= -1) {
    printf(
            "%sNombre: %-10s Precio: %-9.2f Cantidad: %-9d\n",
            num == -1 ? "" : (string("    ") + std::to_string(num) + ". ").c_str() ,
            nombre.c_str(), precio, cantidad
    );
}