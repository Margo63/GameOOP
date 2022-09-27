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

