#include "header.h"

void Sort(records*& head)
{

	bool swapped = false;
	node* tempPtr;
	node* loopPtr = nullptr;

	if (head->first == nullptr)
	{
		return;
	}

	do
	{
		swapped = false;
		tempPtr = head->first;

		while (tempPtr->next != loopPtr)
		{
			//this is comparing by askii value (I think) so it isn't goin to be alphabetical but it is sorted
			if (tempPtr->student->lastName > tempPtr->next->student->lastName)
			{
				/*
				// tempPtr goes into swapPtr goes into tempPtr.next
				swapPtr->student->id = tempPtr->student->id;
				swapPtr->student->lastName = tempPtr->student->lastName;
				swapPtr->student->firstName = tempPtr->student->firstName;
				swapPtr->student->email = tempPtr->student->email;
				swapPtr->student->phone = tempPtr->student->phone;
				swapPtr->student->street = tempPtr->student->street;
				swapPtr->student->city = tempPtr->student->city;
				swapPtr->student->state = tempPtr->student->state;
				swapPtr->student->zip = tempPtr->student->zip;
				swapPtr->student->major = tempPtr->student->major;
				swapPtr->student->rank = tempPtr->student->rank;
				swapPtr->student->gpa = tempPtr->student->gpa;

				tempPtr->student->id = tempPtr->next->student->id;
				tempPtr->student->lastName = tempPtr->next->student->lastName;
				tempPtr->student->firstName = tempPtr->next->student->firstName;
				tempPtr->student->email = tempPtr->next->student->email;
				tempPtr->student->phone = tempPtr->next->student->phone;
				tempPtr->student->id = tempPtr->next->student->id;
				tempPtr->student->id = tempPtr->next->student->id;
				tempPtr->student->id = tempPtr->next->student->id;
				tempPtr->student->id = tempPtr->next->student->id;
				tempPtr->student->id = tempPtr->next->student->id;
				tempPtr->student->id = tempPtr->next->student->id;
				tempPtr->student->id = tempPtr->next->student->id;

				tempPtr->next->student->id = swapPtr->student->id;
				*/

				swap(tempPtr->student->id, tempPtr->next->student->id);
				swap(tempPtr->student->lastName, tempPtr->next->student->lastName);
				swap(tempPtr->student->firstName, tempPtr->next->student->firstName);
				swap(tempPtr->student->email, tempPtr->next->student->email);
				swap(tempPtr->student->phone, tempPtr->next->student->phone);
				swap(tempPtr->student->street, tempPtr->next->student->street);
				swap(tempPtr->student->city, tempPtr->next->student->city);
				swap(tempPtr->student->state, tempPtr->next->student->state);
				swap(tempPtr->student->zip, tempPtr->next->student->zip);
				swap(tempPtr->student->major, tempPtr->next->student->major);
				swap(tempPtr->student->rank, tempPtr->next->student->rank);
				swap(tempPtr->student->gpa, tempPtr->next->student->gpa);

				swapped = true;
			}

			tempPtr = tempPtr->next;
		}
		loopPtr = tempPtr;

	} while (swapped);

	return;
}