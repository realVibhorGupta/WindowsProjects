#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

void main()
{
	ofstream fout;
	fout.open("C:/Users/vibhor/Desktop/New folder/myFile1.txt");//here path is given where we have to put the file
	getch();
	fout << "HELLO FILE HANDLING 2 IN C++";
	cout << "Message have been written on the file";

	fout.close( );
	getch( );

	
}