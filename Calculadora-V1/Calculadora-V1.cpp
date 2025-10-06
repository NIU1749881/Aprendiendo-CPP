// Calculadora-V1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <cstdlib>
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

int menu() {
    std::cout << "======================\n";
    std::cout << "Sumar: 1\n";
    std::cout << "Restar: 2\n";
    std::cout << "Dividir: 3\n";
    std::cout << "Multiplicar: 4\n";
    std::cout << "Salir: 0\n";
    std::cout << "======================\n";
    return 0;
}

int suma() {
    double Num1;
    double Num2;
    double resultado;

    std::cout << "Num1: ";
    std::cin >> Num1;
    std::cout << "\nNum2: ";
    std::cin >> Num2;
    resultado = Num1 + Num2;
    std::cout << "El resultado es: " << resultado << "\n" << std::endl;

    return 0;
}

int resta() {
    double Num1;
    double Num2;
    double resultado;

    std::cout << "Num1: ";
    std::cin >> Num1;
    std::cout << "\nNum2: ";
    std::cin >> Num2;
    resultado = Num1 - Num2;
    std::cout << "El resultado es: " << resultado << "\n" << std::endl;

    return 0;
}

int multiplicar() {
    double Num1;
    double Num2;
    double resultado;

    std::cout << "Num1: ";
    std::cin >> Num1;
    std::cout << "\nNum2: ";
    std::cin >> Num2;
    resultado = Num1 * Num2;
    std::cout << "El resultado es: " << resultado << "\n" << std::endl;

    return 0;
}

int dividir() {
    double Num1;
    double Num2;
    double resultado;

    std::cout << "Num1: ";
    std::cin >> Num1;
    std::cout << "\nNum2: ";
    std::cin >> Num2;
    if (Num2 == 0) {
        std::cout << "\nError: No puede dividirse por cero\n";
        return 0;
    }
    resultado = Num1 / Num2;
    std::cout << "El resultado es: " << resultado << "\n" << std::endl;

    return 0;
}

int main()
{
    int opcion;
    std::cout << "Calculadora V1: Operaciones Basicas\n";
    std::cout << "Esta version permite sumar, restar, multiplicar y dividir\n";
    std::cout << "Unicamente es capaz de gestionar errores del tipo /0 y no entrada de datos como str\n";
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
            multiplicar();
        }
        else if (opcion == 4) {
            dividir();
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
