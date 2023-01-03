#include<iostream>
using namespace std;
int main()
{
	int x = 0, y = 1, sum = 0, num;
	cout << "Enter the range : ";
	cin >> num;
	cout << "The Fibonacci sequence : " << x << " " << y << " ";
	sum = x + y;
	while (sum <= num)
	{
		cout << sum << " ";
		x = y;
		y = sum;
		sum = x + y;
	}
	return 0;
}