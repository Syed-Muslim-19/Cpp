#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> arr;
	int size;
	int element;
	cout << "Enter the size of Array : ";
	cin >> size;
	for (int i = 0; i < size; i++) {
		cin >> element;
		arr.push_back(element);
	}
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "Array after Bubble Sort : " << endl;
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	return 0;
}