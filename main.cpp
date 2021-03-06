
#include <iostream>
#include "NumberToWordFuntions.h"

#include <ctime>
#include <map>

int main() {


	int numero;
	std::cout << "Digite un numero" << std::endl;
	std::cin >> numero;

	std::array<int, 7> numeroDescompuesto = descomponerNumero(numero);

	std::cout << numero << " el valor del número es: " << std::endl;
	reversar(numeroDescompuesto);
	std::cout << "\n Los valores son \n";
	std::map<int, std::string> valores = {{0, "unidades"},
										  {1, "decenas"},
										  {2, "centenas"},
										  {3, "unidades de millar"},
										  {4, "decenas de millar"},
										  {5, "centenas de millar"},
										  {6, "unidades de millón"}};

	valor(numeroDescompuesto, valores);

	int U = numeroDescompuesto[0];
	int D = numeroDescompuesto[1];
	int C = numeroDescompuesto[2];
	int UM = numeroDescompuesto[3];
	int DM = numeroDescompuesto[4];
	int CM = numeroDescompuesto[5];
	int UMI = numeroDescompuesto[6];

	std::map<int, std::string> unidades = {{1, "uno"},
										   {2, "dos"},
										   {3, "tres"},
										   {4, "cuatro"},
										   {5, "cinco"},
										   {6, "seis"},
										   {7, "siete"},
										   {8, "ocho"},
										   {9, "nueve"}};

	std::map<int, std::string> diez = {{1, "once"},
									   {2, "doce"},
									   {3, "trece"},
									   {4, "catorce"},
									   {5, "quince"},
									   {6, "dieciséis"},
									   {7, "diecisiete"},
									   {8, "dieciocho"},
									   {9, "diecinueve"}};

	std::map<int, std::string> decenas = {{1, "diez"},
										  {2, "veinte"},
										  {3, "treinta"},
										  {4, "cuarenta"},
										  {5, "cincuenta"},
										  {6, "sesenta"},
										  {7, "setenta"},
										  {8, "ochenta"},
										  {9, "noventa"}};

	std::map<int, std::string> centenas = {{1, "cien"},
										   {2, "doscientos"},
										   {3, "trescientos"},
										   {4, "cuatrocientos"},
										   {5, "quinientos"},
										   {6, "seiscientos"},
										   {7, "setecientos"},
										   {8, "ochocientos"},
										   {9, "novecientos"}};

	std::map<int, std::string> unidadesDeMillar = {{1, "mil"},
												   {2, "dos"},
												   {3, "tres "},
												   {4, "cuatro "},
												   {5, "cinco "},
												   {6, "seis "},
												   {7, "siete "},
												   {8, "ocho "},
												   {9, "nueve"}};

	std::map<int, std::string> decenasDeMillar = {{1, "diez"},
												  {2, "veinte"},
												  {3, "treinta"},
												  {4, "cuarenta"},
												  {5, "cincuenta"},
												  {6, "sesenta"},
												  {7, "setenta"},
												  {8, "ochenta"},
												  {9, "noventa"}};

	std::map<int, std::string> centenasDeMillar = {{1, "cien mil"},
												   {2, "doscientos"},
												   {3, "trescientos"},
												   {4, "cuatrocientos"},
												   {5, "quinientos"},
												   {6, "seiscientos"},
												   {7, "setecientos"},
												   {8, "ochocientos"},
												   {9, "novecientos"}};

	std::map<int, std::string> millon = {{1, "un millón"}};


	valorPosicional(UMI, millon);

	if (CM == 1 && DM == 0 && UM != 0 && C == 0 && D == 0 && U == 0) {
		if (UM == 1) {
			std::cout << "ciento un ";
			mil();
		} else if (UM != 0) {
			std::cout << "ciento ";
			valorPosicional(UM, unidadesDeMillar);
			mil();
		}
	} else {

	}

	if (DM != 0 && UM == 0 && C == 0 && D == 0 && U == 0) {
		valorPosicional(DM, decenas);
		mil();
	}
	valorPosicional(DM, decenas);

	valorPosicional(UM, unidades);

	if (C == 1) {
		valorPosicional(C, centenas);
	} else if (numero > 100 && numero < 200) {
		std::cout << "ciento ";
	}

	if (numero > 10 && numero < 20) {
		valorPosicional(U, diez);
	} else if (numero > 20 && numero < 30) {
		std::cout << "veinti ";
	} else {
		valorPosicional(D, decenas);
	}

	if (numero > 0 && U != 0) {
		valorPosicional(U, unidades);
	}




//
//	} else if (D == 2 && U != 0) {
//		std::cout << "veinti";
//		valorPosicional(U, unidades);
//	} else {
//		valorPosicional(D, decenas);
//		if (U != 0) {
//			std::cout << " y ";
//		}
//		valorPosicional(U, unidades);
//	}


//	if (C == 1 && D != 0) {
//		std::cout << "cien";
//	} else {
//		valorPosicional(C, centenas);
//	}



	return 0;
}


