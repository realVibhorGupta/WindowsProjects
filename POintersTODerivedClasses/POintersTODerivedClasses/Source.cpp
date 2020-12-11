#include<iostream>
#include<conio.h>
using namespace std;


class Base {
protected://look carefully what here is taken
	int b;
public:

	void setDataBase(int x)
	{
		b = x;
	}
	virtual	void function( )
	{
		cout << "hello world base " << endl;
	}
	void Display()
	{
		cout << "The method is of base class " << endl;
		cout << "the value of B  : " << b << endl;
	}




};

class Derived :public Base {


	int d;

public:

	void function( )
	{
		cout << "hello world derived  " << endl;
	}
	void SetDataDerived(int y)
	{
		d = y;
	}
	void Display()
	{
		cout << "It is the method of the derived class " << endl;
		cout << "the value of d is  :" << d << endl;
	}



};


int main()
{
	Base *bp;
	Base b;
	bp = &b;

	bp->setDataBase(200);
	cout << "bp points to base class  object" << endl;

	bp->Display();
	bp->function( );
	Derived  d;
	bp = &d;
	bp->function( );
	//bp->setDataDerived(100);//this wont work keep in mind coz bp is base class pointer
	bp->setDataBase(100);
	cout << "bp points to derived  class  object but base class pointer" << endl;
	bp->Display();//it access base class function



					//to access derived class object


	Derived  *dp;
	dp = &d;

	dp->SetDataDerived(300);
	cout << "dp points to drivrd  class  object" << endl;
	dp->Display();


	//((Derived*)bp)->Display();
	getch();
	return  0;
}