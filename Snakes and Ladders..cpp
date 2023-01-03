#include<iostream>
#include<cstdlib>
#include<ctime> 
#include <conio.h>  
using namespace std;
int main()
{
	int n1, n2, sum1 = 0, sum2 = 0;
	srand(time(0));
	for (int i = 1; i <= 50; i++)
	{
		cout << "!!!   PLAYER 1   !!!" << endl;
		cin.get();
		if (sum1 < 21)
		{
			n1 = rand() % 6 + 1;
			cout << "Player 1's : " << n1 << endl;
			sum1 = sum1 + n1;
			if (sum1 > 20)
			{
				sum1 = sum1 - n1;
			}
			cout << "Player 1's total points : " << sum1 << endl;
			if (sum1 == 20)
			{
				cout << endl;
				cout << "!!!!!!    Player 1 wins the game    !!!!!!"<<endl;
				break;
			}
		}
		cout << endl;
		cout << "!!!   PLAYER 2   !!!"<<endl;
		cin.get();
		if (sum2 < 21)
		{
			n2 = rand() % 6 + 1;
			cout << "Player 2's : " << n2 << endl;
			sum2 = sum2 + n2;
			if (sum2 > 20)
			{
				sum2 = sum2 - n2;
			}
			cout << "Player 2's total points : " << sum2 << endl;
			if (sum2 == 20)
			{
				cout << endl;
				cout << "!!!!!!    Player 2 wins the game    !!!!!!"<<endl;
				break;
			}
		
		}
		cout << endl;
	}
	return 0;
}

