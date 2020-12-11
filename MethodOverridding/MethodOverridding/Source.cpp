#include<iostream>
#include<conio.h>

using namespace std;

class Car
{
public:
	void ShiftGear()
	{
		cout << "this is a normal shift gear" << endl;
	}
	int ShiftGear(int i)
	{
		cout << "the numbers of gears are : " << i << endl;
		return 0;
	}
};

class SportsCar:public Car
{
public:

	void ShiftGear(int i)
	{

		cout << "This is the gear of a sportsCar" << endl;
		cout << "the value of i : " << i << endl;
		cout << "this is method ovverriding" << endl;
	}
	void ShiftGear(int i,int j)
	{
		cout<<"the numbers of gears are : "<< i << endl;
		
	}

};

int main()
{
	int x = 3;
	int &y = x;
	cout << y << endl;

	Car c;
	c.ShiftGear();
	c.ShiftGear(6);
	//SportsCar car;
	//car.ShiftGear(2);
	//car.Car::ShiftGear(2);
	getch();
	return 0;
}