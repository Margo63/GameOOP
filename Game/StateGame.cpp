#include "StateGame.h"
#include<iostream>



void StateGame::setComand(std::string newComand) {
	comand = newComand;
}

Field StateGame::getField() {
	return canvas;
}

void StateGame::setField(Field field) {
	this->canvas = field;
}

bool StateGame::getStatusGame() {
	return game_over;
}



Hero StateGame::getHero() {
	return hero;
}
void StateGame::setHero(Hero h) {
	hero = h;
}
void StateGame::comandProccesing() {

	if (comand == "start") {
		int my_width, my_height;
		game_over = false;
		std::cout << "width = ";
		std::cin >> my_width;
		std::cout << "height = ";
		std::cin >> my_height;
		if (my_width > 0 && my_height > 0)
			canvas.setSize(my_width+2, my_height+2);
		else {
			canvas.setSize(30, 20);
		}
	}


	if (comand == "end") {
		game_over = true;
	}
	if (comand == "w") {
		int y = canvas.getHeroY();
		if (canvas.getHeroY() == 1) {
			y = canvas.getHeight() - 1;
		}
		canvas.setHeroY(--y);
	}
	if (comand == "s") {
		int y = canvas.getHeroY();
		if (canvas.getHeroY()>=canvas.getHeight()-2) {
			y = 0;
		}
		canvas.setHeroY(++y);
	}
	if (comand == "a") {
		int x = canvas.getHeroX();
		if (canvas.getHeroX() <= 1) {
			x = canvas.getWidth() - 1;
		}
		canvas.setHeroX(--x);
	}
	if (comand == "d") {
		int x = canvas.getHeroX();
		if (canvas.getHeroX() >= canvas.getWidth() - 2) {
			x = 0;
		}
		canvas.setHeroX(++x);
	}
	
	if (comand == "info") {
		std::cout<<"health = "<<hero.getHealth()<<"\n";
		std::cout << "age = " << hero.getAge() << "\n";
		//std::cout << "name = " << hero.getName() << "\n";
	}
	/*if (comand == "name") {
		std::string name;
		std::cin >> name;
		hero.setName(name);
	}
	*/

	

	
}

FieldView StateGame::getFieldView() {
	return drawField;
}