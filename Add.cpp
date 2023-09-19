#include "header.h"

void AddStudent(records*& head)
{
	//temporary data storage
	std::string tempid;
	std::string templastName;
	std::string tempfirstName;
	std::string tempemail;
	std::string tempphone;
	std::string tempstreet;
	std::string tempcity;
	std::string tempstate;
	std::string tempzip;
	std::string tempmajor;
	std::string temprank;
	std::string tempgpa;

	//recieve and assign data from user to temp variables
	std::cout << "\nEnter : ID\n";
	std::cin  >> tempid;
	std::cout << "Enter : last name\n";
	std::cin  >> templastName;
	std::cout << "Enter : fist name\n";
	std::cin >> tempfirstName;
	std::cout << "Enter : email\n";
	std::cin >> tempemail;
	std::cout << "Enter : phone number\n";
	std::cin >> tempphone;
	std::cout << "Enter : street\n";
	std::cin >> tempstreet;
	std::cout << "Enter : city\n";
	std::cin >> tempcity;
	std::cout << "Enter : state\n";
	std::cin >> tempstate;
	std::cout << "Enter : zip code\n";
	std::cin >> tempzip;
	std::cout << "Enter : major\n";
	std::cin >> tempmajor;
	std::cout << "Enter : rank\n";
	std::cin >> temprank;
	std::cout << "Enter : gpa";
	std::cin >> tempgpa;

	//creates new slot in list
	node* newStudent = new node;
	//node* initptr = head->last;

	newStudent->listHead = head;
	newStudent->next = nullptr;
	newStudent->prev = head->last;
	newStudent->student = new data;

	// used to track where the list is at
	//node* end = head;

	//assign temp data to the new node
	newStudent->student->id = tempid;
	newStudent->student->lastName = templastName;
	newStudent->student->firstName = tempfirstName;
	newStudent->student->email = tempemail;
	newStudent->student->phone = tempphone;
	newStudent->student->street = tempstreet;
	newStudent->student->city = tempcity;
	newStudent->student->state = tempstate;
	newStudent->student->zip = tempzip;
	newStudent->student->major = tempmajor;
	newStudent->student->rank = temprank;
	newStudent->student->gpa = tempgpa;

	if (!head->first)
	{
		head->first = newStudent;
	}
	else
	{
		newStudent->prev->next = newStudent;
		newStudent->prev = newStudent->prev;
	}

	head->last = newStudent;
	++head->length;
	//newStudent->prev = newStudent;

	// std::cout << "previous student" << newStudent->prev->student->firstName << " " << newStudent->prev->student->lastName;
	//std::cout << "next student" << newStudent->next->student->firstName << " " << newStudent->next->student->lastName;


	return;
}