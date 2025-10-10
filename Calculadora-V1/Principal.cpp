
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <limits>

#include "Calculadora.h"
#include "PPT.h"

void menu_principal() {
    std::cout << "Seleccione uno de los siguientes programas por favor:\n";
    std::cout << "======================\n";
    std::cout << "Calculadora: 1\n";
    std::cout << "Piedra, papel o tijeras: 2\n";
    std::cout << "Salir: 0\n";
    std::cout << "======================\n";
}

int main()
{
    int eleccion = -1;

    do {
        system("cls");
        menu_principal();
        std::cout << "Elige una opcion:"; 

        if (!(std::cin >> eleccion)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "La tecla introducida no es valida, pruebe de nuevo\n";
            _getch();
            eleccion = -1;
            system("cls");
            continue;
        }
        
        switch (eleccion) {
        case 0:
            std::cout << "Saliendo del programa...\n";
            _getch();
            system("cls");
            break;
        case 1:
            calculadora();
            break;
        case 2:
            ppt();
            break;
        default:
            system("cls");
            std::cout << "Opcion no admitida, introduzca una opcion valida por favor\n";
        }

    } while (eleccion != 0);

}
