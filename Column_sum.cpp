#include<iostream>
using namespace std;
int main()
{
	int m, n, sumr = 0, sumc = 0, fsum = 0;
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
	for (int i = 0; i < n; i++)
	{
		int j;
		for (j = 0; j < m; j++)
		{
		sumr += arr[j][i];
		}
		fsum = sumr - sumc;
		cout << "Element of Column " << i + 1 << " sum is : " << fsum << endl;
		sumr = sumc;
	}

	return 0;
}
