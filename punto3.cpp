// Se incluye el archivo de encabezado "Punto3.h"
#include "punto3.h"
#include <iostream>

// Definición del operador de comparación para la clase Punto
bool operator==(const Punto& coordenada1, const Punto& coordenada2) {
    // Compara las coordenadas x e y de los dos puntos
    if (coordenada1.x == coordenada2.x && coordenada1.y == coordenada2.y) {
        return true;
    }
    return false;
}

// Definición de la función "ejercicio3"
void ejercicio3() {
    // Se crean dos objetos de la clase Punto
    Punto punto1(5, 4);
    Punto punto2(5, 4);
    // Se compara si los dos puntos son iguales
    bool resultado = (punto1 == punto2);
    // Se imprime el resultado de la comparación
    if (resultado) {
        std::cout << "Los puntos son iguales." << std::endl;
    } else {
        std::cout << "Los puntos no son iguales." << std::endl;
    }
}
