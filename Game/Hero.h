#pragma once
#include<iostream>
#include <string>
class Hero
{
private:

	//int x;
	//int y;
	int health;
	int age;
	std::string hero_name;

public:
	Hero();
	Hero(int health,int age,std::string hero_name);
	//~Hero();// {}

	void setHealth(int _health);
	void setName(std::string _name);
	void setAge(int _age);
	int getHealth();
	std::string getName();
	int getAge();

//	std::string getName();

//	void setName(std::string _name);


	//void setName(std::string name);
	//std::string getName();

	//int getX();
	//int getY();
	//void setX(int x);
	//void setY(int y);


	void moveW();
	void moveS();

	void moveA();

	void moveD();
};

