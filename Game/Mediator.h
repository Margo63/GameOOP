#pragma once
#include "StateGame.h"
#include "ComandReader.h"
class Mediator
{
private:
	StateGame state=StateGame();
	ComandReader comand;
public:
	void gameProcessing();
};

