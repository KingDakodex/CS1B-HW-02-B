#include "header.h"

void SaveData(records*& head)
{
	// add write to file
    std::ofstream fout;
    fout.open("db.txt");

    node* newNode = head->first;
    node* iptr = newNode;
    
    while (iptr && fout) 
    {
        fout << newNode->student->id << std::endl;
        fout << newNode->student->lastName << std::endl;
        fout << newNode->student->firstName << std::endl;
        fout << newNode->student->email << std::endl;
        fout << newNode->student->phone << std::endl;
        fout << newNode->student->street << std::endl;
        fout << newNode->student->city << std::endl;
        fout << newNode->student->state << std::endl;
        fout << newNode->student->zip << std::endl;
        fout << newNode->student->major << std::endl;
        fout << newNode->student->rank << std::endl;
        fout << newNode->student->gpa << std::endl << std::endl;

        iptr = newNode->next;;
        std::cout << "deleting record: " << newNode->student->id << '\n';
        delete newNode->student;
        delete newNode;
        newNode = iptr;
    }
    delete head;
    fout.close();

    return;
}