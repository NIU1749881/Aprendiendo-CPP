#include <iostream>
#include <conio.h>
#include <cstdlib>

#include "Interfaces.h"
#include "Funciones.h"

int calculadora() {
    int opcion;
    std::cout << "Calculadora V3: Optimizacion y numero mas alto\n";
    _getch();

    opcion = -1;
    while (opcion != 0) {
        system("cls");
        menu();
        std::cout << "Elccion: ";
        std::cin >> opcion;


        if (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "La tecla introducida no es valida, pruebe de nuevo\n";
            _getch();
            opcion = -1;
            continue;
        }

        system("cls");
        if (opcion >= 0 && opcion <=8) {
            if (opcion == 0) {
                std::cout << "Saliendo...";
            }
            else {
                operaciones_basicas(opcion);
            }
        }
        else {
            std::cout << "Opcion introducida no valida, elija de nuevo por favor";
        }
        _getch();
        
    }
    return 0;
}