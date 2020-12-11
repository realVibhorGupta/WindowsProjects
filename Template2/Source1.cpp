#include<iostream>
#include<conio.h>

using namespace std;

typedef int VIBHOR;

int main()
{
	VIBHOR firstVariable = 10;
	VIBHOR secondVariable = 20;

	cout << "the value of vibhor is :" << firstVariable;
	cout << "the value of   second variable  is: " << secondVariable;
	cout << sizeof(firstVariable);
	cout << typeid(firstVariable);
	cout << typename(firstVariable);
}