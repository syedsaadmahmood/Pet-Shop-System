#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class Lion :public Pet {
public:
	Lion() :Pet("Lion", "Roar", "Meat")
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
