#include "room.h"

class Exits {
public:
	const char* exit_dir;
	const Rooms* origin;
	const Rooms* nextRoom;

	void SetDir(char* direction);
	void SetOrigin(const Rooms* room);
	void SetNRoom(Rooms* room);

	const Rooms* Exits::MoveRoom(Rooms* room);

};