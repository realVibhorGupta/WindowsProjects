#include<iostream>
#include<conio.h>
using  namespace std;

class Complex
{
private:
	int a, b;
public:
	void setData(int x,int y )
	{
		a = x;
		b = y;

	}
	void showData()
	{
		cout << "a " << a << endl << "b  " << b << endl;
	}

friend 	Complex  operator+(Complex,Complex);
	

};
Complex  operator+(Complex X,Complex Y)
{
	Complex temp;
	temp.a = X.a + Y.a;
	temp.b = X.b + Y.b;
	return temp;
}
//if there is friend function to be operator overloaded then it has one parameter more then original one

void main()
{
	Complex c1, c2, c3;
	c1.setData(2, 3);
	c2.setData(3, 4);

	c3 = c1 + c2;

	c3.showData();


	
	getch();





}