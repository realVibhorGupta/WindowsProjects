#include<iostream>
#include<conio.h>


using namespace std;

class BaseClass
{
public:
	void baseClass()
	{
		cout << "the base class function called " << endl;
	}



	BaseClass()
	{
		cout << "this is a base class constructor  called" << endl;
	}
};

class DerivedClass1:public BaseClass
{
public:
	void derivedClass1()
	{
		cout << "this is first derived class function " << endl;
	}

	DerivedClass1()
	{
		cout << "this is  first derived constructor " << endl;
	}
};

class DerivedClass2:public BaseClass,DerivedClass1
{
public:
	void derivedClass2()
	{
		cout << "this is second  derived class function " << endl;
	}

	DerivedClass2()
	{
		cout << "this is the second derived constructor " << endl;
	}
};

class DerivedClass3:public DerivedClass2,DerivedClass1
{
public:
	void derivedClass3()
	{
		cout << "this is third  derived class function " << endl;
	}

	DerivedClass3()
	{
		cout << "this is the third derived class constructor " << endl;
	}

	~DerivedClass3()
	{
		cout << "this is the destructor" << endl;
	}
};


int main()
{
	
	DerivedClass3  class3;
	class3.derivedClass3();
	





	getch();
	return 0;
}