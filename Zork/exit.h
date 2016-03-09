#include "room.h"

class Exits {
public:
	const char* front_dir, * back_dir;
	const Rooms* origin;
	const Rooms* nextRoom;
	bool open = true;

	const Rooms* Exits::MoveRoom(Rooms* current_room);

};