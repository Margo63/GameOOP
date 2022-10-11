#pragma once
//#include"Event.h"
class Event;

class EventFactory
{
public:
	virtual Event* createEvent() = 0;
};

