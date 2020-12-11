#include<iostream>
#include<conio.h>
using namespace std;

void function()
{
	static  int  x=2;//static local variable
	int y=4;//non static variable
	cout << "static local variable" << x << endl;
	cout << "non static variable or instance variable "<< y  << endl;
}
class  Account
{
private:
	int balance;//instance member variables
	//static  float roi;//static member variables or class variable//rate of interest
public:

	static  float roi;


	void setBalance(int b)
	{
		balance = b;
	}
static	 void setRoi(float r)//put static before function to access the making static object
	{


		roi = r;
		cout << "the value of roi is:" << roi << endl;
	}
};

float Account::roi = 2;//we have to access static member variable in this way,its value doesnt depend upon object

int main()
{

	function();
	Account  a1, a2;
	a1.roi;//if  defined  public;
	Account::roi;//if defined public

	a1.setRoi(3.4);//to make the object or
	Account::setRoi(23.4);//if function is static

	getch();
	return 0;


}