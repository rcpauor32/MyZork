#include "header.h"

int Main() {
	Start();
	
	while (g.player_input) {
		Draw();

		scanf_s("%c ", &g.player_input, 1);

		Move();
	}

}