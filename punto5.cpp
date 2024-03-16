#include "punto5.h"
#include <sstream>

// Se define la función 'ejercicio5', que toma una referencia a una cadena y devuelve un entero.
int ejercicio5(std::string& cadena) {
    std::stringstream convertidor(cadena); // Se crea un objeto 'stringstream' llamado 'convertidor'.
    int numero; // Se declara un entero 'numero'.
    convertidor >> numero; // Se extrae el número de la cadena utilizando el 'convertidor'.
    return numero; // Se retorna el número extraído.
}
