#include<iostream>
#include <conio.h>

using namespace std;

class Complex
{
public:
	Complex ()
	{
		
		cout << "this is a constructor to be    destroyed  : " << endl;
		
	}
	void display()
	{
		
		cout << "this is a function to be    destroyed  of complex class : " << endl;
	}
};
class Complex1
{public:

	void display( )
	{

		cout << "this is a function  of complex 1 class : " << endl;
	}
};
int main()
{
	/*
	
	CREATION OF OBJECT BY USING
	MEMORY 	ALLOCATION VIA NEW KEYWORD
	*/

	//integer is created
	int *p = new int;
	//float is created
	float *q = new float;
	//object is created
	Complex  *ptr = new Complex;

	
	float *f = new float[4];

	//here values are dynamically initialised and allocated

	int x;
	cout << "Enter a value so that its memory can be dynamically initialized :  ";
	cin >> x;
	int *w = new int [x];

	//now here all number of array  will be allocated


	*w = 3;
	cout << "the value of allocated memory is : " << *w << endl;

	*p = 3;
	cout << "the value of integer object created : " << *p << endl;

	*q = 4.56;
	cout << "The value of float object created : " << *q << endl;
	//class function us called
	ptr->display( );
	Complex1 a;
	Complex1  *c;
	c = &a;
	c->display();

	*f = 3.3;
	cout << "the value of float is :" << *f << endl;


	/*DESRUCTION OF OBJECT
	USING DELETE KEYWORD*/


	delete p;

	cout << "the value of integer object created beefore delete is : " << *p << endl;

	delete q;
	cout << "The value of float object created : " << *q << endl;

	delete  ptr;
	
	ptr->display( );
	

	getch( );
	return 0;
}