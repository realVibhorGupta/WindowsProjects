
#include"macro.cpp"
#include<iostream>
#include<conio.h>
using namespace std;



#define VALUE 40
#define MESSAGE "hi  i am vibhor gupta"
#define CUBE(X) (X)*(X)*(X)

#define  SQUARE(X) (X)*(X)
#define CUBE1(X) (X)*SQUARE(X)//nesting of macros is done here

int main( )
{
	int d = 20;
	if ( VALUE <d )
	{
		cout<< "Hello world!\n" <<endl;
	}
	else {
		cout << MESSAGE << endl;
	}

	cout<< "\nAnswer is :\t" << CUBE( 3 + 2 ) <<endl;
#undef CUBE();
	cout << "\nAnswer is :\t " , CUBE1( 3 + 2 );
	//cout<<(CUBE());this  will give an error

#ifndef Z
#define Z 200
#else
	cout <<" Already defined" <<endl;
#endif // Z
	cout << endl << Z << endl;


#ifdef W
#undef W
#endif
	
	getch( );
	return 0;
}
