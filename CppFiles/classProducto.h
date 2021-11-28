#pragma once

#include <string>

using namespace std;

class Producto {

private:
    double precio;
    string nombre;
    int cantidad;
public:
    double _flag;

    Producto(double precio, string nombre, int cantidad): precio(precio), nombre(nombre), cantidad(cantidad), _flag(874834909249234.28347242384) {};

    double getPrecioTotal();
    int getCantidad();
    double getPrecio();
    string getNombre();


    void mostrarProducto(int);

    void lessCantidad(int);

    static int getSize(Producto *);


};

