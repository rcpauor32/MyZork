#include "world.h"
#include "room.h"
#include "exit.h"
#include "player.h"
#include <stdio.h>

void World::CreateWorld() {
	// Rooms Set Up

	Rooms* Secret_R = new Rooms;
	Rooms* Surgery = new Rooms;
	Rooms* UpAngel = new Rooms;
	Rooms* DwAngel = new Rooms;
	Rooms* Studio = new Rooms;
	Rooms* Stone_R = new Rooms;
	Rooms* Mirror_R = new Rooms;
	Rooms* Library = new Rooms;
	Rooms* Dark_R = new Rooms;
	Rooms* Waiting_R = new Rooms;
	Rooms* Reception = new Rooms;

	Secret_R->name = "Secret Room";
	Secret_R->description = "You see a dark room, just illuminated by your faint torch.\nFirst you dont realize but suddendly you notice a hooded figure standing in front of you. He doesn't seem to have seen you yet.";

	Surgery->name = "Surgery";
	Surgery->description = "The whole room has an old and rusty feeling. An strange smell surrounds you. You can feel a dark and heavy 'entity' ajust behind you but it may just be your imagination.";

	UpAngel->name = "Upstairs Angel Room";
	UpAngel->description = "A huge angel statue is standing at the middle of the room. From where you are you can just see the bust but it is enough to notice that his head is missing.\nYou look downwards. There are stairs leading to the base of the statue.";

	DwAngel->name = "Downstairs Angel Room";
	DwAngel->description = "You can see the statue from the bottom and it is even more impresive from here. You are in a round room with few exits.";

	Studio->name = "Studio";
	Studio->description = "You came up in a little studio with a desk a little light that illuminates the small room.\nYou can see few drawer in the desk.";

	Stone_R->name = "Stone Room";
	Stone_R->description = "The room is completly made of stone and granite. There is an statue in a corner that resembles a woman covering her face with her own hands.";

	Mirror_R->name = "Mirror Room";
	Mirror_R->description = "The whole room is surrounded by 2 meters high mirrors that refelect everything in the place including you.";

	Library->name = "Library";
	Library->description = "Sheleves plenty of books are fulling the whole, huge library. You can see some books standing out from the rest. Why?";

	Dark_R->name = "Dark Room";
	Dark_R->description = "Nothing can bee seen in this room, the darkness is so intense not even your torch is able to illuminate it. Is this even possible?\nFeels    like the darkness itself it's an entity.";

	Waiting_R->name = "Waiting Room";
	Waiting_R->description = "cuantomasesperoconmasesmerotelaesfero";

	Reception->name = "Reception";
	Reception->description = "cuandodigodiegodiegodigodigo...polla";

	// ----

	// Exits Set Up

	Exits* SEC_SUR = new Exits;
	Exits* SUR_UAR = new Exits;
	Exits* UAR_STU = new Exits;
	Exits* UAR_DAR = new Exits;
	Exits* DAR_STO = new Exits;
	Exits* DAR_LB = new Exits;
	Exits* STO_MRR = new Exits;
	Exits* LB_DR = new Exits;
	Exits* DAR_WR = new Exits;
	Exits* WR_REC = new Exits;

	SEC_SUR->front_dir = "south";
	SEC_SUR->back_dir = "north";
	SEC_SUR->origin = Secret_R;
	SEC_SUR->nextRoom = Surgery;

	SUR_UAR->front_dir = "south";
	SUR_UAR->back_dir = "north";
	SUR_UAR->origin = Surgery;
	SUR_UAR->nextRoom = UpAngel;
	SUR_UAR->open = false;

	UAR_STU->front_dir = "west";
	UAR_STU->back_dir = "east";
	UAR_STU->origin = UpAngel;
	UAR_STU->nextRoom = Studio;

	UAR_DAR->front_dir = "down";
	UAR_DAR->back_dir = "up";
	UAR_DAR->origin = UpAngel;
	UAR_DAR->nextRoom = DwAngel;

	DAR_STO->front_dir = "west";
	DAR_STO->back_dir = "east";
	DAR_STO->origin = DwAngel;
	DAR_STO->nextRoom = Stone_R;

	STO_MRR->front_dir = "south";
	STO_MRR->back_dir = "north";
	STO_MRR->origin = Stone_R;
	STO_MRR->nextRoom = Mirror_R;

	DAR_WR->front_dir = "south";
	DAR_WR->back_dir = "north";
	DAR_WR->origin = DwAngel;
	DAR_WR->nextRoom = Waiting_R;

	WR_REC->front_dir = "sout";
	WR_REC->back_dir = "north";
	WR_REC->origin = Waiting_R;
	WR_REC->nextRoom = Reception;

	DAR_LB->front_dir = "east";
	DAR_LB->back_dir = "west";
	DAR_LB->origin = DwAngel;
	DAR_LB->nextRoom = Library;

	LB_DR->front_dir = "south";
	LB_DR->back_dir = "north";
	LB_DR->origin = Library;
	LB_DR->nextRoom = Dark_R;

	// ----

	// Player Set Up
	player->current_room = Surgery;
}
