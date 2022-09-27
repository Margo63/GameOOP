#include "Hero.h"
#include <iostream>

	Hero::Hero(){}
	Hero::Hero(int health=30,int age=20) :health(health), age(age) {}

	void Hero::setHealth(int _health) {
		health = _health;
	}

	void Hero::setAge(int _age) {
		age = _age;
	}
	int Hero::getHealth() {
		return health;
	}
	int  Hero::getAge() {
		return age;
	}

	//std::string Hero::getName() {
	//	return name;
	//}
	//void Hero::setName(std::string _name) {
	//	name = _name;
	//}
	 
	
	 
//	int  Hero::getX() {
//		return x;
//	}
//	int  Hero::getY() {
//		return y;
//	}
/*	void  Hero::setX(int x) {
		this->x = x;
	}

	void  Hero::setY(int y) {
		this->y = y;
	}
*/

	void  Hero::moveW() {
		//return -1;
		//y--;

	}

	void  Hero::moveS() {
		//y++;
	}

	void  Hero::moveA() {
		//x--;

	}

	void  Hero::moveD() {
		//x++;
	}