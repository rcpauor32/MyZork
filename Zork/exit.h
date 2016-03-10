#ifndef _EXITS_H_
#define _EXITS_H_

#include "room.h"
#include "globals.h";

class Exits {
public:

	const char* front_dir, * back_dir;
	const int origin, nextRoom;
	bool open = true;

	void Exits::MoveRoom(int& current_room);

};

#endif // !_EXITS_H_