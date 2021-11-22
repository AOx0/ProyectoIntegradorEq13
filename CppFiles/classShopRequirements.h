#include <string>

using namespace std;



class Producto {
    private:
        double precio;
        string nombre;
        int cantidad;
    public:
        Producto(double precio, string nombre, int cantidad): precio(precio), nombre(nombre), cantidad(cantidad){};

        void mostrarProducto(int);
};



class Inventario {
    private:
        int size;
        Producto (&cantidad)[] ;
    public:
        Inventario(Producto c[], int size): size(size), cantidad(reinterpret_cast<Producto (&)[]>(*c)) {};

        void MostrarInventario();
};

class Usuario {
    private:
        string nombre, direccion;
        int edad;
};

template <unsigned SIZE>
class Carrito {
    private:
        Usuario datosUsuario;
        Producto productos[SIZE];
    public:
        Carrito(Producto productos[], Usuario datosUsuario);

};


