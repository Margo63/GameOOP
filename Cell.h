#pragma once

#include <string>
#include"Event.h"
/*#include "AgeEvent.h"
#include "HealthEvent.h"
#include "WallEvent.h"
#include "ExitEvent.h"

#include "EventFactory.h"
*/
#include "AgeEventFactory.h"
#include "ExitEventFactory.h"
#include "HealthEventFactory.h"
#include "WallEventFactory.h"

class Cell
{
private:
	
	//std::string type;
	//int x;
	//int y;
	bool patency;
	Event* cell_event;
	bool isExit;
	std::string object;
	std::string creature;
	//Position point;
public:
	
	
	Cell();
	Cell(bool patency,std::string object);
	Cell(const Cell& obj);
	Cell& operator=(const Cell& obj) {
		if (this != &obj) {
			
			object = obj.object;
			creature = obj.creature;
			patency = obj.patency;
		}
		return *this;
	}
	//Cell& operator=(const Cell& obj);

	Cell(const Cell& obj,const Cell& obj2);

	//void setType(std::string _type);
	void setPatency(bool _patency);
	bool getPatency();
	//Position getPoint();

	//std::string getType();
	bool isHeroHere();
	bool isExitHere();
	void callEvent(int& heroX,int& heroY,Hero&hero, Cell& cell);
	void setObject(std::string obj);
	void setCreature(std::string creature);
	std::string getObject();
	std::string getCreature();
};

