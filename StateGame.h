#pragma once
#include "Field.h"
#include <iostream>
class StateGame
{
private:

	bool game_over;
	Field canvas;
	std::string comand;
	Hero hero;

public:
	void setComand(std::string newComand);
	Field getField();
	bool getStatusGame();
	Hero getHero();
	void setHero(Hero h);
	void comandProccesing();
};

