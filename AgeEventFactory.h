#pragma once
#include "EventFactory.h"
#include "AgeEvent.h"
class AgeEventFactory:public EventFactory
{
public:
	Event* createEvent();
};
