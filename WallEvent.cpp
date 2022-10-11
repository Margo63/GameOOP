#include "WallEvent.h"
#include "Cell.h"
void WallEvent::changeAge(Hero& hero) {}
void WallEvent::changeHeroHealth(Hero& hero) {}
bool WallEvent::addExit() { return false; }
void WallEvent::addWall(Cell& cell) {
	cell.setObject("wall");
	cell.setPatency(false);
}
void WallEvent::move(int& heroX, int& heroY) {}