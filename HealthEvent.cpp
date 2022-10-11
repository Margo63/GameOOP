#include "HealthEvent.h"

void HealthEvent::changeAge(Hero& hero) {}
void HealthEvent::changeHeroHealth(Hero& hero) {

	int now_health = hero.getHealth();
	now_health -= 5;
	hero.setHealth(now_health);
}
bool HealthEvent::addExit() { return false; }
void HealthEvent::addWall(Cell & cell) {
	
}
void HealthEvent::move(int& heroX, int& heroY) {}