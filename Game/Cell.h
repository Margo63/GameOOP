#pragma once

#include <string>
#include "AgeEvent.h"
class Cell
{
private:
	std::string type;
	//int x;
	//int y;
	bool patency;
	
	//Position point;
public:
	AgeEvent ev;
	
	Cell();
	Cell(bool patency,std::string type);
	Cell(const Cell& obj);
	Cell& operator=(const Cell& obj) {
		if (this != &obj) {
			
			type = obj.type;
			patency = obj.patency;
		}
		return *this;
	}
	//Cell& operator=(const Cell& obj);

	Cell(const Cell& obj,const Cell& obj2);

	void setType(std::string _type);
	void setPatency(bool _patency);
	bool getPatency();
	//Position getPoint();

	std::string getType();
	bool isHeroHere();
};

