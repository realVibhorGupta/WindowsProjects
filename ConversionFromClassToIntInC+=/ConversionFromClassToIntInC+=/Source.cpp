#include<iostream>
#include<conio.h>


using namespace std;


class  BaseClass
{
private:
	int a , b;

public:
	

	

	void setData( int x , int y )

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

	b.setData( 2 , 3 );

	
	b.Display( );
	getch( );
	return 0;
}