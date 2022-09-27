#pragma once
#include "Position.h"
#include <string>
class Cell
{
private:
	std::string type;
	int x;
	int y;
	bool patency;
	//Position point;
public:
	Cell();
	Cell(bool patency);
	Cell(const Cell& obj);
	Cell(const Cell& obj,const Cell& obj2);

	void setType(std::string _type);
	void setPatency(bool _patency);
	bool getPatency();
	//Position getPoint();

	std::string getType();
};

