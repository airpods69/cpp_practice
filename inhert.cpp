#include <iostream>
#define n '\n'

class building
{
	int rooms;
	int floors;
	int area;
	public:
	void set_rooms(int num);
	int get_rooms();
	void set_floors(int num);
	int get_floors();
	void set_area(int num);
	int get_area();
};

class house : public building 
{
	int bedrooms;
	int baths;
	public:
	void set_bedrooms(int num);
	int get_bedrooms();
	void set_baths(int num);
	int set_baths();
};
