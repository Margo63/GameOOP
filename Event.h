#pragma once
#include <iostream>
#include "Hero.h"
class Cell;
class Event
{
public:
	virtual void changeAge(Hero& hero)=0;
	virtual void changeHeroHealth(Hero&  hero) = 0;
	virtual bool addExit() = 0;
	virtual void addWall(Cell &cell) = 0;
	virtual void move(int& heroX,int& heroY)=0;
};

