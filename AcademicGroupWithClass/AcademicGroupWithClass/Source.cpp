#include <conio.h>
#include "AcademicGroup.h"
#include "Student.h"

using namespace std;

void main()
{
	AcademyGroup A;

	//A.Print();
	//A.Sort();
	//A.Print();

	A.AddStudent();
	A.AddStudent();
	A.AddStudent();
	A.Print();
	A.Sort();
	A.Print();
	A.EditStudent();
	A.Print();
	A.FindStudent();

	//A.DeleteStudent();
	//A.Print();
	//A.AddStudent();
	//A.Print();

}