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
	double avarage;

public:
	Student();
	Student(string name, string surname, int age, string phone, double avarage);

	~Student() { cout << "Delete student" << endl; }

	string getName();
	string getSurname(); 
	int getAge();
	double getAvarage();
	string getPhone();
	void setName(string name);
	void setSurname(string surname);
	void setPhone(string phone);
	void setAge(int age);
	void getAvarage(double avarage);
};