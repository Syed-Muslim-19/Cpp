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

	int diff = arr[1] - arr[0];
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] - arr[i] > diff)
				diff = arr[j] - arr[i];
		}
	}
	cout << "Max Difference is : " << diff << endl;
	return 0;
}