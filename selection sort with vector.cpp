#include<iostream>
#include<vector>
using namespace std;
void SelectionSort(vector<int> arr, int size)
{
	for (unsigned int i = 0; i < size - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	vector<int> arr;
	int size,element;
	cout << "enter the size of array : " << endl;
	cin >> size;
	cout << "array : "<<endl;
	for (int i = 0; i < size; i++) {
		cin >> element;
		arr.push_back(element);
	}
	SelectionSort(arr,size);

	return 0;
}