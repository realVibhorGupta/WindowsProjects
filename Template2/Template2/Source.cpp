// class templates
#include <iostream>
#include<conio.h>
using namespace std;

template <class T>
class mypair {
private:
	T a , b;
public:
	mypair( T first , T second )
	{
		a = first;
		b = second;
	}
	T getmax( );
};

template <class T>
T mypair<T>::getmax( ) //void A::getmax()
{
	T retval;
	retval = a>b ? a : b;
	return retval;
}

int main( ) {
	mypair <float> myobject( 10.7 , 75.99 );
	cout << myobject.getmax( );
	getch( );
	return 0;
}