#include <iostream>
#include<conio.h>

using namespace std;


class BaseClass
{
	int a;
public:
	BaseClass(int x)
	{
		a = x;
		cout << "Based CLass consstructor initaisles : " << endl;
	}
	void DisplayA()
	{
		cout << "value of A : " << a << endl;
		
	}
};

class Test:public BaseClass
{
	int b;
public:
	Test(int x,int y):BaseClass(x),b(y)
	{
		cout << "DErived CLass consstructor initaisles : " << endl;

	}
	void DisplayB()
	{
		cout << "value of B : " << b << endl;
	}
};
int main(void)
{
	Test t(10, 20);
	t.DisplayA();
	t.DisplayB();
	getch();
	return  0;
}