#include<iostream>
using namespace std;
int main()
{
	int size, arr[100],add=0;
	cout << "Enter the Size of Array : ";
	cin >> size;
	cout << "Elements of Array : " << endl;
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	add=arr[0];
	cout << "Cyclic Arrangmnent : "<<endl;
	for (int i = 0; i < size-1; i++)
	{
		arr[i] = arr[i + 1];
		cout << arr[i] << endl;
	}
	cout << add;
	return 0;
}