#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class Dog :public Pet {
public:
	Dog() :Pet("Dog", "Bark", "Dog Food")
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