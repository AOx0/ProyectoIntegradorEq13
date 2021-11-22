#include <string>

using namespace std;

template <unsigned SIZE>
class carrito {
    private:
        usuario datosUsuario;
        producto productos[SIZE];
    public:
        carrito(producto productos[], usuario datosUsuario);

};
