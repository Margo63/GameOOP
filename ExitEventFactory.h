#pragma once
#include"EventFactory.h"
#include "ExitEvent.h"
class ExitEventFactory:public EventFactory
{
public:
	Event* createEvent();
};

