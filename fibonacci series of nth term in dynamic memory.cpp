#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the length of series : ";
	cin >> n;
	int* ptr = new int[n];
	*(ptr+0)= 1;
	*(ptr+1) = 2;
	cout << "fibonacci sequence is  :" << endl;
	cout << *(ptr + 0) << ", ";
	for (int i = 2; i < n; i++)
	{
		*(ptr+i) = *(ptr+(i-1)) + *(ptr+(i - 2));
	}
	for (int i = 0; i < n; i++)
		cout << *(ptr + i) << ", ";
	delete []ptr;
}