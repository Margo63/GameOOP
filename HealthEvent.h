#pragma once
#include "HeroEvents.h"
class HealthEvent:public HeroEvents
{public:
	void changeAge(Hero& hero);
	void changeHeroHealth(Hero& hero);
	bool addExit();
	void addWall(Cell& cell);
	void move(int& heroX, int& heroY);
};

