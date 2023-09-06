#include<iostream>
#include<vector>
using namespace std;
int main() 
{
	vector<int> arr;
	int size,target,element,mid=0;
	bool flag = false;
	cout << "Enter the size of Array : " << endl;
	cin >> size;
	cout << "Array : "<<endl;
	for (int i = 0; i < size; i++) {
		cin >> element;
		arr.push_back(element);
	}
	int low = 0, high = arr.size() - 1;
	cout << "Enter the element to be search : " << endl;
	cin >> target;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; low<=high; i++) {
		mid =low+(high-low) / 2;
		if (arr[mid] == target) {
			flag = true;
			break;
		}
		else if (arr[mid] > target) {
			high = mid - 1;
		}
		else if (arr[mid]<target) {
			low = mid + 1;
		}
		else {
			flag = false;
		}
	}
	if (flag == true) {
		cout << "Number Found";
	}
	else {
		cout << "No Number Found ";
	}
	return 0;
}