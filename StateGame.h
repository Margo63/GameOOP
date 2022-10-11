#pragma once
//#include "Field.h"
#include "FieldView.h"
#include "Keyboard.h"
#include <iostream>
class StateGame
{ 
private:

	bool game_over=true;
	Field canvas;
	std::string comand;
	Hero hero;
	Keyboard keyboard;
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

