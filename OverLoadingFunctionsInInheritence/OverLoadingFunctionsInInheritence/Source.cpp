#include<iostream>
#include<conio.h>

using namespace std;

class BaseClass
{
private:
	int a=20, b=30;
public:
	int add(int a,int b)
	{
		return a + b;
	}
};
class DerivedClass:public BaseClass
{
private:
	int a=30, b=10;
public:
	int add()
	{
		return a + b;
	}
};

int main()
{
	DerivedClass d;
	d.add();
	d.add();

	getch();
	return 0;
}