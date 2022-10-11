#include "FieldView.h"

void FieldView::drawField() {
	for (int i = 0; i < field.getHeight(); i++) {
		for (int j = 0; j < field.getWidth(); j++) {
			
			if (field.getCells()[i][j].getCreature() == "hero") {
				std::cout << "0";
			} else{
				if (field.getCells()[i][j].getObject() == "border") {
					std::cout << "#";
				}
				if (field.getCells()[i][j].getObject() == "wall") {
					std::cout << "_";
				}
				if (field.getCells()[i][j].getObject() == "inside") {
					std::cout << " ";
				}
				if (field.getCells()[i][j].getObject() == "pain") {
					std::cout << "^";
				}
				if (field.getCells()[i][j].getObject() == "add_exit") {
					std::cout << "+";
				}
				if (field.getCells()[i][j].getObject() == "add_wall") {
					std::cout << "@";
				}
				if (field.getCells()[i][j].getObject() == "plus_health") {
					std::cout << "*";
				}
				if (field.getCells()[i][j].getObject() == "exit") {
					std::cout << "e";
				}
			}
			

			
		}
		std::cout << std::endl;
	}
}

void FieldView::setField(Field _field)
{
	field = _field;
	//std::cout << field.getCells()[0][0].getType();
}

//Field FieldView::getSmt() {
	//std::cout << field.getHeight();
	//return field;
//}

