#include "Hero.h"
#include <iostream>

	Hero::Hero(){
		this->health = 30;
		this->age = 20;
		this->hero_name = "ivan";
	}
	Hero::Hero(int health=30,int age=20,std::string name="ivan") :health(health), age(age), hero_name(name) {}

	void Hero::setHealth(int _health) {
		health = _health;
	}

	void Hero::setAge(int _age) {
		age = _age;
	}
	void Hero::setName(std::string _name) {
		hero_name = _name;
	}
	std::string Hero::getName() {
		return hero_name;
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