#include<iostream>
#include<conio.h>

using namespace std;

class Complex
{
public:
	int a, b;

	void setData(int x, int y)
	{
		a = x;
		b = y;

	}

	void showData()
	{
		cout << "a : " << a << endl << "b : " << b << endl;
	}






	Complex operator -()
	{
		Complex  temp;
		temp.a = -a;//here  a is of  
		temp.b = -b;//here  b is of 
		return temp;
	}






};


int main()
{

	Complex c1, c2, c3;

	c1.setData(3, 4);
	c1.showData();
	c2 = -c1;
	//c2=c1.operator-();//if it was binary it had argument but as it is unary operator if has no argument
	c2.showData();



	getch();
	return 0;

}

