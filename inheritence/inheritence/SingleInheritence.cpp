#include <iostream>
#include <conio.h>

using namespace std;



class BaseClass
{
public:


	BaseClass()
	{
		cout << "this is base class constructor" << endl;
	}

	void base_class(){

		cout << "HI THIS IS BASE CLASS Function" << endl;


	}

	


};


class DerivedClass: public BaseClass
{
public:
	void  derived_class()
	{
		
		
		cout << "HI THIS IS Derived CLASS function" << endl;
	}

	DerivedClass()
	{
		cout << "this is the derived class  constructor" << endl;
	}
};



void main()
{
	
	DerivedClass derived_class;
	derived_class.derived_class();
	derived_class.base_class();




	getch();
}
