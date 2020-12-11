#include<iostream>
#include <conio.h>

using namespace std;


class Complex
{
private :
	int a, b;
public:
	void setData(int x,int y)
	{
		a = x;
		b = y;

	}

	void showData()
	{
		cout << "a :" << a << endl << "b :" << b << endl;
	}
	friend Complex operator-(Complex);
	
};

Complex operator-(Complex c)
{
	Complex temp;
	temp.a = -c.a;
	temp.b = -c.b;
	return temp;
}
int  main()
{
	Complex c1, c2;
	c1.setData(2,3);
	c2 = -c1;
	c2.showData();
	getch();
	return 0;

}