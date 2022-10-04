#pragma once
#include "HeroEvents.h"
#include "Hero.h"
class AgeEvent: public HeroEvents
{
public:
	void addAge(Hero& hero);
	void heroHealth();
	void addExit();
	void addWall();
	void move(int& heroX, int& heroY);
};

