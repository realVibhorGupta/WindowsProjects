#include<iostream>
#include<conio.h>

using namespace std;

class Complex
{
public:
	int a, b;

	void setData(int x,int y)
	{
		a = x;
		b = y;

	}

	void showData()
	{
		cout << "a : " << a << endl ;
	}
	bool operator ==(Complex c)
	{
		return (c.a && c.b);
	
	}

};


int main()
{
	Complex c1, c2, c3;
	c1.setData(2,3);
	c2.setData(2,3);
	c1 == c2;
	if(c1 == c2)
	{
		cout << "both objects are equal " << endl;
	}
	
		
	



	getch();
	return 0;

}

