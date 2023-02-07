#include<iostream>
using namespace std;
void copyArray(int* arr, int*& arr1, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr1[i] = *(arr + i);
	}
}
void reduceArray(int* arr, int*& arr1, int size)
{
	int num;
	cout << "Enter the number : ";
	cin >> num;
	for (int i = size - 1; i >= size - num; i--)
		cout << arr1[i] << " ";

}
int main()
{
	int size;
	cout << "Enter the size of array : ";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
		cin >> *(arr + i);

	int* arr1 = new int[size];
	copyArray(arr, arr1, size);
	reduceArray(arr, arr1, size);
}