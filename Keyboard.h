#pragma once
#include<iostream>
class Keyboard
{
private:
	int getInt;
	char getChar;
	std::string getString;
public:
	int retInt();

	char retChar();
	std::string retStr();
	void myCoutI(int info);
	void myCoutS(std::string info);

};

