#include<iostream>
#include<conio.h>

using namespace std;
class A
{public:
	virtual void firstFunction( )=0;
	void firstFunction1( )
	{
		cout << "helloi thsi ia ths base class" << endl;
	}
};
class B :public A
{
public:
	void firstFunction( )
	{
		
		cout << "this is the derived function but used as a base class pure virtual function" << endl;
	}
};

int main( )
{
	B b;
	b.firstFunction( );
	b.firstFunction1( );


	getch( );
	return 0;
}