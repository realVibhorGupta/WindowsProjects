#include <iostream>
#include <conio.h>

using namespace std;

void constant_variable() {
	const int i = 10;//initialisation is important
	const int j = 2 + i;
	//i = 20;

	cout << "value of constant j : " << j << endl<<"in this function is increased value by i but cannot be incremented "<<endl;

}

void constant_arguments(const int i)
{
	cout << "constant arguments called : " << endl;
	//i++;    // Error
	
}

const int constant_functions()
{
	cout << "constant functions called : " << endl;
	return 1;
}


int main()
{
	constant_variable();
	constant_arguments(3);
	constant_functions();
	
	

	getch();
	return 0;
}

