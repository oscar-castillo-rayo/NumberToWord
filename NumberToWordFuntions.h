
#ifndef NUMBERTOWORD_NUMBERTOWORDFUNTIONS_H
#define NUMBERTOWORD_NUMBERTOWORDFUNTIONS_H

#include <array>
#include <map>

std::array<int, 7> descomponerNumero(int numero);

void reversar(std::array<int, 7> array);

void valor(std::array<int, 7> array, std::map<int, std::string>);

void valorPosicional(int, std::map<int, std::string>);

void mil();
#endif //NUMBERTOWORD_NUMBERTOWORDFUNTIONS_H
