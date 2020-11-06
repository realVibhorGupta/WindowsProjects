#include <iostream>
#include <conio.h>

using namespace std;


class Complex
{
private:
	int a, b,c=3;
	int x = 5, y = 6;
public:
	  Complex()//default
	{
		cout << "First constructor called"<<endl;

	}
	Complex(int b)
	{
		cout <<"third constructor called"<<endl<<"c : "<< c<<endl<<"b : " <<  b <<endl;
	}
	Complex(int a, int b)//parameterized
	{
		cout << "second constructor called" << endl << "a : " << a  << endl << " b : " << b << endl;
	}
	Complex ( Complex &o)//copy 
	{
		int x = o.x;
		int y = o.y;
		cout << "fourth constructor example of  copy constructors: " << endl << "x : " <<x <<endl<< "y :" << y<<endl;
	}
	/*Complex(Complex o)
	{
		int a = o.a;
		int b = o.b;
		cout << "fourth constructor example of shallow copy : " << endl << "a" << a << endl << "b" << b << endl;
	}*/
	/*Complex(const Complex &u)
	{
		int x = u.x;
		int y =u.y;
		cout << "fourth constructor example of  copy constructors: " << endl << "x : " << x << endl << "y :" << y << endl;
	}*/
	~Complex()//destructor
	{
		cout << "destructor called"<<endl;
	}

};
void fun ()//function
{
	cout << "this function fun1  will be working " << endl;;
}

void fun2()
{
	Complex c6;
	cout << "this function fun2 will also  work but after this the distructor will be called" << endl;
}
int main()
{
	Complex c1;
	Complex c2(2, 3);
	Complex c3(3);
	Complex c5 = 2;
	Complex c4 = c2;	//Complex c4( c2);
	Complex c6;
	cout << "constructor overloading is taking place : " << endl;

	cout << "now destructor will be called"<<endl;
	
	
	fun();
	fun2();
	
	getch();
	return 0;
}