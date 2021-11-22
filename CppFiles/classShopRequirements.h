#include <string>

using namespace std;



class producto {
    private:
        double precio;
        string nombre;
        int cantidad;
    public:
        producto(double precio, string nombre, int cantidad);
};


template <unsigned SIZE>
class inventario {
    private:
        producto cantidad[SIZE];
};

class usuario {
    private:
        string nombre, direccion;
        int edad;
};

template <unsigned SIZE>
class carrito {
    private:
        usuario datosUsuario;
        producto productos[SIZE];
    public:
        carrito(producto productos[], usuario datosUsuario);

};


