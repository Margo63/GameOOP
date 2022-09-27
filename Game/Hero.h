#pragma once
class Hero
{
private:

	//int x;
	//int y;
	int health;
	int age;

public:
	Hero();
	Hero(int health,int age);
	//~Hero();// {}

	void setHealth(int _health);

	void setAge(int _age);
	int getHealth();
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

