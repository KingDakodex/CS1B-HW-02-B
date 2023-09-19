#include "header.h"

void initList(records*& head)
{
	//needs storage spaces for all variables
	std::string lastname, firstname, email, street, city, state, major, rank, space = "";
	std::string id;
	std::string phone;
	std::string zip;
	std::string gpa;

	//init list trackers
	head = new records;
	head->length = 0;
	head->first = nullptr;
	head->last = nullptr;

	std::ifstream fin ("db.txt");
	std::cout << "opening file...\n\n";

	if (fin)
	{
		
		node* iptr = nullptr;
		node* newNode = nullptr;

		std::cout << "file opened!\n\n";

		//gets all variables, if it can't pull enough lines it stops
		while (getline(fin, id) && getline(fin, lastname) && getline(fin, firstname) &&
			getline(fin, email) && getline(fin, phone) && getline(fin, street) &&
			getline(fin, city) && getline(fin, state) && getline(fin, zip) && getline(fin, major) &&
			getline(fin, rank) && getline(fin, gpa) && getline(fin, space))
		{
			//std::cout << "Data Gathered\n";

			newNode = new node;
			newNode->listHead = head;
			newNode->next = nullptr;
			newNode->prev = nullptr;
			newNode->student = new data;

			// if this is the first node, set as the first node in records
			if (!head->first)
			{
				head->first = newNode;
			}
			// if this is *NOT* the first node, set the "next" and "prev" pointers
			else
			{
				//newNode->prev->next = newNode;
				iptr->next = newNode;
				newNode->prev = iptr;
			}

			//marks this node as the last node
			head->last = newNode;

			//updates the lenght of the list
			++head->length;

			//needs assignment for all variables
			newNode->student->id = id;
			newNode->student->lastName = lastname;
			newNode->student->firstName = firstname;
			newNode->student->email = email;
			newNode->student->phone = phone;
			newNode->student->street = street;
			newNode->student->city = city;
			newNode->student->state = state;
			newNode->student->zip = zip;
			newNode->student->major = major;
			newNode->student->rank = rank;
			newNode->student->gpa = gpa;

			std::cout << "Student Number: " << newNode->listHead->length << "\n\n";
			std::cout << newNode->student->id << std::endl;
			std::cout << newNode->student->lastName << std::endl;
			std::cout << newNode->student->firstName << std::endl;
			std::cout << newNode->student->email << std::endl;
			std::cout << newNode->student->phone << std::endl;
			std::cout << newNode->student->street << std::endl;
			std::cout << newNode->student->city << std::endl;
			std::cout << newNode->student->state << std::endl;
			std::cout << newNode->student->zip << std::endl;
			std::cout << newNode->student->major << std::endl;
			std::cout << newNode->student->rank << std::endl;
			std::cout << newNode->student->gpa << std::endl;

			// copied from example, not sure what its supposed to do?
			iptr = newNode;

			
		}

		fin.close();
		
	}

}