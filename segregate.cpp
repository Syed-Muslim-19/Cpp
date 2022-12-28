#include<iostream>
using namespace std;
int main()
{
	int size, arr[100],c1=0,c0=0,i;
	cout << "Enter the Size of Array : ";
	cin >> size;
	cout << "Elements of Array : " << endl;
	for (i = 0; i < size; i++)
		cin >> arr[i];
	for (i = 0; i < size; i++)
	{
		if (arr[i] == 0 || arr[i] == 1)
		{
			if (arr[i] == 1)
				c1++;
			if (arr[i] == 0)
				c0++;
		}
		else
			cout << "Invalid Digit Entered";
	}
	for (i = 0; i <= c0; i++)
		cout << 0 << " ";
	for (i = 0; i <= c1; i++)
		cout << 1 << " ";
	return 0;
}