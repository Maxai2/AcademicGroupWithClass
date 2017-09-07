#include "Student.h"

Student::Student()
{
	this->name = "Name";
	this->surname = "Surname";
	this->age = 0;
	this->phone = "0";
	this->average = 0;
}

Student::Student(string name, string surname, int age, string phone, double average)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->phone = phone;
	this->average = average;
}

string Student::getName() { return this->name; }

string Student::getSurname() { return this->surname; }

int Student::getAge() { return this->age; }

double Student::getAverage() { return this->average; }

string Student::getPhone() { return this->phone; }

void Student::setName(string name) { this->name = name; }

void Student::setSurname(string surname) { this->surname = surname; }

void Student::setPhone(string phone) { this->phone = phone; }

void Student::setAge(int age) { this->age = age; }

void Student::setAverage(double average) { this->average = average; }