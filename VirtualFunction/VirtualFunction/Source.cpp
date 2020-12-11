#include <iostream>
#include<conio.h>


using namespace std;

class Base
{
public:



	virtual void functionA( )
	{
		cout << "this is a base  function A" << endl;
	}
	virtual void functionB( )
	{
		cout << "this is a base function B" << endl;
	}

	virtual void functionC( )
	{
		cout << "this is a base function C" << endl;
	}

	virtual void functionD( )
	{
		cout << "this is a base function D" << endl;
	}

	virtual void functionE( )
	{
		cout << "this is  a base function E" << endl;
	}
	
};

class Derived:public Base
{
	int x;
	
public:

	 void functionA( )
	{
		cout << "this is a derived function A" << endl;
	}
	void functionB( )
	{
		cout << "this is a derived function B" << endl;
	}

	void functionC( )
	{
		cout << "this is a derived function C" << endl;
	}

	void functionD(int x )
	{
		this->x = x;
		cout << "this is a derived  function D and the value of  x : " << x << endl;
	}
	 void functionE( )
	{
		cout << "this is  a derived function E" << endl;
	}
};

int main( )
{
	Base *p,b;
	Derived d;
	p = &b;
	p->functionA( );
	p->functionB( );
	p->functionC( );
	p->functionD( );
	p->functionE( );
	//p->functionD( 3 );
	p = &d;
	p->functionA( );
	p->functionB( );
	p->functionC( );
	p->functionD( );
	p->functionE( );
	//p->functionD( 3 );
	cout << sizeof( b ) << endl;
	cout << sizeof( d ) << endl;
	getch( );
	return 0;

}