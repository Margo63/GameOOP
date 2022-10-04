#include "Mediator.h"

void Mediator::gameProcessing() {

	std::cout << "to on game - start\nto off game end\nchange size - size\nget info about hero - info\n";
	state.setComand(comand.readComand());
	state.comandProccesing();
	

	while (!state.getStatusGame())
	{
		
		Field field = state.getField();
		FieldView fieldView = state.getFieldView();
		Cell** newCells = field.getCells();
		

		newCells = new Cell * [field.getHeight()];
		for (int i = 0; i < field.getHeight(); i++) {
			newCells[i] = new Cell[field.getWidth()];
		}
		field.drawCanvas(newCells);
		field.setCells( newCells);
		state.setField(field);
		

		fieldView.setField(field);
		fieldView.drawField();
		

		state.setComand(comand.readComand());
		state.comandProccesing();

		
		for (int i = 0; i < field.getHeight(); i++) {
			delete[] newCells[i];
		}
		delete[] newCells;
		
	}
	
	std::cout << "game over" << '\n';
}
