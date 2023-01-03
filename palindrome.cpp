#include<iostream>
using namespace std;
int PC(int n)
{
	int rem = 0, sum = 0, temp;
	temp = n;
	while (n != 0)
	{
		rem = n % 10;
		sum = (sum * 10) + rem;
		n = n / 10;
	}
	if (temp == sum)
		cout << "Its a Palindrome Number" << endl;
	else
		cout << "Not a Palindrome Number" << endl;
	return 0;
}
int main()
{
	int x;
	cout << "Enter any integer : ";
	cin >> x;
	PC(x);
	return 0;
}
