#include <iostream>
#include <conio.h>

using namespace std;

class Something
{
public:
	static int s_value;
};

int Something::s_value = 1;



int main()
{
	Something first;
	Something second;

	second.s_value = 2;
	//Something::s_value = 3;
	//std::cout << Something::s_value << '\n';

	cout << first.s_value << '\n';
	cout << second.s_value << '\n';
	getch();
	return 0;
}
