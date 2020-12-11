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


class BaseClass2
{
public:
	void  baseClass2()
	{


		cout << "HI THIS IS Base  CLASS 2" << endl;
	}


	BaseClass2()
	{
		cout << "this is base class2 constructor " << endl;
	}
	
};

class derived_class2 :public BaseClass , public BaseClass2
{
public:


	void       derivedclass2()
	{
		cout << "HI THIS IS Derived CLASS2:" << endl;
	}


	derived_class2()
	{
		cout << "this is the derived2 class constructor called at last constructor  " << endl;
	}

};


void main()
{

	derived_class2 derived_class2;
	derived_class2.derivedclass2();
	derived_class2.baseClass2();
	derived_class2.base_class();




	getch();
}
