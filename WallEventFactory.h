#pragma once
#include "EventFactory.h"
#include "WallEvent.h"
class WallEventFactory:public EventFactory 
{
public:
	Event* createEvent();
	

};

