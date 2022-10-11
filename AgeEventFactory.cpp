#include "AgeEventFactory.h"


Event* AgeEventFactory::createEvent() {
	return new AgeEvent;
}