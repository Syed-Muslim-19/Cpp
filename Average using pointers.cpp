#include<iostream>
using namespace std;
int main()
{
	float arr[100];
	int num;
	float* address;
	cout << "Enter the amount of numbers used for average : ";
	cin >> num;
	cout << "Enter numbers : ";
	for (int i = 0; i < num; i++)
		cin >> arr[i];
	float sum = 0, count = 0;
	for (int i = 0; i < num; i++)
	{
		address = (arr + i);
		sum += *address;
		count++;
	}
	float average = sum / count;
	cout << "The average : " << average << endl;
}