#include "Field.h"
#include "Cell.h"


Field::Field() {}
Field::Field(int width=30,int height=20,int hero_x=1,int hero_y=1):width(width),height(height), hero_x(hero_x), hero_y(hero_y){
	
}
//Field::Field(Field& obj) {
//	width = obj.width;
//	height = obj.height;
//	cells = obj.cells;
//}
void Field::setSize(int _width, int _height) {
	width = _width;
	height = _height;
}
int Field::getWidth() {
	return width;
}

int Field::getHeight() {
	return height;
}

int Field::getHeroX() {
	return hero_x;
}
int Field::getHeroY() {
	return hero_y;
}
void Field::setHeroY(int _heroY) {
	hero_y = _heroY;
}

void Field::setHeroX(int _heroX) {
	hero_x = _heroX;
}


void Field::drawCanvas(Cell ** newCells) {
	//newCells = new Cell*[height];
	//for (int i = 0; i < height; i++) {
	//	newCells[i]= new Cell[width];
	//}

	for (int i = 0; i < width; i++) {

		newCells[0][i].setType("#");

	}

	for (int i = 1; i < height - 1; i++) {
		for (int j = 0; j < width; j++) {

			if (j == 0 || j == width - 1) {
				newCells[i][j].setType("#");
			}
			else {
				if (!(hero_x == j && hero_y == i)) {
					newCells[i][j].setType(" ");
				}
				else {
					newCells[i][j].setType("0");
				}
			}
		}
	}
	for (int i = 0; i < width; i++) {
		newCells[height - 1][i].setType("#");
	}

	

}
Cell**  Field:: getCells() {
	return cells;
}
void Field::setCells(Cell** newCells) {
	
	cells = newCells;
	//std::cout << cells[0][0].getType();
}
/*
void Field::drawCanvas(Hero hero, std::vector < std::vector <Cell> > &newCells) {

	if (height > 0) {
		newCells.resize(height);

		for (int i = 0; i < height; i++) {
			newCells[i].resize(width);
		}
	}

	for (int i = 0; i < width; i++) {

		newCells[0][i].setType("#");
		
	}

	for (int i = 1; i < height - 1; i++) {
		for (int j = 0; j < width; j++) {

			if (j == 0 || j == width - 1) {
				newCells[i][j].setType("#");
			}
			else {
				if (!(hero_x == j && hero_y == i)) {
					newCells[i][j].setType(" ");
				}
				else {
					newCells[i][j].setType("0");
				}
			}
		}
	}
	for (int i = 0; i < width; i++) {
		newCells[height - 1][i].setType("#");
	}

	
}

*/

//std::vector < std::vector <Cell> >& Field::getCells() {
//	return cells;
//}
