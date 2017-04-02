#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int size;
	ifstream infile("file.txt");
	infile >> size;
	int *arr1=new int [size];
	int *arr2 = new int[size];
	string *arr3 = new string[size];

	for (int i = 0; i < size; i++)
	{
		infile >> arr1[i];
		infile >> arr2[i];
		infile >> arr3[i];
	}

	for (int j = 0; j < size; j++)
	{
		cout << arr3[j] << endl;
	}

}