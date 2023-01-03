#include<iostream>
using namespace std;
int main()
{
	int y;
	cout << "Enter the Year : ";
	cin >> y;
	if (y % 4 == 0)
	{
		if (y % 100 == 0)
		{
			if (y % 400 == 0)
				cout << "Is a Leap year";
			else
				cout << "Is not a leap year";
		}
		else
			cout << "Is a Leap year";
	}
	else
		cout << "Is not a leap year";
	return 0;
}