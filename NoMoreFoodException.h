#include <iostream>
#include <exception>
using namespace std;

class NoMoreFoodException : public exception
{
public:
	char * what() throw ()
	{
		return "Food has ended";
	}
};