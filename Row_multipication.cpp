#include<iostream>
using namespace std;
int main()
{
	int m, n, sumr = 1;
	int arr[100][100];
	cout << "Enter the rows : ";
	cin >> m;
	cout << "Enter the cloumns : ";
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		int j;
		for (j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << "The Matrice is : " << endl;
	for (int i = 0; i < m; i++)
	{
		int j;
		for (j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		int j;
		for (j = 0; j < n; j++)
		{
			sumr *= arr[i][j];
		}
		cout << "Element of row " << i + 1 << " sum is : " << sumr<<endl;
		sumr = 1;
	}

	return 0;
}
