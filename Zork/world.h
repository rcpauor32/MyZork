
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
	}

