#include<iostream>
using namespace std;
int main()
{
	int size, arr[100];
	cout << "Enter the Size of Array : ";
	cin >> size;
	cout << "Elements of Array : " << endl;
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	cout << "Even Elements out :" << endl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
			cout << arr[i] << endl;
	}
	cout << "Odd Elements out :" << endl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
			cout << arr[i] << endl;
	}
	return 0;
}