#include <iostream>

using namespace std;
int a, b;
void main()
{

	enum MyDay
	{
		WakeUp,
		GetDressed,
		GotoWork,
		Eat,
		Sleep
	};

	MyDay my_day = WakeUp;
	cout << "my day:" << my_day << endl;

	my_day = GetDressed;
	cout << "my day:" << my_day << endl;

	my_day = GotoWork;
	cout << "my day" << my_day << endl;

	my_day = Eat;
	cout << "my day" << my_day << endl;

	my_day = Sleep;
	cout << "my day:" << my_day << endl;

	union UnionType1
	{
	public:
		unsigned int asInt;
		float asFloat;
	
		short asShort[2];


	};


	UnionType1 union_type1;
	union_type1.asInt = 1;
	cout << "asInt is:1" << union_type1.asInt << endl << "as Float is: " << union_type1.asFloat <<
		endl << "as Short [0]is: " << union_type1.asShort[0] << endl << "as Short [1]is: " << union_type1.asShort[1] << endl;

	union_type1.asShort[1] = 1;

	cout << "asInt is:" << union_type1.asInt << endl << "as Float is: " << union_type1.asFloat <<
		endl << "as Short [0]is: " << union_type1.asShort[0] << endl << "as Short [1]is:1 " << union_type1.asShort[1] << endl;

	union_type1.asFloat = 1.06;
	cout << "asInt is:" << union_type1.asInt << endl << "as Float is:1.06 " << union_type1.asFloat <<
		endl << "as Short [0]is: " << union_type1.asShort[0] << endl << "as Short [1]is: " << union_type1.asShort[1] << endl;

	
	struct book {
	public:
		int bookid;
		
		float price;

		int add(int a,int b)
		{
			return a + b;


		}

	};
	book b1 = { 1,200 };
	book b2;
	b2.bookid = 2;

	
	b2.price = 30.00;



	//to copy  data from one variable in another variable
	book b3 = b2;
	//to take data input from user
	book b4;
	cout << "enter the id name and price of the book"<<endl;
	//cin >> b4.bookid >> b4.price;

	//input values from functions
	book b5;
	cout << b1.bookid << b1.price << endl ;
	cout<<b1.add(2,4)<<endl;

	cout << "Press enter to continue in the console window:" << endl;
	getchar();

}