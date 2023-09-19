#include "header.h"

void RemoveStudent(records*& head, int mode)
{
	bool endList = false;
	bool found = false;
	std::string target;

	node* currentNode = head->first;
	//node* iptr = currentNode;

	if (mode == USE_ID)
	{
		std::cout << "What is the ID of the Student you wish to Remove?";
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
				std::cout << currentNode->student->gpa << std::endl;

				std::cout << "removing...\n";

				// checks to make sure both the list exists and the node to removed exists
				if (head == nullptr || currentNode == nullptr)
				{
					return;
				}
				//if the node to be deleted is the head, make the next node the new head
				if (head->first == currentNode)
				{
					head->first = currentNode->next;
				}
				// checks if this node is the last node
				// if not then update the following nodes "prev" pointer to 
				// the node before the node to be removed
				if (currentNode->next != nullptr)
				{
					currentNode->next->prev = currentNode->prev;
				}
				// checks if this node is the first node
				// if not then update the prior nodes "next" pointer to
				// the node after the node to be removed
				if (currentNode->prev != nullptr)
				{
					currentNode->prev->next = currentNode->next;
				}
				delete currentNode->student;
				delete currentNode;

				std::cout << "files removed!\n";
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
		std::cout << "What is Last Name of the Student you wish to Remove?";
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
				std::cout << currentNode->student->gpa << std::endl;

				std::cout << "removing...\n";

				// checks to make sure both the list exists and the node to removed exists
				if (head == nullptr || currentNode == nullptr)
				{
					return;
				}
				//if the node to be deleted is the head, make the next node the new head
				if (head->first == currentNode)
				{
					head->first = currentNode->next;
				}
				// checks if this node is the last node
				// if not then update the following nodes "prev" pointer to 
				// the node before the node to be removed
				if (currentNode->next != nullptr)
				{
					currentNode->next->prev = currentNode->prev;
				}
				// checks if this node is the first node
				// if not then update the prior nodes "next" pointer to
				// the node after the node to be removed
				if (currentNode->prev != nullptr)
				{
					currentNode->prev->next = currentNode->next;
				}
				delete currentNode->student;
				delete currentNode;

				std::cout << "files removed!\n";
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
	//else if (mode == DO_ALL)
	//{
		//while (!endList)
		//{
			//std::cout << currentNode->student->id << std::endl;
			//std::cout << currentNode->student->lastName << std::endl;
			//std::cout << currentNode->student->firstName << std::endl;
			//std::cout << currentNode->student->email << std::endl;
			//std::cout << currentNode->student->phone << std::endl;
			//std::cout << currentNode->student->street << std::endl;
			//std::cout << currentNode->student->city << std::endl;
			//std::cout << currentNode->student->state << std::endl;
			//std::cout << currentNode->student->zip << std::endl;
			//std::cout << currentNode->student->major << std::endl;
			//std::cout << currentNode->student->rank << std::endl;
			//std::cout << currentNode->student->gpa << std::endl;

			//currentNode = currentNode->next;

			//if (currentNode == nullptr)
			//{
				//endList = true;
			//}
		//}
	//}
	else
	{
		std::cout << "ERROR - UNUSED MODE";
	}

	return;
}