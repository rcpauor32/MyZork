#include "room.h"

class Exits {
public:
	const char* exit_dir;
	const Rooms* origin;
	const Rooms* nextRoom;

	const Rooms* Exits::MoveRoom(Rooms* current_room);

};