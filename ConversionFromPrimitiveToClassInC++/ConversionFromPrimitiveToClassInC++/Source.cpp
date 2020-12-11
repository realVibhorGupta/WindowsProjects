#include<iostream>
#include<conio.h>


using namespace std;


class  BaseClass
{
private:
	int a , b;

public:
	BaseClass( )
	{
	}

	BaseClass(int x )
	{
		b = 4;
		a = x;
	}


	void setData(int x,int y )

	{
		a = x;
		b = y;
	}
	void Display( )
	{
		cout << "the values of a : " << a << " and  b :  " << b << endl;
	}

	
};


int main( )
{
	
	BaseClass b;

	//b.setData( 2 , 3 );

	int x = 3;
	b = x;
	b.Display( );
	getch( );
	return 0;
}