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
			delete this->student[i];

		delete[] this->student;
	}

	void AddStudent()
	{
		string surname, name, phone;
		int age;
		double avarage;

		cout << "Input Surname: ";
		cin >> surname;

		cout << "Input Name: ";
		cin >> name;

		cout << "Input Age: ";
		cin >> age;

		cout << "Input Phone: ";
		cin >> phone;

		cout << "Input Avarage: ";
		cin >> avarage;

		Student** temp = new Student*[this->count + 1];
		temp[this->count] = new Student(name, surname, age, phone, avarage);
		memcpy(temp, this->student, this->count * sizeof(Student*));
		delete[] this->student;
		this->student = temp;
		this->count++;
	}

	void DeleteStudent()
	{
		int index = 0;
		bool del = false;
		cout << "Input index of student: \n";
		cin >> index;
		index--;

		Student** temp = new Student*[this->count - 1];
		
		for (int i = 0; i < this->count; i++)
		{
			if (i != index && del == false)
				temp[i] = this->student[i];
			else 
				if (del == true)
					if (i != this->count - 1) 
						temp[i] = this->student[i + 1];
			else 
			{
				delete this->student[i];
				del = true;
			}
		}

		delete[] this->student;
		this->student = temp;
		count--;
	}

	void EditStudent()
	{
		
	}

	void Print()
	{
		for (int i = 0; i < this->count; i++)
			printf("%s\t%s\t%i\t%s\t%d", this->student[i]->getSurname, this->student[i]->getName, this->student[i]->getAge, this->student[i]->getPhone, this->student[i]->getAvarage);
	}

	void FindStudent()
	{
		
	}
};