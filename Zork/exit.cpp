#include "exit.h"
#include "room.h"

const Rooms* Exits::MoveRoom(Rooms* current_room) {
	if (current_room == origin)
		return nextRoom;
	else
		return origin;

}