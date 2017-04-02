#include <iostream>
#include <exception>
using namespace std;

class PetNotCompatibleException: public exception
{
public:
	char * what() throw ()
	{
		return "Pet is incompatible,still want to add(y,n)?";
	}
};