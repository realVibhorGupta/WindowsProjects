#include<iostream>
#include <conio.h>

using namespace std;

class Dummy
{
private:
	int a, b;
public:

	void 	setData(int x,int y)
	{
		a = x;
		b = y;


	}
	void showData()
	{
		cout << "a : " << a << endl << "b : " << b << endl;
	}


	/*Dummy(Dummy &d)

	{
		a = d.a;
		b = d.b;
	}
*/
};

int main()
{
	Dummy dummy,dummy2;
	dummy.setData(2, 3);

	//Dummy dummy3 = dummy;//by copy constructor
	dummy2 = dummy;//copy is done here.....(SHALLOW COPY)//by assignment operator
	
	dummy2.showData();
	getch();
	return 0;



}