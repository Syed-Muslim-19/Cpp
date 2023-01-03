#include<iostream>
using namespace std;
int main()
{
	int n1, n2, n3;
	cout << "Age of Person 1: ";
	cin >> n1;
	cout << "Age of Person 2: ";
	cin >> n2;
	cout << "Age of Person 3: ";
	cin >> n3;
	if (n1 > 0 && n2 > 0 && n2 > 0)
	{
		if (n1 > n2 && n1 > n3)
			cout << "Person 1 is Oldest";
		if (n2 > n1 && n2 > n3)
			cout << "Person 2 is Oldest";
		if (n3 > n2 && n3 > n1)
			cout << "Person 3 is Oldest";
		cout << endl;
		if (n1 < n2 && n1 < n3)
			cout << "Person 1 is Youngest";
		if (n2 < n1 && n2 < n3)
			cout << "Person 2 is Youngest";
		if (n3 < n2 && n3 < n1)
			cout << "Person 3 is Youngest";
	}
	else
		cout << "Invalid condition";
	return 0;
}