#include<iostream>
#include<conio.h>

using namespace std;

class Complex
{
private:
	int a, b;
public:

	void setData(int x, int y)
	{
		a = x;
		b = y;

	}

	void showData()
	{
		cout << "a : " << a<<endl << "b : " << b << endl;
	}

/*	Complex sum(Complex c)//Can we change the function name =+
	{
		Complex  temp;
		temp.a = a + c.a;//here  a is of two instances 
		temp.b = b + c.b;//here  b is of two instances
		return temp;
	}*/


	


	Complex operator +(Complex c)//Can we change the function name =+
	{
	Complex  temp;
	temp.a=a+c.a;//here  a is of two instances
	temp.b=b+c.b;//here  b is of two instances
	return temp;
	
	}






	
};


int main()
{

	Complex c1, c2, c3;

	c1.setData(3, 4);
	c2.setData(4, 5);

	c3 = c1 + c2;//gives an error
	//c3 = c1.sum(c2);
	//c3=c1.operator+(c2);//or
	//c3=c1+c2;//above and below statements are true for operator overlaoding
	c3.showData();



	getch();
	return 0;

}

