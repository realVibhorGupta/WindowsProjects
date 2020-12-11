#include<iostream>
#include<conio.h>

using namespace std;

class Base1
{
public:
	 void base_class_function()
	{
		cout << "this is a base1 class function" << endl;
	}



};

class Base2
{
public:
	void base_class_function()
	{
		cout << "this is a base2 class function" << endl;

	}

};

class Derived_Class : public Base1,public  Base2
{
public:
	void derived_class_function()
	{
		cout << "this is a derived class function" << endl;

	}

};

int main()
{

	Derived_Class d;
	d.derived_class_function();
	d.Base2::base_class_function();
	
	getch();
	return 0;
}