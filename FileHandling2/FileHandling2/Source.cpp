#include<iostream>
#include<fstream>
#include<conio.h>





using namespace std;

void main()
{
	system("CLS");
	ifstream fin;
	char ch;
	fin.open("C:/Users/vibhor/Desktop/New folder/myFile1.txt");

	fin >> ch;
	//this lopp keeps on working taking one character at a time
	while(!fin.eof())
	{
		cout << ch;
		fin >> ch;
	}
	fin.close();
	getch();
}