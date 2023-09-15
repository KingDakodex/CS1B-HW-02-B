#include "header.h"

//add an enum in "header.h" for mode (1 = USE_ID) (2 = USE_NAME) (3 = DO_ALL)

void Delete(records*& head, int mode)
{
	std::string target;
	bool found = false;
	bool endlist = false;

	node* currentNode = head->first;
	
	if (mode = USE_ID)
	{
		std::cout << "What is the ID of the Student you wish to remove?";
		std::cin  >> target;

		while (!found || !endList)
			{
				if (currentNode->id == target)
				{
					found = true;
				}
				else
				{
					currentNode = currentNode->next;
				}

				if (currentNode == NULL)
				{
					endList = True;
				}
			}
		// checks to make sure both the list exists and the node to removed exists
		if (head == NULL || currentNode == NULL)
		{
			return;
		}
		//if the node to be deleted is the head, make the next node the new head
		if (head == currentNode)
		{
			head = currentNode->next;
		}
		// checks if this node is the last node
		// if not then update the following nodes "prev" pointer to 
		// the node before the node to be removed
		if (currentNode->next != NULL)
		{
			currentNode->next->prev = currentNode->prev;
		}
		// checks if this node is the first node
		// if not then update the prior nodes "next" pointer to
		// the node after the node to be removed
		if (currentNode->prev != NULL)
		{
			currentNode->prev->next = currentNode->next;
		}
		free(currentNode);
	}
	else if (mode = USE_NAME)
	{
		std::cout << "What is the Last Name of the Student you wish to remove?";
		std::cin  >> target;

		while (!found || !endList)
			{
				if (currentNode->lastName == target)
				{
					found = true;
				}
				else
				{
					currentNode = currentNode->next;
				}

				if (currentNode == NULL)
				{
					endList = True;
				}
			}
	}
	else
	{
		std::cout << "ERROR - UNUSED MODE";
	}

	return;
}
