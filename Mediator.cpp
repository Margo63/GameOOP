#include "Mediator.h"

void Mediator::gameProcessing() {

	std::cout << "to on game - start\nto off game end\nchange size - size\nget info about hero - info\n";
	state.setComand(comand.readComand());
	state.comandProccesing();
	
	Hero hero;
	Field field;
	FieldView fieldView;
	Cell** newCells;
	newCells = new Cell * [field.getHeight()];
	for (int i = 0; i < field.getHeight(); i++) {
		newCells[i] = new Cell[field.getWidth()];
	}
	field.setCells(newCells);


		newCells[5][5].setObject("pain");


		newCells[12][12].setObject("plus_health");

		newCells[7][12].setObject("add_exit");
		newCells[12][7].setObject("add_wall");
		
	while (!state.getStatusGame())
	{
		
		hero = state.getHero();
		
		

		field = state.getField();
		fieldView = state.getFieldView();

		field.drawCanvas(newCells,hero);
		field.setCells( newCells);
		state.setField(field);
		
		
		fieldView.setField(field);
		fieldView.drawField();
		state.setHero(hero);
		for (int i = 0; i < field.getWidth(); i++) {
			for (int j = 0; j < field.getHeight(); j++) {
				
				if (field.getCells()[j][i].isExitHere()||state.getHero().getHealth()==0) {
					state.setComand("end");
					state.comandProccesing();
				}
			}
			
		}


		

		state.setComand("info");
		state.comandProccesing();

		state.setComand(comand.readComand());
		state.comandProccesing();

		
		
		
	}
	for (int i = 0; i < field.getHeight(); i++) {
			delete[] newCells[i];
		}
	delete[] newCells;
	std::cout << "game over" << '\n';
}
