#include "AgeEvent.h"

void AgeEvent::changeAge(Hero &hero) {
	int age = hero.getAge();
	age+=5;
	hero.setAge(age);
}
void AgeEvent::changeHeroHealth(Hero& hero) {}
bool AgeEvent::addExit() { return false; }
void AgeEvent::addWall(Cell& cell){

}
void AgeEvent::move(int& heroX, int &heroY) {
	
	heroX-=2;
}