#pragma once
#include"Event.h"
class HeroEvents:Event
{
	virtual void addAge(Hero& hero) = 0;
	virtual void heroHealth() = 0;
	virtual void addExit() = 0;
	virtual void addWall() = 0;
	virtual void move(int& heroX, int& heroY) = 0;
};

