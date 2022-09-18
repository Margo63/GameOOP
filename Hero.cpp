#include "Hero.h"

	Hero::Hero(){}
	Hero::Hero(int health,int age):health(health),age(age){}

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

	int  Hero::getX() {
		return x;
	}
	int  Hero::getY() {
		return y;
	}
	void  Hero::setX(int x) {
		this->x = x;
	}

	void  Hero::setY(int y) {
		this->y = y;
	}


	void  Hero::moveW() {
		y--;

	}

	void  Hero::moveS() {
		y++;
	}

	void  Hero::moveA() {
		x--;

	}

	void  Hero::moveD() {
		x++;
	}