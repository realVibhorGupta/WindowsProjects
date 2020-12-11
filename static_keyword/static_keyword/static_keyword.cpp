#include <iostream>
#include <conio.h>

using namespace std;

void counter()
{
	static int count = 0;
	int count1 = 0;
	cout << "count with static"<<count++<<endl;
	cout << "count without static" << count1++ << endl;
}
class Abc
{
	 int i;
public:
	Abc()
	{
		i = 0;
		cout << "constructor"<<endl;
	}
	~Abc()
	{
	//	cout << "destructor" << endl;
	}
};

void f()
{
	static Abc obj;
}
int main()
{
	for (int i = 0; i<5; i++)
	{
		counter();
	}

	int x = 0;
	if (x == 0)
	{
		f();
	}
	cout << "END" << endl;
	//You must be thinking, why was destructor not called upon the end of the scope of if condition. 
	//This is because object was static, which has scope till the program lifetime, hence destructor for this object was called when main() exits.
	getch();
	return 0;
}