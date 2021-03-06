//ActionCalculategpa.cpp
#include "Actioncalculategpa.h"
#include "../SPOT/Registrar.h"
#include "../SPOT/Courses/UnivCourse.h"
#include<fstream>
#include <iostream>
#include<string>
using namespace std;

ActionCalculategpa::ActionCalculategpa(Registrar* p) :Action(p)
{
}
bool ActionCalculategpa::Execute()
{
	/*int c;
	string lettergrade;
	double credit;
	double totgrade = 0;
	double totalc = 0;
	double totalcredit = 0;
	double gpa = 0;*/

	cout << "Enter number of courses to calculate gpa " << endl;
	cin >> c;
	for (int i = 0; i<c; i++)
	{
		cout << "Enter course " << (i + 1) << " number of credit: " << endl;
		cin >> credit;
		cout << "Enter letter grade: ";
		cin >> lettergrade;

		if (lettergrade == "a" || lettergrade == "A")
		{
			totgrade = credit * 4;
		}
		else if (lettergrade == "a-" || lettergrade == "A-")
		{
			totgrade = credit * 3.67;
		}
		else if (lettergrade == "b+" || lettergrade == "B+")
		{
			totgrade = credit * 3.33;
		}
		else if (lettergrade == "b" || lettergrade == "B")
		{
			totgrade = credit * 3.0;
		}
		else if (lettergrade == "b-" || lettergrade == "B-")
		{
			totgrade = credit * 2.67;
		}
		else if (lettergrade == "c+" || lettergrade == "C+")
		{
			totgrade = credit *2.33;
		}
		else if (lettergrade == "c" || lettergrade == "C")
		{
			totgrade = credit * 2.0;
		}
		else if (lettergrade == "c-" || lettergrade == "C-")
		{
			totgrade = credit * 1.67;
		}
		else if (lettergrade == "d" || lettergrade == "D")
		{
			totgrade = credit * 1.0;
		}
		else if (lettergrade == "f" || lettergrade == "F")
		{
			totgrade = credit * 0;
		}
		else
		{
			cout << "invalid input" << endl;
			i = i - 1;
			credit = 0;
			totgrade = 0;

		}

		totalcredit = totalcredit + credit;
		totalc = totalc + totgrade;

	}

	gpa = totalc / totalcredit;
	cout << "your GPA is: " << gpa << endl;
	return 0;
}
ActionCalculategpa::~ActionCalculategpa()
{
}
