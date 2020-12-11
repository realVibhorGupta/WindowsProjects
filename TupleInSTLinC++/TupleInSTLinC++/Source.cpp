#include<iostream>
#include<conio.h>
#include<tuple>
#include<string>
using namespace std;

int main( )
{
	tuple<string , int , int >t1;
	t1 = make_tuple("mehak",23,27 );
	cout <<  get<0>( t1 ) << endl <<
		get<1>( t1 ) << endl <<
		get<2>( t1 ) << endl;

	getch( );
	return 0;
}
