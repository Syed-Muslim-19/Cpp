#include<iostream>
using namespace std;
int main()
{
	int table, range;
	cout << "Table of : ";
	cin >> table;
	cout << "Ranges from 1 to : ";
	cin >> range;
	for (int i = table; i <=table; i++)
	{
		for (int j = 1; j <= range; j++)
		{
			cout << i << " x " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
	return 0;
}