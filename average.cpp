#include<iostream>
using namespace std;
int main()
{
	float s, n, avg;
	cout << "Enter the total sum of the average : ";
	cin >> s;
	cout << "Number of values in the average : ";
	cin >> n;
	if (n > 0)
	{
		avg = s / n;
		cout << "The Average is : " << avg;
	}
	else
		cout << "Invalid Condition ";
}