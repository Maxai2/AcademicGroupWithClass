#include "AcademicGroup.h"

AcademyGroup::AcademyGroup()
{
	this->student = nullptr;
	count = 0;
}

void AcademyGroup::AddStudent()
{
	Student** temp = new Student*[this->count + 1];

	cout << "U want empty card?(y/n): ";
	char answer;
	cin >> answer;

	if (answer == 'y')
		temp[this->count] = new Student;
	else
	{
		string surname, name, phone;
		int age;
		double average;

		cout << "Input Surname: ";
		cin >> surname;

		cout << "Input Name: ";
		cin >> name;

		cout << "Input Age: ";
		cin >> age;

		cout << "Input Phone: ";
		cin >> phone;

		cout << "Input average: ";
		cin >> average;

		temp[this->count] = new Student(name, surname, age, phone, average);
	}

	memcpy(temp, this->student, this->count * sizeof(Student*));
	delete[] this->student;
	this->student = temp;
	this->count++;
}

void AcademyGroup::DeleteStudent()
{
	int index = 0;
	bool del = false;
	cout << "Input index of student for delete: ";
	cin >> index;
	index--;

	Student** temp = new Student*[this->count - 1];

	for (int i = 0; i < this->count; i++)
	{
		if (i != index && del == false)
			temp[i] = this->student[i];
		else
			if (del == true)
		{
			if (i < this->count)
				temp[i - 1] = this->student[i];
		}
		else 
			if (i == index)
		{
			delete this->student[i];
			del = true;
		}
	}

	delete[] this->student;
	this->student = temp;
	count--;
}

void AcademyGroup::EditStudent()
{
	int index = 0;
	string temp;
	double average;
	cout << "Input index of student for edit: ";
	cin >> index;
	index--;

	cout << endl;
	cout << this->student[index]->getSurname() << '\t';
	cout << this->student[index]->getName() << '\t';
	cout << this->student[index]->getAge() << '\t';
	cout << this->student[index]->getPhone() << '\t';
	cout << this->student[index]->getAverage() << '\t' << endl;

	cout << "What u want to edit?"
			"\n1.Surname"
			"\n2.Name"
			"\n3.Age"
			"\n4.Phone"
			"\n5.Average";

	cout << "Your select: ";
	int sel = 0;
	cin >> sel;

	switch (sel)
	{
	case 1:
		cout << "Old surname: " << this->student[index]->getSurname() << endl;
		cout << "New surname: ";
		cin >> temp;

		this->student[index]->setSurname(temp);
		break;
	case 2:
		cout << "Old name: " << this->student[index]->getName() << endl;
		cout << "New name: ";
		cin >> temp;

		this->student[index]->setName(temp);
		break;
	case 3:
		cout << "Old age: " << this->student[index]->getAge() << endl;
		cout << "New age: ";
		cin >> temp;

		this->student[index]->setAge(stoi(temp));
		break;
	case 4:
		cout << "Old phone: " << this->student[index]->getPhone() << endl;
		cout << "New phone: ";
		cin >> temp;

		this->student[index]->setPhone(temp);
		break;
	case 5:
		cout << "Old average: " << this->student[index]->getAverage() << endl;
		cout << "New average: ";
		cin >> average;

		this->student[index]->setAverage(average);
	}
}

void AcademyGroup::Print()
{
	cout << endl;
	for (int i = 0; i < this->count; i++)
		//printf("%s \t %s \t %i \t %s \t %1.0d", this->student[i]->getSurname(), this->student[i]->getName(), this->student[i]->getAge(), this->student[i]->getPhone(), this->student[i]->getAverage());
	{
		cout << i + 1 << ".";
		cout << this->student[i]->getSurname() << '\t';
		cout << this->student[i]->getName() << '\t';
		cout << this->student[i]->getAge() << '\t';
		cout << this->student[i]->getPhone() << '\t';
		cout << this->student[i]->getAverage() << '\t' << endl;
	}
}

void AcademyGroup::FindStudent()
{
	cout << "Write by which param u want to search:"
		"\n 1.Surname"
		"\n 2.Name"
		"\n 3.Age"
		"\n 4.Phone"
		"\n 5.Average";

	string answer;
	cout << "May be one or more like(1, 1.2): ";
	cin >> answer;


}

void AcademyGroup::Sort()
{
	bool sorted = false;
	Student *temp = new Student;
	int counter = 0;

	for (int i = 1; !sorted; i++)
	{
		if (this->student[i]->getSurname() < this->student[i - 1]->getSurname() 
		 || this->student[i]->getName() < this->student[i - 1]->getName())
		{
			temp = this->student[i];
			this->student[i] = this->student[i - 1];
			this->student[i - 1] = temp;

			counter++;
		}

		if (i == this->count - 1 && counter == 0)
			sorted = true;
		else
		if (i == this->count - 1)
		{
			i = 1;
			counter = 0;
		}
	}

//	delete temp;
}
