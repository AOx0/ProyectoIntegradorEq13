#include <string>

using namespace std;

template <unsigned SIZE>
class Carrito {
private:
    Usuario datosUsuario;
    Producto productos[SIZE];
public:
    Carrito(Producto productos[], Usuario datosUsuario);

};
