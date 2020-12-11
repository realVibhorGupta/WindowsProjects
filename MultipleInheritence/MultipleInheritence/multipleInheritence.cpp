#include <iostream>
#include <conio.h>

using namespace std;



class BaseClass
{
public:
	void base_class() {

		cout << "HI THIS IS BASE CLASS" << endl;


	}


	BaseClass()
	{
		cout << "this is base class constructor " << endl;
	}


};


class DerivedClass : public BaseClass
{
public:
	void  derived_class()
	{


		cout << "HI THIS IS Derived CLASS" << endl;
	}


	DerivedClass()
	{
		cout << "this is the derived class constructor " << endl;
	}

};

class derived_class2 :public BaseClass
{
public:


	void       derivedclass2()
	{
		cout << "HI THIS IS Derived CLASS2:" << endl;
	}


	derived_class2()
	{
		cout << "this is the derived2 class constructor  " << endl;
	}

};


void main()
{

	derived_class2 derived_class2;
	derived_class2.derivedclass2();
	
	derived_class2.base_class();


	DerivedClass derived_class;
	derived_class.base_class();
	derived_class.derived_class();



	getch();
}
