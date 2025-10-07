// Calculadora-V1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <conio.h>
#include <cstdlib>

#include "Interfaces.h"
#include "Funciones.h"


int main()
{
    int opcion;
    std::cout << "Calculadora V2: Potencias y divisiones enteras\n";
    std::cout << "Incorporamos dos opciones de operaciones, sin mejoras en gestion de errores\n";
    _getch();
    system("cls");

    opcion = 1;
    while (opcion != 0) {
        menu();
        std::cout << "Elccion: ";
        std::cin >> opcion;
        system("cls");
        if (opcion == 1) {
            suma();
        }
        else if (opcion == 2) {
            resta();
        }
        else if (opcion == 3) {
            dividir();
        }
        else if (opcion == 4) {
            multiplicar();
        }
        else if (opcion == 5) {
            div_entera();
        }
        else if (opcion == 6) {
            potencia();
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
}
