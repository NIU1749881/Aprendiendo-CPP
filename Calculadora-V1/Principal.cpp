
#include <iostream>
#include <conio.h>
#include <cstdlib>

#include "Calculadora.h"
#include "PPT.h"

int menu() {
    std::cout << "Seleccione uno de los siguientes programas por favor:\n";
    std::cout << "======================\n";
    std::cout << "Calculadora: 1\n";
    std::cout << "Piedra, papel o tijeras: 2\n";
    std::cout << "Salir: 0\n";
    std::cout << "======================\n";
    return 0;
}

int main()
{
    int eleccion = 1;

    while (eleccion != 0) {
        menu();
        std::cout << "";
        std::cin >> eleccion;
        if (eleccion == 1) {
            system("cls");
            calculadora();
        }
        else if (eleccion == 2) {
            system("cls");
            ppt();
        }
        else if (eleccion == 0) {
            std::cout << "Saliendo del programa...\n";
            _getch();
        }
        else {
            std::cout << "Opcion no admitida, introduzca una opcion valida por favor";
        }
        system("cls");
    }  
}
