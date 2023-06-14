#include<iostream>
using namespace std;
void BubbleSort(float arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
			float temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			}
		}
	}
	for (int i = 1; i < n+1; i++)
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

	BubbleSort(arr, n);
}