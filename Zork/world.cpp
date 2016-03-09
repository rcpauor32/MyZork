#include "world.h"
#include "room.h"
#include "exit.h"

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
	DwAngel->description = "123melapelodelreves";

	Studio->name = "Studio";
	Studio->description = "melacascoviendoacarrasco";

	Stone_R->name = "Stone Room";
	Stone_R->description = "estopamedalamejorfarlopa";

	Mirror_R->name = "Mirror Room";
	Mirror_R->description = "enelespejomeladespellejo";

	Library->name = "Library";
	Library->description = "esbuendiasihaypollaentuvida";

	Dark_R->name = "Dark Room";
	Dark_R->description = "hepreparadounacenadepicoteo,osapuntais";

	Waiting_R->name = "Waiting Room";
	Waiting_R->description = "cuantomasesperoconmasesmerotelaesfero";

	Reception->name = "Reception";
	Reception->description = "cuandodigodiegodiegodigodigo...polla";

	// ----

	// Exits Set Up
}