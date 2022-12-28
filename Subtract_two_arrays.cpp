#include<iostream>
using namespace std;
int main()
{
	int m, n;
	int arr1[100][100], arr2[100][100];
	cout << "Enter the rows : ";
	cin >> m;
	cout << "Enter the cloumns : ";
	cin >> n;
	cout << "Array One Element : " << endl;
	for (int i = 0; i < m; i++)
	{
		int j;
		for (j = 0; j < n; j++)
		{
			cin >> arr1[i][j];
		}
	}
	cout << "Array One Element : " << endl;
	for (int i = 0; i < m; i++)
	{
		int j;
		for (j = 0; j < n; j++)
		{
			cin >> arr2[i][j];
		}
	}
	cout << "The Matrice one is : " << endl;
	for (int i = 0; i < m; i++)
	{
		int j;
		for (j = 0; j < n; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "The Matrice Two is : " << endl;
	for (int i = 0; i < m; i++)
	{
		int j;
		for (j = 0; j < n; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Difference of two arrays is : " << endl;
	for (int i = 0; i < m; i++)
	{
		int j;
		for (j = 0; j < n; j++)
		{
			cout << arr1[i][j]- arr2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
