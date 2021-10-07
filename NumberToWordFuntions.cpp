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

void valor(std::array<int, 7> numero, std::map<int, std::string> valor) {
	for (int i = 0; 7 > i; i++) {
		std::cout << numero[i] << " ";
		std::cout << valor[i] << std::endl;
	}
}

void valorPosicional( int numero, std::map<int, std::string> valor ) {
	std::cout << valor[numero];
}

void mil(){
	std::cout<< " mil ";
}