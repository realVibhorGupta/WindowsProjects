#include<iostream>
#include<conio.h>

using namespace std;

void firstNumber()
{
	int a = 1;
	cout << "first number"<<a<<endl;
}

void secondNumber()
{
	int a = 13;
	cout << "second number" << a << endl;
}
void one(int a, int b)
{
	cout << "Value of sum is :"<<a + b << "\n";
}
void two(int a, int b)
{
	cout <<"Value of multiplication is:"<< a*b << "\n";
}
int main()
{

	int a{ 2 };
	void (*ptr)(); //Declare a function pointer to void because the functions are of void type

	ptr = &firstNumber;// ptr->firstNumber;
		ptr();

	ptr = &secondNumber;//ptr->secondNumber
	 ptr();

	 void(*fptr)(int, int); //Declare a function pointer to voids with two int params

	 fptr = &one; //fptr -> one
	 fptr(12, 3); //=> one(12, 3)

	 fptr = &two; //fptr -> two
	 fptr(5, 4); //=> two(5, 3)
	 
	 void(*fptr2[2])(int, int) = {one,two};
	 fptr2[0](2, 6);
	 fptr2[1](3, 5);


	 cout << "a : " <<a;

	getch();
	return 0;



}