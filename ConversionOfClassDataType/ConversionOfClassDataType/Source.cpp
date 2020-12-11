#include<iostream>
#include<conio.h>

using namespace std;

class  Base
{
	int i;

public:
	void SetData(int i)
	{
		this->i = i;
	}
	void  Display()
	{
		cout << "the value of i is : " << i << endl;
	}

};
class  Derived 
{
	int j;

public:
	void SetDataD(int j)
	{
		this->j = j;
	}
	void  DisplayD()
	{
		cout << "the value of j is : " << j << endl;
	}

};

int main()
{
	Base b;
	Derived d;
	Derived *dp;
	
	(Derived(b)).SetDataD(34);
	//d.Display();



	getch();

	return 0;

}