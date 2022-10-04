#pragma once
#include "MapEvents.h"
class WallEvent:MapEvents
{
	void addAge();
	void heroHealth();
	void addExit();
	void addWall();
	void move(int heroX, int heroY);
};

