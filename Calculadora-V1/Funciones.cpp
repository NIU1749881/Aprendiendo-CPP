#include "Funciones.h"
#include <iostream>
#include <cmath>


int operaciones_basicas(int opcion) {
    double Num1;
    double Num2;
    double resultado = 0;
    double resto = 0;

    std::cout << "Num1: ";
    std::cin >> Num1;
    std::cout << "\nNum2: ";
    std::cin >> Num2;

    if (opcion == 1) { //Suma
        resultado = Num1 + Num2;
    }
    else if (opcion == 2) { //Resta
        resultado = Num1 - Num2;
    }
    else if (opcion == 3) { //División
        resultado = Num1 / Num2;
        if (Num2 == 0) {
            std::cout << "\nError: No puede dividirse por cero\n";
            return 0;
        }
    }
    else if (opcion == 4) { //Multiplicación
        resultado = Num1 * Num2;
    }
    else if (opcion == 5) { //División entera
        if (Num2 == 0) {
            std::cout << "\nError: No puede dividirse por cero\n";
            return 0;
        }
        resultado = Num1 / Num2;
        resto = Num1 - Num2 * resultado;
    }
    else if (opcion == 6) { //Potencia 
        resultado = std::pow(Num1, Num2);
    }
    else if (opcion == 7) { //Núm más alto
        resultado = std::max(Num1, Num2);
        std::cout << "El numero mas grande es:" << resultado;
        return 0;
    }
    else if (opcion == 8) { //Núm más bajo
        resultado = std::min(Num1, Num2);
        std::cout << "El numero mas bajo es:" << resultado;
        return 0;
    }
    
    std::cout << "El resultado es: " << resultado << "\n" << std::endl;
    return 0;
}