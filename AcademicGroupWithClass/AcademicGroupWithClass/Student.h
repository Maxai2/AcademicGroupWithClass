#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student
{
	string name;
	string surname;
	int age;
	string phone;
	double average;

public:
	Student();
	Student(string name, string surname, int age, string phone, double average);

	~Student() { /*cout << "Delete student" << endl;*/ }

	string getName();
	string getSurname(); 
	int getAge();
	double getAverage();
	string getPhone();
	void setName(string name);
	void setSurname(string surname);
	void setPhone(string phone);
	void setAge(int age);
	void setAverage(double average);
};