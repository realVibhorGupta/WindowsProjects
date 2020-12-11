#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class student
{
private:
	string name;
	int age;
public:
	void setData(string name,int age)
	{
		this->name = name;
		this->age = age;
	}

	void Display( )
	{
		cout << "the name of the student  is : " <<
			 name << endl << "the age is : " <<
			age << endl;
	}
};
int main( )
{
	pair<string , int>p1;
	pair<string , string>p2;
	pair<string , float>p3;
	pair<int , student>p4;

	student s1;
	s1.setData( "vibhor" , 27 );
	

	p1 = make_pair( "vibhor" , 26 );
	p2 = make_pair( "india" , "new delhi" );
	p3 = make_pair( "C++ for dummies" , 3264.74f );
	p4 = make_pair( 1 , s1 );


	cout << p1.first << "\t" << p1.second << endl;
	cout << p2.first << "\t" << p2.second << endl;
	cout << p3.first << "\t" << p3.second << endl;
	cout << p4.first << endl;
	student s2 = p4.second;
	s2.Display( );


	getch( );


	return 0;
}