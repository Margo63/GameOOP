#include "Keyboard.h"

int Keyboard::retInt() {
	std::cin >> getInt;
	return getInt;
}

char Keyboard::retChar() {
	std::cin >> getChar;
	return getChar;
}
std::string Keyboard::retStr() {
	std::cin >> getString;
	return getString;
}