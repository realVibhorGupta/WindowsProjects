#include<iostream>
#include<conio.h>
#include <string>

using namespace std;

class Caeser
{
public:
	char sentence[50];
	int counter1;
	char a = '65';
	char counter [50];
	void SetData( )
	{
		cout << "Enter the sentence you want to cipher : ";
		cin >> sentence;
	}
	
	void logic( )
	{
		
		for ( int i = 65; i < 65 + 26; i++ )
		{
			
			
		}
		
		for ( int i = 00; i < strlen( sentence );i++ )
		{
			for ( int j = sentence [i]; j <= i;j=+3 )
			{
				cout << i << endl;
			}
		}
		
			

		
			
		
		}
		
	

 void Display( )
{
	cout << "your code is " << sentence<< endl;
}

};

int main()
{
	Caeser c;
	c.SetData( );
	c.logic( );
	c.Display( );
	getch( );
	return 0;

} 