#include <iostream>
#include "NumberToWordFuntions.h"

#include <ctime>

int main() {


	int numero;
	numero = 1234567;

	std::array<int, 7> numeroDescompuesto = descomponerNumero(numero);

	std::cout << numero << " el valor del número es: " << std::endl;
	reversar(numeroDescompuesto);

	std::cout << "Los valores son \n";
	valores(numeroDescompuesto);

	return 0;
}


