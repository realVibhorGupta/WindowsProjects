#include<iostream>
#include<conio.h>
#include<string>


using namespace std;

class Employee
{
public:
	string FirstName = "FIRST NAME";
	string LastName = "LAST NAME"; 

	void PrintName()
	{
		cout << FirstName << "  " << LastName << endl;
	}

};


class FullTimeEmployee : Employee
{
public:
	void PrintName()
	{
		cout << FirstName << " " << LastName << endl;
	}

};

class PartTimeEmployee : Employee
{
public:
	void PrintName()
	{
		cout << FirstName << " " << LastName << endl;
	}
};


class TemporaryEmployee : Employee
{
public:
	void PrintName()
	{
		cout << FirstName << " " << LastName << endl;
	}
};
int main()
{
	TemporaryEmployee  t;
	t.PrintName();

	getch();
	return 0;

}


