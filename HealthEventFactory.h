#pragma once
#include"EventFactory.h"
#include"HealthEvent.h"
class HealthEventFactory:public EventFactory
{
public:
	
	Event* createEvent();
};

