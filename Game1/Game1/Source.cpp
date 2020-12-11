#include<iostream>
#include <ctime>
using namespace std;

int main()
{
	int IGumBalls;
	int IUserguess;
	int IGuesses = 0;

	while(true)
	{
		system("CLS");
		cin.clear();
		IGuesses = 0;

		srand(static_cast<unsigned int> (time(0)));
		IGumBalls = rand() % 1000 + 1;
		cout << "HOW MANY BALLS ARE IN THE BASKET ,WHAT DO YOU THINK!!!"
			<< endl;

		do {


			cout << "Enter your guess : " << endl;
			cin >> IUserguess;

			if (IUserguess > IGumBalls)
			{
				cout << "Too high " << endl << endl;

			}
			else if (IUserguess < IGumBalls)
			{
				cout << "Too low  " << endl << endl;
			}

			IGuesses++;
		} while (IUserguess > IGumBalls || IUserguess < IGumBalls);

		cout << "you have guessed it right hurray!!!" << endl;

		cout << "yoy took" <<IGuesses<<" guesses" << endl;

		system("PAUSE");
	}



	getchar();
	return 0;
	

}