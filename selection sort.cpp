#include<iostream>
using namespace std;
void SelectionSort(int arr[], int n)
{
	int temp,min;
	for (int i = 0; i < n; i++)
	{
		min = arr[i];
		for (int j = i + 1; j < n; j ++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i = n-1; i >= 0; i--)
		cout << arr[i] << " ";
}
int main()
{
	int n, arr[100];
	cout << "Enter the size of Array : ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	SelectionSort(arr, n);
}