#include "header.h"

int main()
{
	// variable decleration and init
	int choice = 0;
	int selector = 0;

	records* school;

	std::cout << "Welcome To Schrodinger's Academy!\n\n";

	//call init list
	initList(school);

	while (choice != SAVE_EXIT)
	{
		menu();
		std::cin >> choice;

		if (choice == ADD)
		{
			AddStudent(school);
		}
		else if (choice == REMOVE)
		{
			std::cout << "Please Select an option:\n";
			std::cout << "1. Remove Record by ID\n";
			std::cout << "2. Remove Record by Last Name\n";
			std::cin >> selector;
			RemoveStudent(school, selector);
		}
		else if (choice == PRINT)
		{
			std::cout << "Please Select an option:\n";
			std::cout << "1. Print Record by ID\n";
			std::cout << "2. Print Record by Last Name\n";
			std::cout << "3. Print All Records\n";
			std::cin >> selector;
			PrintDataBase(school, selector);
		}
		else if (choice == SORT)
		{
			Sort(school);
		}
		else if (choice == SAVE_EXIT)
		{
			SaveData(school);
		}
		else
		{
			std::cout << "That is not a valid choice, please try again.";
			choice = 0;
		}

	}

	


	return 0;
}