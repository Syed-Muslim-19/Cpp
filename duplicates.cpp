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
	cout << "Array after removing duplicates : "<<endl;
	for(int i = 0; i < size; i++)
	{
		int j;
		for (j = 0; j < size; j++)
		{
			if (arr[i] == arr[j])
				break;
		}
		if(i==j)
				cout << arr[i] << endl;
	}
	return 0;
}