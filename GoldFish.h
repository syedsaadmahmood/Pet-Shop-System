#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class GoldFish :public Pet {
public:
	GoldFish() :Pet("GoldFish", "eh-eh", "FishFeed")
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
