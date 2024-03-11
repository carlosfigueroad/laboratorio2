// Se incluye la biblioteca string
#include <string>

// Se declara la clase Punto con sus atributos públicos
class Punto {
public:
    int x, y;
    // Se declara el constructor de la clase Punto
    Punto(int x, int y) : x(x), y(y) {}
};

// Se declara el operador de comparación para la clase Punto
bool operator==(const Punto& coordenada1, const Punto& coordenada2);
// Se declara la función ejercicio3
void ejercicio3();
