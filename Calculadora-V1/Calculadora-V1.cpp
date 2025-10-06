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
    std::cout << "Division entera: 5\n";
    std::cout << "Potencia: 6\n";
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

int potencia() {
    double Num1;
    double Num2;
    double resultado = 1;
    
    std::cout << "Num1: ";
    std::cin >> Num1;
    std::cout << "\nNum2: ";
    std::cin >> Num2;
    
    for (int i = 1; i <= Num2; i++) {
        resultado = resultado * Num1;
    }

    std::cout << "El resultado es: " << resultado << "\n" << std::endl;

    return 0;
}

int div_entera() {
    double Num1;
    double Num2;
    int resultado;
    double resto;

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
    resto = Num1 - Num2 * resultado;
    std::cout << "El resto es: " << resto << "\n" << std::endl;
    return 0;
}

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
