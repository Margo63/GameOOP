#pragma once
class Hero
{
private:

	int x;
	int y;
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

	int getX();
	int getY();
	void setX(int x);

	void setY(int y);


	void moveW();
	void moveS();

	void moveA();

	void moveD();
};

