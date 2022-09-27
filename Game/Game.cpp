#include <iostream>
#include "Hero.h"
#include "StateGame.h"
#include "Mediator.h"
using namespace std;



/*
class Position {

private:
	int x;
	int y;
public:
	Position() {
		
	}
	~Position(){}
	void setPosition(int _x, int _y) {
		x = _x;
		y = _y;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}

};*/
/*
class Cell {
private:
	string type;
	Position point;
public:
	
	Cell() {

	}
	~Cell() {}
	void setType(string _type) {
		type = _type;
	}

	Position getPoint() {
		return point;
	}
	

	string getType() {
		return type;
	}
};
*/
/*
class Hero {
private:

	int x;
	int y;
	int health;
	int age;

public:
	Hero() {

	}
	~Hero() {}

	void setHealth(int _health) {
		health = _health;
	}

	void setAge(int _age) {
		age = _age;
	}
	int getHealth() {
		return health;
	}
	int getAge() {
		return age;
	}

	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	void setX(int x) {
		this->x = x;
	}

	void setY(int y) {
		this->y = y;
	}


	void moveW() {
		y--;

	}

	void moveS() {
		y++;
	}

	void moveA() {
		x--;


	}

	void moveD() {
		x++;
	}
};
*/
/*
class Field {
private:
	int width=20;
	int height=20;
	vector < vector <Cell> > cells;

public:
	
	Field() {

	}
	~Field(){}
	void setSize(int _width,int _height) {
		width = _width;
		height = _height;

		

	}
	int getWidth() {
		return width;
	}

	int getHeight() {
		return height;
	}

	
	void setCanvas(Hero hero) {
		
		if (height > 0) {
			cells.resize(height);

			for (int i = 0; i < height; i++) {
				cells[i].resize(width);
			}
		}

		for (int i = 0; i < width; i++) {
			cells[0][i].setType("#");
			cells[0][i].getPoint().setPosition(i,0);
			//cout << "#";
		}
		//cout << endl;
		for (int i = 1; i < height-1; i++) {
			for (int j = 0; j < width; j++) {
				
				if (j == 0 || j == width-1) {
					cells[i][j].setType("#");
					cells[i][j].getPoint().setPosition(j,i);
					//cout << "#";
				}
				else {
					if (!( hero.getX()==j && hero.getY()==i)) {
						cells[i][j].setType(" ");
						cells[i][j].getPoint().setPosition(j,i);
						//cout << " ";
					}
					else {
						cells[i][j].setType("0");
						cells[i][j].getPoint().setPosition(j, i);
						//cout << "0";
					}
				}
			}
			//cout << endl;
		}
		for (int i = 0; i < width; i++) {
			cells[height-1][i].setType("#");
			cells[height-1][i].getPoint().setPosition(i, height-1);
			
		}
		
		/////////////////////////////////////////////
		system("cls");


		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				cout << cells[i][j].getType();
			}
			cout << endl;
		}


		for (int i = 0; i < height; i++) {
				cells[i].clear();
			}
		cells.clear();
	}

	void getCanvas() {
		system("cls");
		//for (int i = 0; i < height; i++) {
		//	for (int j = 0; j < width; j++) {
		//		cout << cells[i][j].getType();
		//	}
		//	cout << endl;
		//}
		cout << cells.size();
		//for (int i = 0; i < width; i++) {
		//	cells[i].clear();
		//}
		//cells.clear();

	}

};
*/
/*
class StateGame {
private:

	bool game_over;
	Field canvas;
	string comand;
	Hero hero;

public:

	StateGame(
		//bool _game_over, string _comand
		) {
	//	game_over = _game_over;
	//	comand = _comand;
	}
	~StateGame(){}

	void setComand(string newComand) {
		comand = newComand;
	}
	Field getField() {
		return canvas;
	}
	bool getStatusGame() {
		return game_over;
	}
	Hero getHero() {
		return hero;
	}
	void setHero(Hero h) {
		hero = h;
	}
	void comandProccesing() {

		if (comand == "start") {
			
			int my_width, my_height;
			game_over = false;
			cout << "width = ";
			cin >> my_width;
			//cout<< endl;
			cout << "height = ";
			cin>>my_height;
			//cout << endl;
			if(my_width>0 && my_height>0)
				canvas.setSize(my_width, my_height);
			else {
				canvas.setSize(30, 20);
			}
			//cout << my_width << " " << my_height;
		}
		

		if (comand == "end") {
			game_over = true;
		}
		if (comand == "w") {
			if (hero.getY() ==1) {
				hero.setY(canvas.getHeight() - 1);
				
			}
			hero.moveW();
		}
		if (comand == "s") {

			if (hero.getY() == canvas.getHeight()-2) {
				hero.setY(0);
			}
			hero.moveS();
		}
		if (comand == "a") {
			if (hero.getX() == 1) {
				hero.setX(canvas.getWidth() - 1);
			}
			hero.moveA();
		}
		if (comand == "d") {
			if (hero.getX() == canvas.getWidth() - 2) {
				hero.setX(0);
				
			}
			hero.moveD();
		}

	}
};

*/

int main()
{

	Mediator med;
	med.gameProcessing();
	//Hero h;
	//h.setX(1);
	//h.setY(1);
	
	/*StateGame state = StateGame();
	string comand;
	cin >> comand;
	state.setComand(comand);
	state.comandProccesing();
	
	
	

	//state.setHero(h);
	while (!state.getStatusGame())
	{	
		state.getField().drawCanvas(state.getHero());
		//state.getField().getCanvas();
		cin >> comand;
		state.setComand(comand);
		
		state.comandProccesing();
		
	}
	
	cout << "game over"<<endl;
	*/
}
