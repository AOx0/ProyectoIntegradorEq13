#include "classInventario.h"

void Inventario::MostrarInventario() {
    printf("Inventario: \n");

    for (int i=0; i<size; i++) cantidad[i].mostrarProducto(i);
}