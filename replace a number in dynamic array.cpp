#include<iostream>
using namespace std;
int main()
{
	int* ptr;
	int size;
	cout << "SIZE : ";
	cin >> size;
	ptr = new int[size];
	cout << "INPUT : " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >>*(ptr + i);
	}
	cout << "OUTPUT : " << endl;
	for (int i = 0; i < size; i++)
		cout << *(ptr + i) << endl;
	int change,index;
	cout << "To be Change : ";
	cin >> change;
	cout << "Change with index : ";
	cin >> index;
	*(ptr + index) = change;
	cout << "After Changing : " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << *(ptr + i) << endl;
	}
	return 0;
}