#include <iostream>
#include <conio.h>
#include <cstdlib>

#include "Interfaces.h"
#include "Funciones.h"

int calculadora() {
    int opcion;
    std::cout << "Calculadora V3: Optimizacion y numero mas alto\n";
    _getch();
    system("cls");

    opcion = 1;
    while (opcion != 0) {
        menu();
        std::cout << "Elccion: ";
        std::cin >> opcion;
        system("cls");
        if (1 >= opcion  <=6) {
            operaciones_basicas(opcion);
        }
        else if (opcion == 0) {
            std::cout << "Saliendo...";
            _getch();
            break;
        }
        else {
            std::cout << "Opcion introducida no valida, elija de nuevo por favor";
        }
        _getch();
        system("cls");
    }
    system("cls");
    return 0;
}