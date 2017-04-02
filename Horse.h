#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class Horse :public Pet {
public:
	Horse() :Pet("Horse", "Neigh", "Grass")
	{
	}
	string getname()
	{
		return Pet::name;

	}
	string getsound()
	{
		return Pet::sound;
	}
	string getfeed()
	{
		return Pet::feed;
	}
};
