#include<iostream>
using namespace std;
int main()
{
	int size, arr[100],del;
	cout << "Enter the Size of Array : ";
	cin >> size;
	cout << "Elements of Array : " << endl;
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	cout << "Enter the index to be delete : ";
	cin >> del;
	if (del < size)
	{
	cout << "Array after deleting :"<<endl;
		for (int i = 0; i < size; i++)
		{
			if (del == i)
			{

			}
			else
				cout << arr[i] << endl;
		}
	}
	else
		cout << "Deletion not possible "<< endl;
	return 0;
}