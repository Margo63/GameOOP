#include "ExitEventFactory.h"

Event* ExitEventFactory::createEvent() {
	return new ExitEvent;

}