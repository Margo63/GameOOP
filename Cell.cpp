#include "Cell.h"

Cell::Cell(){
    patency = true;
   // type = "border";
    isExit = false;
}
Cell::Cell(bool patency = true,std::string object="border") :patency(patency),object(object) {}

Cell::Cell(const Cell& obj)
{
	object = obj.object;
    creature = obj.creature;
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
	object = obj.object;
	
}
/*
void Cell::setType(std::string _type) {
	type = _type;
    if (_type == "pain") {
        AgeEventFactory* a_event = new AgeEventFactory;
        cell_event = a_event->createEvent();
    }
    if (_type == "add_exit") {
        ExitEventFactory* e_event = new ExitEventFactory;
        cell_event = e_event->createEvent();
    }
    if (_type == "add_wall") {
        WallEventFactory* w_event = new WallEventFactory;
        cell_event = w_event->createEvent();
    }
    if (_type == "plus_health") {
        HealthEventFactory* h_event = new HealthEventFactory;
        cell_event = h_event->createEvent();
    }
}
*/
void Cell::callEvent(int& heroX,int &heroY,Hero&hero,Cell& cell) {
    cell_event->move(heroX,heroY);
    cell_event->changeAge(hero);
    cell_event->changeHeroHealth(hero);
    isExit = cell_event->addExit();
    cell_event->addWall(cell);
    //if (type == "wall") {
     //   patency = false;
    //}
    
    
    
}

void Cell::setPatency(bool _patency) {
	patency = _patency;
}

bool Cell::getPatency() {
	return patency;
}

/*std::string Cell::getType() {
	return type;
}*/
bool Cell::isHeroHere() {
    if (creature == "hero") {
       return true;
    }
    else {
        return false;
    }
}
bool Cell::isExitHere() {
    return isExit;
}

void Cell:: setObject(std::string obj) {
    if (obj == "pain") {
        AgeEventFactory* a_event = new AgeEventFactory;
        cell_event = a_event->createEvent();
    }
    if (obj == "add_exit") {
        ExitEventFactory* e_event = new ExitEventFactory;
        cell_event = e_event->createEvent();
    }
    if (obj == "add_wall") {
        WallEventFactory* w_event = new WallEventFactory;
        cell_event = w_event->createEvent();
    }
    if (obj == "plus_health") {
        HealthEventFactory* h_event = new HealthEventFactory;
        cell_event = h_event->createEvent();
    }
    this->object = obj;

}
void Cell::setCreature(std::string creature) {
    this->creature = creature;
}

std::string Cell::getCreature() {
    return creature;
}

std::string Cell::getObject() {
    return object;
}