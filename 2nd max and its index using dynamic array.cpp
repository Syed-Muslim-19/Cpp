#include<iostream>
using namespace std;
int main()
{
	int size,temp=0;
	cout << "Enter the size of array : ";
	cin >> size;
	float* arr = new float[size];
	cout << "Enter the elements of array : ";
	for (int i = 0; i < size; i++)
		cin >> *(arr + i);
	float max = *(arr + 0);
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > max)
		{
			max = *(arr + i);
		}
	}
	float smax = *(arr + 0);
	for (int i = 0; i < size; i++)
	{
		if (smax<*(arr+i) && max>*(arr+i))
		{
			smax = *(arr + i);
			temp = i;
		}
	}
	cout<<"Second Maximum number is : " << smax<<endl;
	cout << "Index of second largest element is : " <<temp;
	delete[]arr;
}