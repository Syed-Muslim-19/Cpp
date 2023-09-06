#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int>& arr,int size) {
	for (int i = 1; i < size; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main() {
	vector<int> arr;
	int size,element;
	cout << "Enter the size of Array : " << endl;
	cin >> size;
	cout << "Array : "<<endl;
	for (int i = 0; i < size; i++) {
		cin >> element;
		arr.push_back(element);
	}
	insertionSort(arr,size);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}