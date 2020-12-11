#include<iostream>
#include<conio.h>

using namespace std;
class Students
{
public:
	void Details()
	{
		cout << "MY NAME IS VIBHOR " <<endl;
	}
	void Details1()
	{
		cout << "MY NAME IS VIBHOR With a * " << endl;
	}
};
int main()
{
	int a = 3;
	int *ptr1;
	ptr1 = &a;
	int **ptr2;
	ptr2 = &ptr1;
	cout << *ptr1<<endl;
	cout << ptr1<< endl;
	cout << **ptr2<<endl;
	cout << ptr2 << endl;

	int *c;

	int v[12] = { 12,3,45,6,7,843,5,57,3,45,65,768 };

	c = &v[0];
//	c = v;
	int sum = 0;
	cout << "ELEMENST ARE"<<endl;
	for (int i = 0; i < 12;i++)
	{
		cout << *c << endl;
		sum = sum + *c;
		*c++;
	}


	



	cout << "total value is :" << sum << endl;



	Students s1;
	s1.Details();
	Students *s2;
	s2 = &s1;

	s2->Details1();
	(*s2).Details1();
	getch();
	return 0;



}