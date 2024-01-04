#include<iostream>
#include<algorithm>
using namespace std;
void heapify(int arr[], int n, int k) {
	int largest = k;
	int left = 2 * k + 1;
	int right = 2 * k + 2;

	if (left < n && arr[left] > arr[largest])
		largest = left;
	if (right<n && arr[right]>arr[largest])
		largest = right;

	if (largest != k) {
		swap(arr[k], arr[largest]);
		heapify(arr, n, largest);
	}

}
void heapSort(int arr[], int n) {
	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(arr, n, i);
	}
	for (int i = n - 1; i >= 0; i--) {
		swap(arr[i], arr[0]);
		heapify(arr,i, 0);
	}
}
int main() {

	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int N = sizeof(arr) / sizeof(arr[0]);

	heapSort(arr, N);
	for (int i = 0; i < 6; ++i)
		cout << arr[i] << " ";

}
