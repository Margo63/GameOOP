#include "FieldView.h"

void FieldView::drawField() {
	//std::cout << field.getCells().size();
	//std::system("cls");
	//std::cout << fi.getHeight();
	for (int i = 0; i < field.getHeight(); i++) {
		for (int j = 0; j < field.getWidth(); j++) {
			
			if (field.getCells()[i][j].getType() == "hero") {
				//std::cout << field.getCells()[i][j].getType();
				std::cout << "0";
			}
			if (field.getCells()[i][j].getType() == "border") {
				//std::cout << field.getCells()[i][j].getType();
				std::cout << "#";
			}
			if (field.getCells()[i][j].getType() == "wall") {
				//std::cout << field.getCells()[i][j].getType();
				std::cout << "_";
			}
			if (field.getCells()[i][j].getType() == "inside") {
				//std::cout << field.getCells()[i][j].getType();
				std::cout << " ";
			}
			if (field.getCells()[i][j].getType() == "pain") {
				std::cout << "*";
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

