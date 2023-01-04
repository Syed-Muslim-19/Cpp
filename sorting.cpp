#include<iostream>
using namespace std;
int main()
{
	int arr[100],size,temp=0;
	cout << "Enter the sie of Array : ";
	cin >> size;
	for (int i = 0; i < size; i++)
		cin >> arr[i];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[j] > arr[i])
			{
				temp=arr[i];
				arr[i] = arr[j];
				arr[j]=temp;
			}
		}
	}
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	return 0;
}