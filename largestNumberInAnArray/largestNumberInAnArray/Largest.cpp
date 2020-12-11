#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a[10], i, max;
	//enters the elements of array a
	cout << "Enter the numbers:";
	for (i = 0;i < 10;i++)
	{
		cin >> a[i];
	}

	cout << "THE NUMBERS ENTERED ARE :" << endl;

	
	for (i = 0;i < 10;i++)
	{
		cout << a[i] << endl;
	}


	
	for (i = 0;i < 10;i++)
	{
		if (a[i] > a[i + 1])
		{
			max = a[i];
			cout << "the largest number is:" << '\t' << max;
			


		}
		else if(a[i] < a[i + 1]){

			i = i + 1;
			i++;
			
		}
		
	}

	


	getch();
	return 0;




}