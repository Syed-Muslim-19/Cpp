#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter any number : ";
	cin >> x;
	if (x > 0)
		cout << "This number a Positive ";
	else if (x < 0)
		cout << "This number is Negative ";
	else if (x == 0)
		cout << "This number is equal to Zero";
	return 0;
}