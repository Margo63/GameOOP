#include "StateGame.h"
#include<iostream>



void StateGame::setComand(std::string newComand) {
	comand = newComand;
}

Field StateGame::getField() {
	return canvas;
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
		//cout<< endl;
		std::cout << "height = ";
		std::cin >> my_height;
		//cout << endl;
		if (my_width > 0 && my_height > 0)
			canvas.setSize(my_width+2, my_height+2);
		else {
			canvas.setSize(30, 20);
		}
		//cout << my_width << " " << my_height;
	}


	if (comand == "end") {
		game_over = true;
	}
	if (comand == "w") {
		if (hero.getY() == 1) {
			hero.setY(canvas.getHeight() - 1);

		}
		hero.moveW();
	}
	if (comand == "s") {

		if (hero.getY() >= canvas.getHeight() - 2) {
			hero.setY(0);
		}
		hero.moveS();
	}
	if (comand == "a") {
		if (hero.getX() <= 1) {
			hero.setX(canvas.getWidth() - 1);
		}
		hero.moveA();
	}
	if (comand == "d") {
		if (hero.getX() >= canvas.getWidth() - 2) {
			hero.setX(0);

		}
		hero.moveD();
	}

}