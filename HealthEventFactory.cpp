#include "HealthEventFactory.h"

Event* HealthEventFactory::createEvent() {
	return new HealthEvent;
}