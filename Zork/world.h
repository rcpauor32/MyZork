
class players {
public:
	int x;
	int y;
};

class rooms {
public:
	int x;
	int y;
	char* name;
};

class exits {
public:
	int x;
	int y;
	char* direction[6];
};

class world {
public:
	players* player = new players;
	rooms* room = new rooms[];
	exits* exit = new exits[];

	enum {
		Secret_R,
		Surgery,
		Studio,
		UpAR,
		DwnAR,
		Stone_R,
		Mirror_R,
		Library,
		Dark_R,
		Waiting_R,
		Reception
	};

	void CreateWorld() {
		// Room Set Up
		room[Secret_R].x = 1;
		room[Secret_R].y = 0;
		room[Secret_R].name = "Secret Room";

		room[Surgery].x = 1;
		room[Surgery].y = 1;
		room[Surgery].name = "Surgery";

		room[Studio].x = 0;
		room[Studio].y = 2;
		room[Studio].name = "Studio";

		room[UpAR].x = 1;
		room[UpAR].y = 2;
		room[UpAR].name = "Upstairs Angel Room";

		room[DwnAR].x = 1;
		room[DwnAR].y = 3;
		room[DwnAR].name = "Downstairs Angle Room";

		room[Stone_R].x = 0;
		room[Stone_R].y = 3;
		room[Stone_R].name = "Stone Room";

		room[Mirror_R].x = 0;
		room[Mirror_R].y = 4;
		room[Mirror_R].name = "Mirror Room";

		room[Library].x = 2;
		room[Library].y = 3;
		room[Library].name = "Library";

		room[Dark_R].x = 2;
		room[Dark_R].y = 4;
		room[Dark_R].name = "Dark Room";

		room[Waiting_R].x = 1;
		room[Waiting_R].y = 4;
		room[Waiting_R].name = "Waiting Room";

		room[Reception].x = 1;
		room[Reception].y = 5;
		room[Reception].name = "Reception";
		
		// --------

		// Exit Set Up

		//WIP

		// --------

		//player Set Up
		(*player).x = 2;
		(*player).y = 2;
		
		// --------

	}

};

