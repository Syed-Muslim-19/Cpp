#include<iostream>
using namespace std;
int main()
{
	int n, rem, count;
	cout << "Enter any integer : ";
	cin >> n;
	for (int i = 0; i < 10; i++)
	{
		count = 0;
		for (int j = n; j > 0; j = j / 10)
		{
			rem = j % 10;
			if (rem == i)
			{
				count++;
			}
		}
		cout << "The frequency of " << i << " is " << count << endl;
	}
	return 0;
}