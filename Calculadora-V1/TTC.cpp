#include <iostream>
#include <conio.h>

#include "TTC.h"

bool Victoria(std::string pos[], char simbolo) {
	std::string s(1, simbolo);
	if (pos[0] == s && pos[1] == s && pos[2] == s ||
		pos[3] == s && pos[4] == s && pos[5] == s ||
		pos[6] == s && pos[7] == s && pos[8] == s ||
		pos[0] == s && pos[4] == s && pos[8] == s ||
		pos[2] == s && pos[4] == s && pos[6] == s ||
		pos[0] == s && pos[3] == s && pos[6] == s ||
		pos[1] == s && pos[4] == s && pos[7] == s ||
		pos[2] == s && pos[5] == s && pos[8] == s ) { 
		return true;
	}
	return false;
}

void Tablero(std::string posiciones[]) {
	std::cout << "| " << posiciones[0] << " | " << posiciones[1] << " | " << posiciones[2] << " |\n|---|---|---|\n";
	std::cout << "| " << posiciones[3] << " | " << posiciones[4] << " | " << posiciones[5] << " |\n|---|---|---|\n";
	std::cout << "| " << posiciones[6] << " | " << posiciones[7] << " | " << posiciones[8] << " |\n|---|---|---|\n";
}

void ttc() {
	int n_ronda = 0, casilla = -1;
	char simbolo1 = 'A', simbolo2 = 'A';
	bool ganador = false;

	std::string jugador1, jugador2;

	std::cout << "Jugador 1:";
	std::cin >> jugador1;
	std::cout << "Jugador 2:";
	std::cin >> jugador2;

	std::string posiciones[] = {" "," "," "," "," "," "," "," "," " };

	//simbolos
	do {
		std::cout << "Simbolo del jugador 1, X o O:";
		std::cin >> simbolo1;

		if (simbolo1 != 'X' && simbolo1 != 'O') {
			std::cout << "Simbolo no valido, pruebe de nuevo\n";
			continue;
		}

		std::cout << "Simbolo del jugador 2, X o O:";
		std::cin >> simbolo2;

		if (simbolo2 != 'X' && simbolo2 != 'O') {
			std::cout << "Simbolo no valido, pruebe de nuevo\n";
			continue;
		}

		if (simbolo1 == simbolo2) {
			std::cout << "Los jugadores tienen que usar signos diferentes\n";
			continue;
		}
		break;
	} while (true);

	//bucle de juego
	while (!ganador) {
		system("cls");

		if (Victoria(posiciones, simbolo1)) {
			std::cout << "Jugador: " << jugador1 << " gana la partida\n";
			break;
		}
		else if (Victoria(posiciones, simbolo2)) {
			std::cout << "Jugador: " << jugador2 << " gana la partida\n";
			break;
		}
		else if (n_ronda == 8) {
			std::cout << "No quedan casillas disponibles, es un empate!\n";
			break;
		}

		std::cout << "Ronda " << n_ronda + 1 << ". Turno de " << ((n_ronda % 2 == 0) ? jugador1 : jugador2) << "\n\n";
		Tablero(posiciones);

		std::cout << "Seleccione una casilla (1 - 9): ";

		if (!(std::cin >> casilla)) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Entrada no valida.\n";
			_getch();
			continue;
		}
		if (casilla < 1 || casilla > 9) {
			std::cout << "Casilla fuera de rango.\n";
			_getch();
			continue;
		}

		if (posiciones[casilla-1] != " ") {
			std::cout << "Casilla ocupada.\n";
			_getch();
			continue;
		}

		posiciones[casilla - 1] = std::string(1, (n_ronda % 2 == 0) ? simbolo1 : simbolo2);
		n_ronda++;
	}
	Tablero(posiciones);
	_getch();
}