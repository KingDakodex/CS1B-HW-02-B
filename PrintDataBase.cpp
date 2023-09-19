#include "header.h"

void PrintDataBase(records*& head, int mode)
{
	bool endList = false;
	bool found = false;
	std::string target;

	node* currentNode = head->first;

	if (mode == USE_ID)
	{
		std::cout << "What is the ID of the Student you wish to Print? ";
		std::cin >> target;

		while (!found && !endList)
		{
			if (currentNode->student->id == target)
			{
				found = true;
				std::cout << "found student record!\n";

				std::cout << currentNode->student->id << std::endl;
				std::cout << currentNode->student->lastName << std::endl;
				std::cout << currentNode->student->firstName << std::endl;
				std::cout << currentNode->student->email << std::endl;
				std::cout << currentNode->student->phone << std::endl;
				std::cout << currentNode->student->street << std::endl;
				std::cout << currentNode->student->city << std::endl;
				std::cout << currentNode->student->state << std::endl;
				std::cout << currentNode->student->zip << std::endl;
				std::cout << currentNode->student->major << std::endl;
				std::cout << currentNode->student->rank << std::endl;
				std::cout << currentNode->student->gpa << std::endl<< std::endl;
			}
			else
			{
				currentNode = currentNode->next;
				std::cout << "Didn't find record...\n";
			}

			if (currentNode == nullptr)
			{
				endList = true;
				std::cout << "End of List\n";
			}
		}
	}
	else if (mode == USE_NAME)
	{
		std::cout << "What is Last Name of the Student you wish to Print? ";
		std::cin >> target;

		while (!found && !endList)
		{
			if (currentNode->student->lastName == target)
			{
				found = true;
				std::cout << "found student record!\n";

				std::cout << currentNode->student->id << std::endl;
				std::cout << currentNode->student->lastName << std::endl;
				std::cout << currentNode->student->firstName << std::endl;
				std::cout << currentNode->student->email << std::endl;
				std::cout << currentNode->student->phone << std::endl;
				std::cout << currentNode->student->street << std::endl;
				std::cout << currentNode->student->city << std::endl;
				std::cout << currentNode->student->state << std::endl;
				std::cout << currentNode->student->zip << std::endl;
				std::cout << currentNode->student->major << std::endl;
				std::cout << currentNode->student->rank << std::endl;
				std::cout << currentNode->student->gpa << std::endl << std::endl;
			}
			else
			{
				currentNode = currentNode->next;
				std::cout << "Didn't find record...\n";
			}

			if (currentNode == nullptr)
			{
				endList = true;
				std::cout << "End of List\n";
			}
		}
	}
	else if (mode == DO_ALL)
	{
		while (!endList)
		{
			std::cout << currentNode->student->id << std::endl;
			std::cout << currentNode->student->lastName << std::endl;
			std::cout << currentNode->student->firstName << std::endl;
			std::cout << currentNode->student->email << std::endl;
			std::cout << currentNode->student->phone << std::endl;
			std::cout << currentNode->student->street << std::endl;
			std::cout << currentNode->student->city << std::endl;
			std::cout << currentNode->student->state << std::endl;
			std::cout << currentNode->student->zip << std::endl;
			std::cout << currentNode->student->major << std::endl;
			std::cout << currentNode->student->rank << std::endl;
			std::cout << currentNode->student->gpa << std::endl << std::endl;

			currentNode = currentNode->next;

			if (currentNode == nullptr)
			{
				endList = true;
			}
		}
	}
	else
	{
		std::cout << "ERROR - UNUSED MODE";
	}

	return;
}