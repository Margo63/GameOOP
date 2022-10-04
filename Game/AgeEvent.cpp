#include "AgeEvent.h"

void AgeEvent::addAge(Hero &hero) {
	int age = hero.getAge();
	age--;
	hero.setAge(age);
}
void AgeEvent::heroHealth() {
}
void AgeEvent::addExit() {

}
void AgeEvent::addWall() {

}
void AgeEvent::move(int& heroX, int &heroY) {
	
	heroX-=2;
}