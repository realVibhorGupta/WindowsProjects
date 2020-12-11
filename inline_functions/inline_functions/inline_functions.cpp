#include <iostream>
#include<conio.h>
using namespace std;
//inline function are same as normal functions  are 
/*
they work same as normal functions are working 
the only difference is that they  copy the code where ever they are called 
instead of calling the function
though it is not necessary to use it always beacuse this will copy the code again and again and this will 
make the program extra long and less effiecient.
*/
inline  int Max(int x, int y)
{
	return (x > y) ? x : y;
}

// Main function for the program
int main()
{

	cout << "Max (20,10): " << Max(20, 10) << endl;
	cout << "Max (0,200): " << Max(0, 200) << endl;
	cout << "Max (100,1010): " << Max(100, 1010) << endl;
	getch();
	return 0;
}