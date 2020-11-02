#include<iostream>
#include<array>
#include<conio.h>

using namespace std;
int main( )
{
	array<int , 15>my_first_stl_array = { 2,3,4,5,6 };
	cout << my_first_stl_array.at( 3 ) << endl;
	cout << my_first_stl_array [2] << endl;
	cout << my_first_stl_array.front( ) << endl;
	cout << my_first_stl_array.back( ) << endl;
	cout << my_first_stl_array.size( ) << endl;
	cout << my_first_stl_array.empty( ) << endl;
	cout << my_first_stl_array.max_size( ) << endl;
	//cout << my_first_stl_array.swap( ) << endl;
	 my_first_stl_array.fill( 6 ) ;
	 for ( int i = 0; i <= 14; i++ )
		 cout << my_first_stl_array [i] << endl;
	 


	 array<int , 5>new_array = { 2,4,1132,33,32 };
	 array<int , 5>new_array2 = {1,2,3,4,5};

	 for ( int i = 0; i <= 4;i++ )
	 {
		 cout << "first array before swapping: " << new_array [i] << endl;
	 }

	 for ( int i = 0; i <= 4; i++ )
	 {
		 cout << "second array before swapping: " << new_array2 [i] << endl;
	 }


	 new_array.swap( new_array2 );

	 for ( int i = 0; i <= 4; i++ )
	 {
		 cout << "first array after swapping: " << new_array [i] << endl;
	 }

	 for ( int i = 0; i <= 4; i++ )
	 {
		 cout << "second array after swapping: " << new_array2 [i] << endl;
	 }
	getch( );
	return 0;

}