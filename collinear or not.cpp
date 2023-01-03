#include<iostream>
using namespace std;
int main()
{
	float a1, a2, a3, b1, b2, b3, A;
	cout << "Enter variable of A :" << endl;
	cout << "a1: ";
	cin >> a1;
	cout << "b1: ";
	cin >> b1;
	cout << "Enter variable of B :" << endl;
	cout << "a2: ";
	cin >> a2;
	cout << "b2: ";
	cin >> b2;
	cout << "Enter variable of C :" << endl;
	cout << "a3: ";
	cin >> a3;
	cout << "b3: ";
	cin >> b3;
	A = (1 / 2) * ((a1 * (b2 - b1)) + (a2 * (b3 - b1)) + (a3 * (b1 - b2)));
	if (A > 0)
	{
		if (A == 0)
			cout << "The given points are collinear";
		else
			cout << "The given points are not collinear";
	}
	else
		cout << "slope can never be negative";
	return 0;
}