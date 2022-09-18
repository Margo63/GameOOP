#include "Cell.h"
Cell::Cell(){}
Cell::Cell(std::string type=" ") :type(type) {}

Cell::Cell(const Cell& obj)
{
	type = obj.type;
}

Cell::Cell(const Cell& obj,const Cell& obj2)
{
	type = obj.type;
	
}




void Cell::setType(std::string _type) {
	type = _type;
}

std::string Cell::getType() {
	return type;
}