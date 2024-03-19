// Inclusión del archivo de cabecera correspondiente
#include "punto11.h"
// Inclusión de las bibliotecas para el manejo de entrada/salida estándar y mapas
#include <iostream>
#include <map>
#include <vector>

// Definición de la función ejercicio11
void ejercicio11() {
    // Creación de una matriz para representar los asientos de la sala de cine
    std::vector<std::vector<char>> sala(15, std::vector<char>(20, '-'));

    // Procesamiento de reservas o cancelaciones
    char opcion;
    char fila;
    int numero;
    std::cout << "Ingrese 'r' para reservar, 'c' para cancelar o 's' para salir: ";
    while (std::cin >> opcion && opcion != 's') {
        if (opcion == 'r' || opcion == 'c') {
            std::cout << "Ingrese la fila (A-O) y el número del asiento (1-20): ";
            std::cin >> fila >> numero;
            // Convertir la fila a índice y ajustar el número del asiento
            int indiceFila = fila - 'A';
            int indiceAsiento = numero - 1;
            // Reservar o cancelar el asiento
            sala[indiceFila][indiceAsiento] = (opcion == 'r') ? '+' : '-';
            // Mostrar la sala actualizada
            for (const auto& fila : sala) {
                for (char asiento : fila) {
                    std::cout << asiento;
                }
                std::cout << std::endl;
            }
        } else {
            std::cout << "Opcion invalida. Intente de nuevo: ";
        }
    }
}
