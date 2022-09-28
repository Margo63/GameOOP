#include "Cell.h"
Cell::Cell(){
    patency = true;
    type = "border";
}
Cell::Cell(bool patency = true,std::string type="border") :patency(patency),type(type) {}

Cell::Cell(const Cell& obj)
{
	type = obj.type;
	patency = obj.patency;
}
//Cell::Cell & Cell::operator=(const Cell& obj) {

    /*
    if (this != &obj) {
        delete[]data;
        size = obj.size;
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = obj.data[i];
        }
    }*/
  //  return *this;
//}
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
bool Cell::isHeroHere() {
    if (type == "hero") {
       return true;
    }
    else {
        return false;
    }
}