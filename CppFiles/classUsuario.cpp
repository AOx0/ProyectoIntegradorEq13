#include "classUsuario.h"

void Usuario::mostrarDatos() {
    printf("Nombre: %-10sEdad: %-3d    Dirección: %s\n", nombre.c_str(), edad, direccion.c_str());
}
