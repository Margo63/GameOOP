#pragma once
#include "HeroEvents.h"
class HealthEvent:public HeroEvents
{
	void addAge();
	void heroHealth();
	void addExit();
	void addWall();
	void move(int heroX, int heroY);
};

