#include<iostream>
using namespace std;
int main()
{
	int m, n,lsum=0,rsum=0;
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
			cout<<arr[i][j]<<" ";
		}
		cout << endl;
	}
	cout << endl;
	if (m == n)
	{
		for (int i = 0; i < m; i++)
		{
			int j;
			for (j = 0; j < n; j++)
			{
				if (i == j)
					lsum += arr[i][j];

				if (i + j == n - 1)
					rsum += arr[i][j];
			}
		}
		cout << "Left Diagonal sum : " << lsum << endl;
		cout << "Right Diagonal sum : " << rsum << endl;
		cout << "Total sum of Diagonals : " << lsum + rsum << endl;
	}
	else
		cout << "Not a Square Matrice so sum of diagonals not possible" << endl;
	return 0;
}
