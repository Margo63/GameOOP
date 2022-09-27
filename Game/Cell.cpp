#include "Cell.h"
Cell::Cell(){}
Cell::Cell(bool patency = true) :patency(patency) {}

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

void Cell::setPatency(bool _patency) {
	patency = _patency;
}

bool Cell::getPatency() {
	return patency;
}

std::string Cell::getType() {
	return type;
}