#include "exit.h"
#include "room.h"

void Exits::MoveRoom(int& current_room) {
	if (current_room == origin)
		current_room = nextRoom;
	else
		current_room = origin;

}