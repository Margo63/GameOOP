#pragma once
#include "MapEvents.h"
class ExitEvent: public MapEvents
{
public:
	void changeAge(Hero& hero);
	void changeHeroHealth(Hero& hero);
	bool addExit();
	void addWall(Cell& cell);
	void move(int& heroX, int& heroY);
};

