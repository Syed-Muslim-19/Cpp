#include<iostream>
using namespace std;
void SelectionSort(float arr[], int n)
{
	float temp,min;
	for (int i = 0; i < n; i++)
	{
		min = arr[i];
		for (int j = i + 1; j < n; j ++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = n-1; i >= 0; i--)
		cout << arr[i] << " ";
}
int main()
{
	float arr[100];
	int n;
	cout << "Enter the size of Array : ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	SelectionSort(arr, n);
}
