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


void Field::drawCanvas(Cell ** newCells,Hero& hero) {

	

	for (int i = 0; i < width; i++) {

		//newCells[0][i].setType("border");
		newCells[0][i].setObject("border");
		newCells[0][i].setCreature("none");
	}

	for (int i = 1; i < height - 1; i++) {
		for (int j = 0; j < width; j++) {

			if (j == 0 || j == width - 1) {
				//newCells[i][j].setType("border");
				newCells[i][j].setObject("border");
				newCells[i][j].setCreature("none");
			}else {
				if ((hero_x == j && hero_y == i)) {
					if (newCells[i][j].getObject() == "pain" || newCells[i][j].getObject() == "add_wall"||
						newCells[i][j].getObject() == "add_exit") {

						
						
						newCells[i][j].callEvent(hero_x, hero_y, hero, newCells[i][j]);
						
					}
					if (newCells[i][j].getObject() == "plus_health") {
						
						if (hero.getAge() >= 35) {
						//	HealthEventFactory* a_event = new HealthEventFactory;
							newCells[i][j].callEvent(hero_x, hero_y, hero, newCells[i][j]);
							
						}
					}
					
					
					
					newCells[hero_y][hero_x].setCreature("hero");
					

					
				}
				else {
					/*if (e_x == j && e_y == i) {
						newCells[i][j].setType("add_wall");
					}
					if (w_x == j && w_y == i) {
						newCells[i][j].setType("wall");
					}*/
					if(newCells[i][j].getObject() != "wall" && newCells[i][j].getObject()!="plus_health"&& newCells[i][j].getObject() != "pain" && newCells[i][j].getObject() != "add_wall"&&newCells[i][j].getObject() != "add_exit")
						newCells[i][j].setObject("inside");
					newCells[i][j].setCreature("none");
				}
			}
		}
	}
	for (int i = 0; i < width; i++) {
		//newCells[height - 1][i].setType("border");
		newCells[height - 1][i].setObject("border");
	}

	if (width == 22 && height == 22) {
		newCells[10][10].setPatency(false);
		newCells[10][10].setObject("wall");
	}
	/*if (width > 5 && height > 5)
		newCells[5][5].setType("pain");

	if (width > 12 && height > 12)
		newCells[12][12].setType("plus_health");
		*/
	
	

	

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
