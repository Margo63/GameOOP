#include "Mediator.h"

void Mediator::gameProcessing() {

	state.setComand(comand.readComand());
	state.comandProccesing();

	

	while (!state.getStatusGame())
	{
		
		FieldView field_view = state.getFieldView();
		Field field = state.getField();
		Cell** newCells = field.getCells();

		newCells = new Cell * [field.getHeight()];
		for (int i = 0; i < field.getHeight(); i++) {
			newCells[i] = new Cell[field.getWidth()];
		}
		field.drawCanvas(newCells);
		field.setCells( newCells);
		state.setField(field);
		//std::cout << state.getField().getHeroX();
		//std::cout << field.getCells()[0][0].getType();

		field_view.setField(field);
		field_view.drawField();
		

		state.setComand(comand.readComand());
		state.comandProccesing();

		
		
		
	}
	//for (int i = 0; i < field.getHeight(); i++) {
	//		delete newCells[i];
	//	}
	//	delete newCells;
	std::cout << "game over" << '\n';
}
