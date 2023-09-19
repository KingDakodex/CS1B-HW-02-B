#pragma once

// input output
#include <iostream>
// basic functions
#include <iomanip>
// string variable and string functions
#include <string>
// used to read and write to files
#include <fstream>

// for self documentation
enum options
{
	ADD = 1,
	REMOVE = 2,
	PRINT = 3,
	SORT = 4,
	SAVE_EXIT = 5
};

enum mode
{
	USE_ID = 1,
	USE_NAME = 2,
	DO_ALL = 3
};

//init structs
struct records;

struct node;

struct data;

// struct definition
// list core
struct records
{
	int length;
	node* first;
	node* last;
};

// node's for each student
struct node
{
	records* listHead;
	node* next;
	node* prev;
	data* student;
};

// storage of student data
struct data
{
	std::string id;
	std::string lastName;
	std::string firstName;
	std::string email;
	std::string phone;
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
	std::string major;
	std::string rank;
	std::string gpa;
};

//done
void initList(records*& head);

//done
void menu();

//done
void AddStudent(records*& head);

//done
void RemoveStudent(records*& head, int mode);

//done
void PrintDataBase(records*& head, int mode);

//done
void Sort(records*& head);

//done
void SaveData(records*& head);