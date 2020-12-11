#include<iostream>
#include<conio.h>

using namespace std;

class  Box
{
private:
	int l,b,h;
public:
	void setData(int x,int y, int z)
	{
		l = x;
		b = y;
		h = z;

	}
	void showData()
	{
		
		cout << "length l : " << l << endl << "breadth b : " << b << endl << "height h : " << h << endl;
	}


};


int main()
{
	
	Box small_box;
	small_box.setData(2, 3, 4);
	
	small_box.showData();

	getchar();
	return 0;
}