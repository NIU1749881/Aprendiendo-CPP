#include <iostream>
#include <conio.h>

#include "PPT.h"


int ppt() {
	int n_partidas;
	int rondas = 0;
	int jugada1, jugada2;
	int puntos1 = 0, puntos2 = 0;

	std::string jugador2;
	std::string jugador1;
	jugador2 = "Sheldon";
	std::cout << "Jugador1: ";
	std::cin >> jugador1;
	std::cout << "Introduzca cuantas rondas quiere jugar: ";
	std::cin >> n_partidas;
	
	while (rondas < n_partidas) {
		srand(time(NULL));
		jugada2 = rand() % 3 + 1;
		system("cls");

		std::cout << "### Ronda " << rondas + 1 << " ###\n";

		std::cout << "Elige entre las siguientes opciones:\n";
		std::cout << "Piedra:	1\n";
		std::cout << "Papel:	2\n";
		std::cout << "Tijeras:3\n";
		std::cout << "###############\n";
		std::cout << "Eleccion: ";
		std::cin >> jugada1;

		if (jugada1 == jugada2) {
			std::cout << "\nSe ha producido un empate!\n";
		}
		else {
			if (jugada1 == 1) {
				if (jugada2 == 2) {
					std::cout << "\nPiedra pierde contra papel. " << jugador2 << " gana la ronda\n";
					puntos2++;
				}
				else if (jugada2 == 3) {
					std::cout << "\nPiedra gana contra tijeras. " << jugador1 << " gana la ronda\n";
					puntos1++;
				}
			}
			if (jugada1 == 2) {
				if (jugada2 == 1) {
					std::cout << "\nPapel gana contra piedra. " << jugador1 << " gana la ronda\n";
					puntos1++;
				}
				else if (jugada2 == 3) {
					std::cout << "\nPapel pierde contra tijeras. " << jugador2 << " gana la ronda\n";
					puntos2++;
				}
			}
			if (jugada1 == 3) {
				if (jugada2 == 1) {
					std::cout << "\nTijeras pierden contra piedra. " << jugador2 << " gana la ronda\n";
					puntos2++;
				}
				else if (jugada2 == 2) {
					std::cout << "\nTijeras ganan contra papel. " << jugador1 << " gana la ronda\n";
					puntos1++;
				}
			}
		}

		std::cout << "Puntos " << jugador1 << ": " << puntos1 << "\n";
		std::cout << "Puntos " << jugador2 << ": " << puntos2 << "\n";

		_getch();
		rondas++;
	}

	if (puntos1 > puntos2) {
		std::cout << "Ha ganado " << jugador1 << " !\n";
	}
	else if (puntos1 < puntos2) {
		std::cout << "Ha ganado " << jugador2 << " !\n";
	}
	else {
		std::cout << "Ha habido un empate final!\n";
	}
	_getch();
	return 0;
}