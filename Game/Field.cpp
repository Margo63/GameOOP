#include "Field.h"
#include "Cell.h"


Field::Field() {
	width = 30;
	height = 20;
	hero_x = 1;
	hero_y = 1;
	cells = new Cell * [height];
	for (int i = 0; i < height; i++) {
		cells[i] = new Cell[width];
	}
}
Field::Field(int width=30,int height=20,int hero_x=1,int hero_y=1)
	:width(width),height(height), hero_x(hero_x), hero_y(hero_y){

	cells = new Cell * [height];
	for (int i = 0; i < height; i++) {
		cells[i] = new Cell[width];
	}

}

Field::Field(const Field& obj) {
	width = obj.width;
	height = obj.height;
	hero_x = obj.hero_x;
	hero_y = obj.hero_y;
	

}

/*
Field::Field& operator=(const Field& obj) {
	if (this != &obj) {
		for (int i = 0; i < height; i++) {
			delete cells[i];
		}
		delete[]cells;
		width = obj.width;
		height = obj.height;
		hero_x = obj.hero_x;
		hero_y = obj.hero_y;
		//size = obj.size;
		//data = new int[size];
		cells = new Cell * [height];
		for (int i = 0; i < height; i++) {
			cells[i] = new Cell[width];
		}

		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				cells[i][j] = obj.cells[i][j];
			}
			//data[i] = obj.data[i];
		}
	}
	return *this;
}

Field::Field(Field&& obj) {
	std::swap(width, obj.width);
	std::swap(height, obj.height);
	std::swap(hero_x, obj.hero_x);
	std::swap(hero_y, obj.hero_y);
	std::swap(cells, obj.cells);
}

Field::Field& operator=(Field&& obj) {
	if (this != &obj) {
		std::swap(width, obj.width);
		std::swap(height, obj.height);
		std::swap(hero_x, obj.hero_x);
		std::swap(hero_y, obj.hero_y);
		std::swap(cells, obj.cells);
	}
	return *this;
}
*/
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

	
	newCells[5][5].setType("pain");

	for (int i = 0; i < width; i++) {

		newCells[0][i].setType("border");

	}

	for (int i = 1; i < height - 1; i++) {
		for (int j = 0; j < width; j++) {

			if (j == 0 || j == width - 1) {
				newCells[i][j].setType("border");
			}
			else {
				if (!(hero_x == j && hero_y == i)) {
					
					newCells[i][j].setType("inside");
				}
				else {
					if (newCells[i][j].getType() == "pain") {
						newCells[i][j].ev.move(hero_x, hero_y);
					}
					

					newCells[hero_y][hero_x].setType("hero");
				}
			}
		}
	}
	for (int i = 0; i < width; i++) {
		newCells[height - 1][i].setType("border");
	}

	if (width == 22 && height == 22) {
		newCells[10][10].setPatency(false);
		newCells[10][10].setType("wall");
	}

	newCells[5][5].setType("pain");
	
	

	

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
