#pragma once
//#include "Field.h"
#include "FieldView.h"
#include <iostream>
class StateGame
{
private:

	bool game_over;
	Field canvas;
	std::string comand;
	Hero hero;
	FieldView drawField;


public:
	void setComand(std::string newComand);
	Field getField();
	void setField(Field field);
	bool getStatusGame();
	Hero getHero();
	void setHero(Hero h);
	void comandProccesing();
	FieldView getFieldView();
	
};

