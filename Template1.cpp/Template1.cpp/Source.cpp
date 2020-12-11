#include<iostream>
#include<conio.h>


using namespace std;
template <class X,class Y>X big( X a , Y b )
///X is a place holder
//int big(int a, int b)
{
	if (a>b)
	{
		return a;

	}
	else
	{
		return b;
	}
}

/*double  big(double  a ,double  b)
{
if(a>b)
	{
		return a;

	}
else
	{
		return b;
	}
}*/




int main()
{
	cout << big(4, 5) << endl;
	cout << big(3.4, 4) << endl;//double data loss
	cout << big( 4 , 32 );
	getch();
	return 0;
}
