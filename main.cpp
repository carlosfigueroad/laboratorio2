#include "Punto1.h"
#include "punto2.h"
#include "punto3.h"
#include "punto4.h"
#include "punto5.h"
#include "punto6.h"

int main() {
    ejercicio1();
    ejercicio2();
    ejercicio3();
    std::string miCadena;
        std::cout << "Ingresa una cadena de texto: ";
        std::cin >> miCadena;

        int resultado = ejercicio4(miCadena);
        std::cout << "Resultado: " << resultado << std::endl;
        std::string numeroComoCadena;

        std::string miCadena2;
            std::cout << "Ingresa una cadena de texto: "; // Se solicita al usuario que ingrese una cadena de texto.
            std::getline(std::cin, miCadena); // Se obtiene la línea completa ingresada por el usuario.

            int numero = ejercicio5(miCadena); // Se llama a la función 'ejercicio5' para convertir la cadena a un número entero.
            std::cout << "El numero convertido es:este punto no medio :( " << numero << std::endl; // Se imprime el número entero convertido. cadena
            ejercicio6();
    return 0;
}
