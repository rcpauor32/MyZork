#include "world.h"
#include "room.h"
#include "exit.h"
#include "player.h"
#include <stdio.h>

void World::CreateWorld() {
	
	room[Secret].name = "Secret Room";
	room[Secret].description = "You see a dark room, just illuminated by your faint torch.\nFirst you dont realize but suddendly you notice a hooded figure standing in front of you. He doesn't seem to have seen you yet.";
	room[Secret].room_num = Secret;

	room[Surgery].name = "Surgery";
	room[Surgery].description = "The whole room has an old and rusty feeling. An strange smell surrounds you. You can feel a dark and heavy 'entity' ajust behind you but it may just be your imagination.";

	room[UpAngel].name = "Upstairs Angel Room";
	room[UpAngel].description = "A huge angel statue is standing at the middle of the room. From where you are you can just see the bust but it is enough to notice that his head is missing.\nYou look downwards. There are stairs leading to the base of the statue.";
				 
	room[DwAngel].name = "Downstairs Angel Room";
	room[DwAngel].description = "You can see the statue from the bottom and it is even more impresive from here. You are in a round room with few exits.";

	room[Studio].name = "Studio";
	room[Studio].description = "You came up in a little studio with a desk a little light that illuminates the small room.\nYou can see few drawer in the desk.";

	room[Stone].name = "Stone Room";
	room[Stone].description = "The room is completly made of stone and granite. There is an statue in a corner that resembles a woman covering her face with her own hands.";

	room[Mirror].name = "Mirror Room";
	room[Mirror].description = "The whole room is surrounded by 2 meters high mirrors that refelect everything in the place including you.";

	room[Library].name = "Library";
	room[Library].description = "Sheleves plenty of books are fulling the whole, huge library. You can see some books standing out from the rest. Why?";

	room[Dark].name = "Dark Room";
	room[Dark].description = "Nothing can bee seen in this room, the darkness is so intense not even your torch is able to illuminate it. Is this even possible?\nFeels    like the darkness itself it's an entity.";

	room[Waiting].name = "Waiting Room";
	room[Waiting].description = "cuantomasesperoconmasesmerotelaesfero";

	room[Reception].name = "Reception";
	room[Reception].description = "cuandodigodiegodiegodigodigo...polla";

	

	

		exit[SEC_SUR].front_dir = "south"; 
		exit[SEC_SUR].back_dir =  "north";
		exit[SEC_SUR].origin = room[Secret];
		exit[SEC_SUR].nextRoom = room[Surgery];

		exit[SUR_UA].front_dir = "south";
		exit[SUR_UA].back_dir = "north";
		exit[SUR_UA].origin = room[Surgery];
		exit[SUR_UA].nextRoom = room[UpAngel];
		exit[SUR_UA].open = false;
								
		exit[UA_STU].front_dir = "west";
		exit[UA_STU].back_dir = "east";
		exit[UA_STU].origin = room[UpAngel];
		exit[UA_STU].nextRoom = room[Studio];

		exit[UA_DA].front_dir = "down";
		exit[UA_DA].back_dir = "up";
		exit[UA_DA].origin = room[UpAngel];
		exit[UA_DA].nextRoom = room[DwAngel];

		exit[DA_STO].front_dir = "west";
		exit[DA_STO].back_dir = "east";
		exit[DA_STO].origin = room[DwAngel];
		exit[DA_STO].nextRoom = room[Stone];

		exit[STO_MRR].front_dir = "south";
		exit[STO_MRR].back_dir = "north";
		exit[STO_MRR].origin = room[Stone];
		exit[STO_MRR].nextRoom = room[Mirror];

		exit[DA_WAI].front_dir = "south";
		exit[DA_WAI].back_dir = "north";
		exit[DA_WAI].origin = room[DwAngel];
		exit[DA_WAI].nextRoom = room[Waiting];

		exit[WAI_REC].front_dir = "south";
		exit[WAI_REC].back_dir = "north";
		exit[WAI_REC].origin = room[Waiting];
		exit[WAI_REC].nextRoom = room[Reception];

		exit[DA_LIB].front_dir = "east";
		exit[DA_LIB].back_dir = "west";
		exit[DA_LIB].origin = room[DwAngel];
		exit[DA_LIB].nextRoom = room[Library];
					
		exit[LIB_DK].front_dir = "south";
		exit[LIB_DK].back_dir = "north";
		exit[LIB_DK].origin = room[Library];
		exit[LIB_DK].nextRoom = room[Dark];

	// ----

	// Player Set Up
	player->current_room = room[Surgery];
}
