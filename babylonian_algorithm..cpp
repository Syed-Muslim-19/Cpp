#include<iostream>
using namespace std;
int main()
{
	double N, A;
	do 
	{
		cout << "Write a number : ";
		cin >> N;
		cout << "The Guess of square root : ";
		cin >> A;
		if (N >= 0)
		{
			for (int i = 1; i <= 10; i++)
			{
				A = (A + (N / A)) / 2;
				cout << "The next better approximation is : " << A << endl;
			}
		}
		else
			cout << "Invalid number entered";
	} while (N != -1);
	return 0;
}