#include<iostream>
#include<conio.h>

using namespace std;

class A
{
public:
	A( )
	{
		cout << "this is a test : " << endl;
	}
};
int main1()
{
	A a;
	return 0;
}
int main( )
{
	A a;
	main1( );
	getch( );
	return 0;
}