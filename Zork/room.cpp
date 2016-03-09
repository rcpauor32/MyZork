#include "room.h"
#include <stdio.h>

void Rooms::Look() {
	printf("You look around.\n\n  - %s\n\n%s", name, description);
}