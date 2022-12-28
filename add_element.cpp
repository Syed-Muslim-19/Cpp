#include<iostream>
using namespace std;
int main()
{
	int size, arr[100],temp=0,add,pos=0;
	cout << "Enter the Size of Array : ";
	cin >> size;
	cout << "Elements of Array : " << endl;
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	cout << "Input Array is : "<<endl;
	for (int i = 0; i < size; i++)
		cout<< arr[i]<<endl;
	cout << "Sorted List : " << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j]=temp;
			}
		}
		cout << arr[i]<<endl;
	}
	cout << "Element to be insert : ";
	cin >> add;
	for (int i = 0; i <= size; i++)
	{
		if (arr[i] <= add && add < arr[i + 1])
		{
			pos = i + 1;
			break;
		}
	}
	for (int i = size + 1; i > pos; --i)
	{
	arr[i] = arr[i - 1];
	}
	arr[pos] = add;
	cout << "Array after inserting element : "<<endl;
	for (int i = 0; i < size + 1; i++)
		cout << arr[i] <<endl;
	return 0;
}