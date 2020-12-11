#include<iostream>
#include<conio.h>

using namespace std;

int main( )
{
	float  a , b;

	cout << "Enter the values of a and b: ";
	cin >> a >> b;
	
		

		try {
			if ( b != 0 )
			{
				cout << "result : " << a/b<< endl;

			}
			else
			{
				throw(b);

			}
		}
		catch( float i )
		{
			cout << "IN Division is not allowed by 0 " << endl;
		}

	
	getch( );
	return 0;

}