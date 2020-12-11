#include<iostream>
#include<conio.h>

using namespace std;

class A
{
public:
	void Displaya()
	{
		cout << "hello World base classs function" << endl;
	}
};


class B:public virtual A
{
public:
	void Displayb()
	{
		cout << "Derived1 class Function" << endl;
	}

};
class C :public virtual  A
{
public:
	void Displayc()
	{
		cout << "Derived2 class Function" << endl;
	}

};
class D :public B,public C
{
public:
	void Displayd()
	{
		cout << "Derived2 class Function" << endl;
	}

};
int main()
{
	D d;
	d.Displaya();
	
	getch();
	return 0;
}