#include<iostream>
#include<conio.h>

using namespace std;


class X {


	int number;
public:
	int a;
	void function()
	{
		// a=100;
		this->a = 100;
		(*this).a = 200;
		cout << a << endl;
	}

	void  add(int a)
	{
		this->a = a;
		cout << a << endl;
	}
	X(int number = 0)//constructor with default arguments
	{
		this->number = number;
	}

	X   greater(X  &x)
	{
		if (x.number> number)
		{
			return x;

		}
		else
		{
			return *this;//here currrent object reference is passed
		}



	}
	void Display()
	{
		cout << "Greater number is : " << number;
	}


};

int main()
{

	X x, y(10), z(45), result;
	x.function();
	// cout<<this;
	x.add(2);
	result = z.greater(y);
	result.Display();
	getch();
}