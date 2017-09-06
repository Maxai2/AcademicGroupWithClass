#pragma once
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

class AcademyGroup
{
	Student ** student;
	int count;

public:
	AcademyGroup()
	{
		this->student = nullptr;
		count = 0;
	}

	~AcademyGroup()	
	{
		for (int i = 0; i < this->count; i++)
			delete[]student[i];

		delete[]student;
	}

	void AddStudent()
	{
		Student** temp = new Student*[this->count + 1];
		temp = new Student*[sizeof(Student)];
		memcpy(temp, this->student, this->count * sizeof(Student));

		delete[] this->student;
		this->student = (Student**)temp;
		this->student[this->count] = (Student*)student;
		this->count++;
	}

	void DeleteStudent()
	{
		
	}

	void EditStudent()
	{
	
	}

	void Print()
	{
	
	}

	void FindStudent()
	{
	
	}
};