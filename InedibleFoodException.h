#include <iostream>
#include <exception>
using namespace std;

class InedibleFoodException : public exception
{
public:
	char * what() throw ()
	{
		return "Food is Inedible for this Pet";
	}
};