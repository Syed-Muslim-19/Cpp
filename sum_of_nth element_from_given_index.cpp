#include<iostream>
using namespace std;
int Sum(int arr[], int size, int& sum)
{
	int ind, num;
	cout << "Enter the Elements of Array : " << endl;
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	cout << "Enter the Index : ";
	cin >> ind;
	cout << "Enter the N : ";
	cin >> num;
	if ((ind + num) <= size)
	{
		for (int i = ind; i < (ind + num); i++)
			sum = sum + arr[i];
	}
	else
	{
		for (int i = ind; i < size; i++)
			sum = sum + arr[i];
	}

	return sum;
}
int main()
{
	int num[100], n;
	int sum = 0;
	cout << "Enter the Size of Array  : ";
	cin >> n;
	cout << "Return : ";
	Sum(num, n, sum);
	cout << "The sum is : " << sum;
}