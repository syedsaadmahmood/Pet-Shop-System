#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class Cat :public Pet {
public:
	Cat() :Pet("Cat", "Meow", "Milk")
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
