#ifndef _WORLD_H_
#define _WORLD_H_

#include "globals.h"
#include "exit.h"
#include "player.h"
#include "room.h"

class World {
public:
	Rooms* Secret_R = new Rooms("Secret Room", "You see a dark room, just illuminated by your faint torch.\nFirst you dont realize but suddendly you notice a hooded figure standing in front of you. He doesn't seem to have seen you yet.", Secret);
	Exits* exit = new Exits[NUM_EXITS];
	Players* player = new Players;

	void CreateWorld();
};

#endif