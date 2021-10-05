#include "NumberToWordFuntions.h"
#include <iostream>
#include <array>
#include <algorithm>
#include <map>

std::array<int, 7> descomponerNumero(int numero) {
	std::array<int, 7> datoNumero = {0, 0, 0, 0, 0, 0, 0};

	for (int i = 0; numero > 0 && datoNumero.size(); i++) {
		int n = numero % 10;
		numero /= 10;
		datoNumero[i] = n;
	}
	return datoNumero;
}

void reversar(std::array<int, 7> array) {
	for (int i = 6; i >= 0; i--) {
		int numero = array[i];
		std::cout << numero;
	}
}

void valores(std::array<int, 7> array) {
	for (int i = 0; 7 > i; i++) {
		std::map<int, std::string> valores = {{0, "unidades"},
											  {1, "decenas"},
											  {2, "centenas"},
											  {3, "unidades de millar"},
											  {4, "decenas de millar"},
											  {5, "centenas de millar"},
											  {6, "unidades de millón"}};
		std::cout << array[i] << " ";
		std::cout << valores[i] << std::endl;
	}
}