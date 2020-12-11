#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class Student
{

private:

	int rollno;
	string name;
	class Address {
	private:
		int houseno;
		string Street;
		string city;
		string state;
		string pincode;
	public:
		void setAddress(int h, string s, string c, string st, string p)
		{
			houseno = h;
			Street = s;
			city = c;
			state = st;
			pincode = p;


		}


		void 	showAddress()
		{
			cout << endl << "house no : "<< houseno << endl<<"Street : "
				<< Street << endl <<"City :  " << city <<endl<<
				"Pincode : " << pincode << endl << "State  : " <<
				state << endl;
		}
	};
	Address add;
public:

	void setRollno(int n)
	{
		rollno = n;
	}

	void setName(string s)
	{
		name = s;
	}

	void setAddress(int h, string s, string c, string st, string p) {
		add.setAddress(h, s, c, st, p);

	}
	void showData()
	{
		cout << "Student Data is :" << endl;
		cout <<"roll no : " <<rollno << endl;
		cout << "name  : " << name << endl;
		add.showAddress();
	}
};


int main()
		{



			Student s1;
			s1.setRollno(1);
			s1.setName("vibhor gupta");
			s1.setAddress(471, "school road", "jagadhri", "haryana ", "135003");
			s1.showData();
			getch();
			return  0;
		}