#include "FieldView.h"

void FieldView::drawField() {
	//std::cout << field.getCells().size();
	std::system("cls");
	//std::cout << fi.getHeight();
	for (int i = 0; i < field.getHeight(); i++) {
		for (int j = 0; j < field.getWidth(); j++) {

			std::cout << field.getCells()[i][j].getType();
		}
		std::cout << std::endl;
	}
}

void FieldView::setField(Field _field)
{
	field = _field;
	//std::cout << field.getCells()[0][0].getType();
}

Field FieldView::getSmt() {
	//std::cout << field.getHeight();
	return field;
}

