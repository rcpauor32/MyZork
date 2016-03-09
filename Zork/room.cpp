#include "room.h"
#include <stdio.h>

void Rooms::SetName(char* room_name) {
	name = room_name;
}
void Rooms::SetDescription(char* room_desc){
	description = room_desc;
}

void Rooms::Look() {
	printf("You look around.\n\n  - %s\n\n%s", name, description);
}