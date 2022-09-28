#include "ComandReader.h"

std::string ComandReader:: readComand() {
	std::cin >> comand;
	return comand;
}
int ComandReader::getWidth() {
	int wid;
	std::cin >> wid;
	return wid;
}

int ComandReader::getHeight() {
	int height;
	std::cin >> height;
	return height;
}