#include "Funciones.h"
#include <iostream>

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
