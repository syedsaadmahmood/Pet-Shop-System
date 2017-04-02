#include<iostream>
#include<string>
#include<cstring>
using namespace std;


class Pet {
protected:
	string name;
	string sound;
	string feed;
public:
	Pet(string n, string sd, string fd)
	{
		name = n;
		sound = sd;
		feed = fd;
	}
	virtual string getname() = 0;
	virtual string getsound() = 0;
	virtual string getfeed() = 0;
};
