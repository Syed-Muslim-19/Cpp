#include<iostream>
using namespace std;
int main()
{
	int nums1[100], nums2[100],i=0,j=0;
	double flag,size1, size2;
	cout << "Size of Array 1 :";
	cin >> size1;
	cout << "Enter The Element of Array : " << endl;
	for (i = 0; i < size1; i++)
		cin >> nums1[i];
	cout << "Size of Array 2 :";
	cin >> size2;
	cout << "Enter The Element of Array 2 : " << endl;
	for (i = 0; i < size2; i++)
		cin >> nums2[i];
	for (i = 0; i < size1; i++)
	{
		cout << nums1[i] << " ";
	}
	for (j = 0; j < size2; j++)
	{
		flag = 0;
		for (i = 0; i < size1; i++)
		{
			if (nums2[j] == nums1[i])
				flag = 1;
		}
		if (flag != 1)
		{
			cout << nums2[j] << " ";
		}
	}

	return 0;
}