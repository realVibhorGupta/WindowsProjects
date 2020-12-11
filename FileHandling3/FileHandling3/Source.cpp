#include<iostream>
#include<conio.h>
#include <fstream>
#include<ios>
using namespace std;

int main()
{
	
	ofstream fout;
	fout.open("C:/Users/vibhor/Desktop/New folder/myFile1.txt",ios::app|ios::binary);

	fout << "hello this is appended data \n" << endl << "hola" << endl;
	cout << "the data has been appended ";
	fout.close( );
	getch();
	return 0;


}
