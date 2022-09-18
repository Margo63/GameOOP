#pragma once

#include <iostream>
#include<vector>
#include"Hero.h"
#include"Cell.h"
class Field
{
private:
	int width;// = 20;
	int height;// = 20;
	std::vector < std::vector <Cell> > cells ;

public:

	Field();
	Field(int width, int height);
	//Field(Field& obj);
	void setSize(int _width, int _height);
	int getWidth();
	int getHeight();
	void drawCanvas(Hero hero);

	//void getCanvas();

};

