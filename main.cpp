#include<iostream>
#include<string>
#include<cstring>
#include "Pet.h"
#include "Horse.h"
#include "Parrot.h"
#include "GoldFish.h"
#include "Lion.h"
#include "Cat.h"
#include "Dog.h"
#include "PetNotCompatibleException.h"
#include "NoMoreFoodException.h"
#include "InedibleFoodException.h"

using namespace std;

int* displayFeed(Pet ** pt, int count) {



	int* fd = new int[6];
	for (int i = 0; i < 6; i++)
	{
		fd[i] = 0;
	}
	for (int i = 0; i < count; i++) {
		if (pt[i]->getname() == "Dog")
		{
			fd[0] = 1;

		}
		if (pt[i]->getname() == "Cat")
		{
			fd[1] = 1;

		}
		if (pt[i]->getname() == "Lion")
		{
			fd[2] = 1;

		}
		if (pt[i]->getname() == "GoldFish")
		{
			fd[3] = 1;

		}
		if (pt[i]->getname() == "Parrot")
		{
			fd[4] = 1;

		}
		if (pt[i]->getname() == "Horse")
		{
			fd[5] = 1;

		}

	}

	if (fd[0] == 1)
	{
		cout << "1-Dog Feed" << endl;
	}
	if (fd[1] == 1)
	{
		cout << "2-Milk" << endl;
	}
	if (fd[2] == 1)
	{
		cout << "3-Meat" << endl;

	}
	if (fd[3] == 1)
	{
		cout << "4-fish feed" << endl;
	}
	if (fd[4] == 1)
	{
		cout << "5-fruits" << endl;
	}
	if (fd[5] == 1)
	{
		cout << "6-Grass" << endl;
	}
	return fd;

}

int* displaynames(Pet ** pt, int count) {
	int* fd = new int[6];
	for (int i = 0; i < 6; i++)
	{
		fd[i] = 0;
	}
	for (int i = 0; i < count; i++) {
		if (pt[i]->getname() == "Dog")
		{
			fd[0] = 1;

		}
		if (pt[i]->getname() == "Cat")
		{
			fd[1] = 1;

		}
		if (pt[i]->getname() == "Lion")
		{
			fd[2] = 1;

		}
		if (pt[i]->getname() == "GoldFish")
		{
			fd[3] = 1;

		}
		if (pt[i]->getname() == "Parrot")
		{
			fd[4] = 1;

		}
		if (pt[i]->getname() == "Horse")
		{
			fd[5] = 1;

		}

	}

	if (fd[0] == 1)
	{
		cout << "1-Dog" << endl;
	}
	if (fd[1] == 1)
	{
		cout << "2-Cat" << endl;
	}
	if (fd[2] == 1)
	{
		cout << "3-Lion" << endl;

	}
	if (fd[3] == 1)
	{
		cout << "4-Goldfish" << endl;
	}
	if (fd[4] == 1)
	{
		cout << "5-parrot" << endl;
	}
	if (fd[5] == 1)
	{
		cout << "6-horse" << endl;
	}
	return fd;

}
void getpetname(int i)
{
	if (i == 1)
	{
		cout << "Dog";
	}
	else if (i == 2)
	{
		cout << "cat";
	}
	else if (i == 3)
	{
		cout << "lion";
	}
	else if (i == 4)
	{
		cout << "Goldfish";
	}
	else if (i == 5)
	{
		cout << "parrot";
	}
	else if (i == 6)
	{
		cout << "horse";
	}

}
void main() {


	int count = 0;
	bool flag = true;
	cout << "How many Pets do you want to buy" << endl;
	int nmbr;
	cin >> nmbr;
	Pet **pt = new Pet*[nmbr];
	while (flag == true && count < nmbr) {
		cout << "\t\t\tWelcome to Pet Shop system" << endl;
		cout << "\tPlease select the pet" << endl;
		cout << "1-Dog" << endl;
		cout << "2-Cat" << endl;
		cout << "3-Lion" << endl;
		cout << "4-GoldFish" << endl;
		cout << "5-Parrot" << endl;
		cout << "6-Horse" << endl;
		cout << "0-Exit" << endl;



		int choice;

		cin >> choice;
		cout << endl << endl;
		if (choice == 0) {
			flag = false;
		}
		if (choice == 1)

		{
			Dog *a = new Dog;
			cout << "I " << a->getsound() << endl;
			cout << "I eat " << a->getfeed() << endl;
			cout << "Will you like to buy me?(Y/N)" << endl;
			char ch;
			cin >> ch;


			if (ch == 'y' || ch == 'Y')
			{
				if (count == 0) {
					cout << "Pet Added" << endl;
					count++;
					pt = new Pet*[1];
					pt[0] = a;

				}
				else {
					bool flag = true;
					for (int i = 0; i < count; i++) {
						if (pt[i]->getname() == "Cat" || pt[i]->getname() == "GoldFish" || pt[i]->getname() == "Lion") {
							flag = false;

						}
						i++;
					}
					if (flag == false) {
					
						try
						{
							throw PetNotCompatibleException();
						}
						catch (PetNotCompatibleException& e)
						{
							cout << e.what() << endl;
						}
						char choice;
						cin >> choice;
						if (choice == 'y' || choice == 'Y') {
							cout << "Pet Added" << endl;

							pt[count] = a;
							count++;

						}

					}
					else {
						cout << "Pet Added" << endl;

						pt[count] = a;
						count++;

					}

				}

			}
			else if (ch == 'N' || ch == 'n')
			{
				system("cls");


			}
			else {
				system("cls");
				cout << "Invalid choice" << endl;

			}

		}


		if (choice == 2)
		{
			Cat *a = new Cat;
			cout << "I " << a->getsound() << endl;
			cout << "I eat " << a->getfeed() << endl;
			cout << "Will you like to buy me?(Y/N)" << endl;
			char ch;
			cin >> ch;
			if (ch == 'y' || ch == 'Y')
			{
				if (count == 0) {
					cout << "Pet Added" << endl;
					count++;
					//pt = new Pet*[1];
					pt[0] = a;

				}
				else {
					bool flag = true;
					for (int i = 0; i < count; i++) {
						if (pt[i]->getname() == "Dog" || pt[i]->getname() == "GoldFish" || pt[i]->getname() == "Lion" || pt[i]->getname() == "Parrot") {
							flag = false;

						}
						i++;
					}
					if (flag == false) {
						try
						{
							throw PetNotCompatibleException();
						}
						catch (PetNotCompatibleException& e)
						{
							cout << e.what() << endl;
						}
						char choice;
						cin >> choice;
						if (choice == 'y' || choice == 'Y') {
							cout << "Pet Added" << endl;

							pt[count] = a;
							count++;

						}
					}
					else {
						cout << "Pet Added" << endl;

						pt[count] = a;
						count++;

					}

				}
				//	system("cls");

			}
			else if (ch == 'N' || ch == 'n')
			{

			}
			else {
				cout << "Invalid choice" << endl;

			}
		}

		if (choice == 3)
		{
			Lion *a = new Lion;
			cout << "I " << a->getsound() << endl;
			cout << "I eat " << a->getfeed() << endl;
			cout << "Will you like to buy me?(Y/N)" << endl;
			char ch;
			//
			cin >> ch;
			if (ch == 'y' || ch == 'Y')
			{
				if (count == 0) {
					cout << "Pet Added" << endl;
					count++;
					pt = new Pet*[1];
					pt[0] = a;

				}
				else {
					bool flag = true;
					for (int i = 0; i < count; i++) {
						if (pt[i]->getname() == "Dog" || pt[i]->getname() == "GoldFish" || pt[i]->getname() == "Parrot" || pt[i]->getname() == "Horse" || pt[i]->getname() == "Cat") {
							flag = false;

						}
						i++;
					}
					if (flag == false) {
						try
						{
							throw PetNotCompatibleException();
						}
						catch (PetNotCompatibleException& e)
						{
							cout << e.what() << endl;
						}
						char choice;
						cin >> choice;
						if (choice == 'y' || choice == 'Y') {
							cout << "Pet Added" << endl;

							pt[count] = a;
							count++;

						}
					}
					else {
						cout << "Pet Added" << endl;
						Pet **temp = new Pet*[count + 1];
						for (int i = 0; i < count; i++) {
							temp[i] = pt[i];

						}
						pt[count] = a;
						count++;
						//pt=temp;
					}

				}
				//	system("cls");


			}
			else if (ch == 'N' || ch == 'n')
			{
				system("cls");


			}
			else {
				system("cls");
				cout << "Invalid choice" << endl;

			}
		}
		if (choice == 4)
		{
			GoldFish *a = new GoldFish;
			cout << "I " << a->getsound() << endl;
			cout << "I eat " << a->getfeed() << endl;
			cout << "Will you like to buy me?(Y/N)" << endl;
			char ch;
			cin >> ch;
			if (ch == 'y' || ch == 'Y')
			{
				if (count == 0) {
					count++;
					pt = new Pet*[1];
					pt[0] = a;
					cout << "Pet Added" << endl;
				}
				else {
					bool flag = true;
					for (int i = 0; i < count; i++) {
						if (pt[i]->getname() == "Dog" || pt[i]->getname() == "Lion" || pt[i]->getname() == "Cat") {
							flag = false;

						}
						i++;
					}
					if (flag == false) {
						try
						{
							throw PetNotCompatibleException();
						}
						catch (PetNotCompatibleException& e)
						{
							cout << e.what() << endl;
						}
						char choice;
						cin >> choice;
						if (choice == 'y' || choice == 'Y') {
							cout << "Pet Added" << endl;

							pt[count] = a;
							count++;

						}
					}
					else {
						cout << "Pet Added" << endl << endl;
						Pet **temp = new Pet*[count + 1];
						for (int i = 0; i < count; i++) {
							temp[i] = pt[i];

						}
						pt[count] = a;
						count++;
						//pt=temp;
					}

				}
				//	system("cls");


			}
			else if (ch == 'N' || ch == 'n')
			{
				system("cls");


			}
			else {
				system("cls");
				cout << "Invalid choice" << endl;

			}
		}
		if (choice == 5)
		{
			Parrot *a = new Parrot;
			cout << "I " << a->getsound() << endl;
			cout << "I eat " << a->getfeed() << endl;
			cout << "Will you like to buy me?(Y/N)" << endl;
			char ch;
			cin >> ch;
			if (ch == 'y' || ch == 'Y')
			{
				if (count == 0) {
					cout << "Pet Added" << endl;
					count++;
					pt = new Pet*[1];
					pt[0] = a;

				}
				else {
					bool flag = true;
					for (int i = 0; i < count; i++) {
						if (pt[i]->getname() == "Cat" || pt[i]->getname() == "Lion") {
							flag = false;

						}
						i++;
					}
					if (flag == false) {
						try
						{
							throw PetNotCompatibleException();
						}
						catch (PetNotCompatibleException& e)
						{
							cout << e.what() << endl;
						}
						char choice;
						cin >> choice;
						if (choice == 'y' || choice == 'Y') {
							cout << "Pet Added" << endl;

							pt[count] = a;
							count++;

						}
					}
					else {
						cout << "Pet Added" << endl;
						Pet **temp = new Pet*[count + 1];
						for (int i = 0; i < count; i++) {
							temp[i] = pt[i];

						}
						pt[count] = a;
						count++;
						//pt=temp;
					}

				}
				//	system("cls");

			}
			else if (ch == 'N' || ch == 'n')
			{
				system("cls");


			}
			else {
				system("cls");
				cout << "Invalid choice" << endl;

			}
		}
		if (choice == 6)
		{
			Horse *a = new Horse;
			cout << "I " << a->getsound() << endl;
			cout << "I eat " << a->getfeed() << endl;
			cout << "Will you like to buy me?(Y/N)" << endl;
			char ch;
			cin >> ch;
			if (ch == 'y' || ch == 'Y')
			{
				if (count == 0) {
					cout << "Pet Added" << endl;
					count++;
					pt = new Pet*[1];
					pt[0] = a;

				}
				else {
					bool flag = true;
					for (int i = 0; i < count; i++) {
						if (pt[i]->getname() == "Lion") {
							flag = false;

						}
						i++;
					}
					if (flag == false) {
						try
						{
							throw PetNotCompatibleException();
						}
						catch (PetNotCompatibleException& e)
						{
							cout << e.what() << endl;
						}
						char choice;
						cin >> choice;
						if (choice == 'y' || choice == 'Y') {
							cout << "Pet Added" << endl;

							pt[count] = a;
							count++;

						}
					}
					else
					{
						cout << "Pet Added" << endl;
						Pet **temp = new Pet*[count + 1];
						for (int i = 0; i < count; i++) {
							temp[i] = pt[i];

						}
						pt[count] = a;
						count++;
						//pt=temp;
					}

				}
				//	system("cls");

			}
			else if (ch == 'N' || ch == 'n')
			{
				system("cls");


			}
			else
			{
				system("cls");
				cout << "Invalid choice" << endl;

			}

		}



	}

	///all okay
	system("cls");
	cout << "The feed for the selected Pets are" << endl;
	int *fd;
	fd = displayFeed(pt, count);
	int fd1[6];
	for (int i = 0; i < 6; i++)
	{
		fd1[i] = 0;
	}
	int choice;
	cout << "0-Exit" << endl;
	bool fla = true;
	while (fla == true)
	{
		cout << "which feed you want to buy" << endl;
		cin >> choice;


		if (fd[choice - 1] == 1 && fd1[choice - 1] != 1)
		{
			fd1[choice - 1] = 1;
			cout << "you have bought this feed " << endl;
		}
		else if (fd[choice - 1] == 1 && fd1[choice - 1] == 1) {
			cout << "You have already this food" << endl;
		}
		else if (choice == 0) {
			fla = false;
		}


	}


	//all okay

	int ch;
	cout << "do you want to play or Feed pet" << endl;
	cout << "1-to play" << endl;
	cout << "2-to feed" << endl;
	cin >> ch;
	int play;
	int *fd3;
	bool flagg = true;
	if (ch == 1)
	{
		while (flagg == true)
		{

			cout << "with which pet you want to play?   exit: Press 0 ";
			fd3 = displaynames(pt, count);
			cin >> play;
			if (play < 7 && play > 0)
			{
				if (fd3[play - 1] == 1)
				{
					cout << "you are playing with "; getpetname(play); cout << "  pet" << endl << endl;

				}
				else
				{
					cout << "invalid" << endl;
				}
			}
			else if (play == 0)
			{
				flagg = false;
			}
			else
			{
				cout << "invalid" << endl;
			}
		}
	}
	else if (ch == 2)
	{
		fd3 = displaynames(pt, count);
		while (flagg == true)
		{
			cout << "which pet you want to feed?";

			cout << "0-Exit" << endl;
			cin >> play;
			if (play < 7)
			{
				if (fd3[play - 1] == 1)
				{
					cout << "you are Feeding  "; getpetname(play); cout << "  pet" << endl << endl;
					fd3[play - 1] = 0;
				}
				else if (fd3[play - 1] == 0)
				{
					try
					{
						throw NoMoreFoodException();
					}
					catch (NoMoreFoodException& e)
					{
						cout << e.what() << endl;
					}
					cout << "The feed for the selected Pets are" << endl;

					fd3 = displayFeed(pt, count);
					int fd1[6];
					for (int i = 0; i < 6; i++)
					{
						fd1[i] = 0;
					}
					int choice;
					cout << "0-Exit" << endl;
					bool fla = true;
					while (fla == true)
					{
						cout << "which feed you want to buy" << endl;
						cin >> choice;
						if (fd3[choice - 1] == 1 && fd1[choice - 1] != 1)
						{
							fd1[choice - 1] = 1;
							cout << "you have bought this feed " << endl;
						}
						else if (fd3[choice - 1] == 1 && fd1[choice - 1] == 1)
						{
							cout << "You already have this food" << endl;
						}
						else if (choice == 0)
						{
							fla = false;
						}
					}
				}

				else if (play == 0)
				{
					flagg = false;
				}
				else
				{
					try
					{
						throw InedibleFoodException();
					}
					catch (InedibleFoodException& e)
					{
						cout << e.what() << endl;
					}
				}

			}
			else
			{
				try
				{
					throw InedibleFoodException();
				}
				catch (InedibleFoodException& e)
				{
					cout << e.what() << endl;
				}
			}
		}
	}
	else
	{
		cout << "invalid choice" << endl;
	}
}