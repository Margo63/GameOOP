#pragma once
#include<iostream>
#include "MapEvents.h"
class ExitEvent: public MapEvents
{
public:
	void addAge();
	void heroHealth();
	void addExit();
	void addWall();
	void move(int heroX, int heroY);
};

