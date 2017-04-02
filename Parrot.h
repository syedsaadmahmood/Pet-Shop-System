#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class Parrot :public Pet {
public:
	Parrot() :Pet("Parrot", "Chirp", "Fruits")
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
