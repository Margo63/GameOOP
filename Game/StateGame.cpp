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
		
		game_over = false;
		
	}
	if (comand == "cleanScreen") {
		std::system("cls");
	}
	if (comand == "size") {
		int my_width, my_height;
		std::cout << "width = ";
		my_width = keyboard.retInt();
		//std::cin >> my_width;
		std::cout << "height = ";
		my_height = keyboard.retInt();
		if (my_width > 0 && my_height > 0)
			canvas.setSize(my_width + 2, my_height + 2);
		else {
			canvas.setSize(30, 20);
		}
		canvas.setHeroX(1);
		canvas.setHeroY(1);
	}
	
	if (comand == "end") {
		game_over = true;
	}
	if (comand == "w") {
		int y = canvas.getHeroY();
		if (canvas.getHeroY() == 1) {
			y = canvas.getHeight() - 1;
		}
		if (canvas.getCells()[canvas.getHeroY()-1][canvas.getHeroX()].getPatency())
			canvas.setHeroY(--y);
		else {
			canvas.setHeroY(y);
		}
		std::system("cls");
	}
	if (comand == "s") {
		int y = canvas.getHeroY();
		if (canvas.getHeroY()>=canvas.getHeight()-2) {
			y = 0;
		}
		if (canvas.getCells()[canvas.getHeroY()+1][canvas.getHeroX()].getPatency())
			canvas.setHeroY(++y);
		else {
			canvas.setHeroY(y);
		}
		std::system("cls");
	}
	if (comand == "a") {
		int x = canvas.getHeroX();
		if (canvas.getHeroX() <= 1) {
			x = canvas.getWidth() - 1;
		}
		if(canvas.getCells()[canvas.getHeroY()][canvas.getHeroX()-1].getPatency())
			canvas.setHeroX(--x);
		else {
			canvas.setHeroX(x);
		}
		std::system("cls");
	}
	if (comand == "d") {
		int x = canvas.getHeroX();
		if (canvas.getHeroX() >= canvas.getWidth() - 2) {
			x = 0;
		}
		if (canvas.getCells()[canvas.getHeroY()][canvas.getHeroX()+1].getPatency())
			canvas.setHeroX(++x);
		else {
			//std::cout << "not ok";
			canvas.setHeroX(x);
		}
		std::system("cls");
	}
	
	if (comand == "info") {
		std::cout<<"health = "<<hero.getHealth()<<"\n";
		std::cout << "age = " << hero.getAge() << "\n";
		std::cout << "name = " << hero.getName() << "\n";
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