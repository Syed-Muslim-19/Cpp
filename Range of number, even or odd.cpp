#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter any positive number : ";
	cin >> x;
	if (x > 0)
	{
		if (x >= 0 && x <= 10)
			cout << "Range : 0 to 10";
		else if (x >= 11 && x <= 20)
			cout << "Range : 11 to 20";
		else if (x >= 21 && x <= 30)
			cout << "Range : 21 to 30";
		else if (x >= 31 && x <= 40)
			cout << "Range : 31 to 40";
		else if (x >= 41 && x <= 50)
			cout << "Range : 41 to 50";
		else if (x > 50)
			cout << "Range : Greater then 50";
		cout << endl;
		if (x % 2 == 0)
			cout << "It is a Even Number ";
		else
			cout << "It is not a Even Number ";
	}
	else
		cout << "Invalide input ";
	return 0;
}