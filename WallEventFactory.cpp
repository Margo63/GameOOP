#include "WallEventFactory.h"


Event* WallEventFactory::createEvent() {
	return new WallEvent;
}

