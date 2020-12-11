/*
Example to show a function which is a member function of one class and freind to 
another


*/

#include<iostream>
#include<conio.h>
using namespace std;

class A
{
	
private:
	int a,b;
public:
	void setData(int x,int y)
	{
		a = x;
		b = y;
	}

	void function()
	{
		cout << "this is the single friend function" << endl;
	}
	void showData()
	{
		cout << " a :  " << a << endl << "b : " << b << endl;
	}



};
class B
{
	
	//friend void A::function();
	friend class A;//if we have to use all the function of b and a
	
};

int main()
{
	A a1;

	B b1;
 

	a1.setData(2, 3);
	a1.showData();

	//b1.showData();
	getch();
	return 0;


}