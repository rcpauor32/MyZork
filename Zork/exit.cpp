#include "exit.h"
#include "room.h"

void Exits::SetDir(char* direction) {
	exit_dir = direction;
}
void Exits::SetOrigin(const Rooms* room) {
	origin = room;
}
void Exits::SetNRoom(Rooms* room) {
	nextRoom = room;
}

const Rooms* Exits::MoveRoom(Rooms* room) {
	if (room == origin)
		return nextRoom;
	else
		return origin;

}