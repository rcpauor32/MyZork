#ifndef _ROOM_H_
#define _ROOM_H_

class Rooms {
public:
	Rooms(const char* name, const char* description, const int room_num);
	~Rooms();

	void Look();

};

#endif