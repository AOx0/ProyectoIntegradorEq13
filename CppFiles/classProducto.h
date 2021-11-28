#pragma once
#include <string>

using namespace std;

class Producto {

    private:
        double precio;
        string nombre;
        int cantidad;
        double _flag;

    public:
        // Flag used to verify memory is not pointing to an external data within the previus data
        Producto(double precio, string nombre, int cantidad): precio(precio), nombre(nombre), cantidad(cantidad), _flag(874834909249234.28347242384) {};

        // Getters
        double getPrecioTotal();
        int getCantidad();
        double getPrecio();
        string getNombre();

        // Getter and setter
        void mostrarProducto(int);
        void lessCantidad(int);

        // Constant pointer array
        static int getSize(Producto *);


};

