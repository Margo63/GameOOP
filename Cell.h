#pragma once
#include "Position.h"
#include <string>
class Cell
{
private:
	std::string type;
	int x;
	int y;
	//Position point;
public:
	Cell();
	Cell(std::string type);
	Cell(const Cell& obj);
	Cell(const Cell& obj,const Cell& obj2);

	void setType(std::string _type);

	//Position getPoint();

	std::string getType();
};

