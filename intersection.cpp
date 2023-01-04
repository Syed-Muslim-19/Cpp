#include<iostream>
using namespace std;
int main()
{
	int size1, size2;
	int arr1[100], arr2[100];
	cout << "Enter the size of Array 1 : ";
	cin >> size1;
	cout << "Enter the ELement of Array 1 : " << endl;
	for (int i = 0; i < size1; i++)
		cin >> arr1[i];
	cout << "Enter the size of Array 2 : ";
	cin >> size2;
	cout << "Enter the ELement of Array 2 : " << endl;
	for (int i = 0; i < size2; i++)
		cin >> arr2[i];
	cout << "INTERSECTION : " << endl;

	if (size1 > size2)
	{
		for (int i = 0; i < size1; i++)
		{
			for (int j = 0; j < size1; j++)
			{
				if (arr1[i] == arr2[j])
				{
					cout << arr1[i] << " ";
					break;
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < size2; i++)
		{
			for (int j = 0; j < size2; j++)
			{
				if (arr1[i] == arr2[j])
				{
					cout << arr2[j] << " ";
					break;
				}
			}
		}
	}

	return 0;
}