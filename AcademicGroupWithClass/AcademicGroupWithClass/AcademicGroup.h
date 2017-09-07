#pragma once
#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

class AcademyGroup
{
	Student ** student;
	int count;

public:
	AcademyGroup();
	void AddStudent();
	void DeleteStudent();
	void EditStudent();
	void Print();
	void FindStudent();
	void Sort();

	~AcademyGroup()	
	{
		for (int i = 0; i < this->count; i++)
			delete this->student[i];

		delete[] this->student;
	}
};