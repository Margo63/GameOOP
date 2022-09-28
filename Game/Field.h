#pragma once

#include <iostream>
#include<vector>
#include"Hero.h"
#include"Cell.h"
class Field
{
private:
	int width;
	int height;
	int hero_x = 1;
	int hero_y = 1;
	
	//std::vector < std::vector <Cell> > cells;
	Cell** cells;
	
	

public:

	Field();
	Field(int width, int height,int hero_x,int hero_y);

	Field(const Field& obj);
	
	Field& operator=(const Field& obj) {
		if (this != &obj) {
			//for (int i = 0; i < height; i++) {
			//	delete [] cells[i];
			//}
			//delete[]cells;
			width = obj.width;
			height = obj.height;
			hero_x = obj.hero_x;
			hero_y = obj.hero_y;
			
			cells = new Cell*[height];
			for (int i = 0; i < height; i++) {
				cells[i] = new Cell[width];
			}

			for (int i = 0; i < height; i++) {
				for (int j = 0; j < width; j++) {
					cells[i][j] = obj.cells[i][j];
				}
				
			}
		}
		return *this;
	}

	Field(Field&& obj) {
		std::swap(width, obj.width);
		std::swap(height, obj.height);
		std::swap(hero_x, obj.hero_x);
		std::swap(hero_y, obj.hero_y);
		std::swap(cells, obj.cells);
	}

	Field& operator=(Field&& obj) {
		if (this != &obj) {
			std::swap(width, obj.width);
			std::swap(height, obj.height);
			std::swap(hero_x, obj.hero_x);
			std::swap(hero_y, obj.hero_y);
			std::swap(cells, obj.cells);
		}
		return *this;
	}
	
	//Field(Field& obj);
	void setSize(int _width, int _height);
	int getWidth();
	int getHeight();
	//void drawCanvas(Hero hero, std::vector < std::vector <Cell> > &newCells);
	int getHeroX();
	int getHeroY();
	void setHeroY(int _heroY);
	void setHeroX(int _heroX);
	//std::vector < std::vector <Cell> > & getCells();
	void drawCanvas(Cell ** newCells);
	Cell** getCells();
	void setCells(Cell** newCells);

	//void getCanvas();

};

