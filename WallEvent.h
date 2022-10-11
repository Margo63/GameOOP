#pragma once
#include "MapEvents.h"
class WallEvent:public MapEvents
{
public:

	void changeAge(Hero& hero);
	void changeHeroHealth(Hero& hero);
	bool addExit();
	void addWall(Cell& cell);
	void move(int& heroX, int& heroY);
};

