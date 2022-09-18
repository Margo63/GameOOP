#include "Field.h"
#include "Cell.h"


Field::Field() {
}


Field::Field(int width=30,int height=20):width(width),height(height) {}
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


void Field::drawCanvas(Hero hero) {

	if (height > 0) {
		cells.resize(height);

		for (int i = 0; i < height; i++) {
			cells[i].resize(width);
		}
	}

	for (int i = 0; i < width; i++) {
		Cell c ("#");
		cells[0][i] = c;

		//cells[0][i].setType("#");
		
	}
	//cout << endl;
	for (int i = 1; i < height - 1; i++) {
		for (int j = 0; j < width; j++) {

			if (j == 0 || j == width - 1) {
				cells[i][j].setType("#");
				//cells[i][j].getPoint().setPosition(j, i);
				//cout << "#";
			}
			else {
				if (!(hero.getX() == j && hero.getY() == i)) {
					cells[i][j].setType(" ");
					//cells[i][j].getPoint().setPosition(j, i);
					//cout << " ";
				}
				else {
					cells[i][j].setType("0");
					//cells[i][j].getPoint().setPosition(j, i);
					//cout << "0";
				}
			}
		}
		//cout << endl;
	}
	for (int i = 0; i < width; i++) {
		cells[height - 1][i].setType("#");
		//cells[height - 1][i].getPoint().setPosition(i, height - 1);

	}

	/////////////////////////////////////////////
	std::system("cls");


	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			std::cout << cells[i][j].getType();
		}
		std::cout << std::endl;
	}


	//for (int i = 0; i < height; i++) {
	//	cells[i].clear();
//	}
	//cells.clear();
}

//void Field::getCanvas() {
	//system("cls");
	//for (int i = 0; i < height; i++) {
	//	for (int j = 0; j < width; j++) {
	//		cout << cells[i][j].getType();
	//	}
	//	cout << endl;
	//}
	//std::cout << cells.size();
	//for (int i = 0; i < width; i++) {
	//	cells[i].clear();
	//}
	//cells.clear();

//}