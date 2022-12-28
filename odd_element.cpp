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
	cout << "Odd number in a Array : "<<endl;
	for(int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				cout << arr[i] << endl;
			}
		}
	}
	return 0;
}