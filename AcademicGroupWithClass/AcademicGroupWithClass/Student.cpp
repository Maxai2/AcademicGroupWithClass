#include "Student.h"

Student::Student()
{
	this->name = "Name";
	this->surname = "Surname";
	this->age = 16;
	this->phone = "+994516666666";
	this->avarage = 12;
}

Student::Student(string name, string surname, int age, string phone, double avarage)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
	this->phone = phone;
	this->avarage;
}

string Student::getName() { return this->name; }

string Student::getSurname() { return this->surname; }

int Student::getAge() { return this->age; }

double Student::getAvarage() { return this->avarage; }

string Student::getPhone() { return this->phone; }

void Student::setName(string name) { this->name = name; }

void Student::setSurname(string surname) { this->surname = surname; }

void Student::setPhone(string phone) { this->phone = phone; }

void Student::setAge(int age) { this->age = age; }

void Student::getAvarage(double avarage) { this->avarage = avarage; }