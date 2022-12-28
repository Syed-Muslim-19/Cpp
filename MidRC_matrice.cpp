#include<iostream>
using namespace std;
int main()
{
	int m, n,odd;
	int arr[100][100];
	cout << "Enter the rows : ";
	cin >> m;
	cout << "Enter the cloumns : ";
	cin >> n;
	odd = (m - 1) / 2;
	if (m == n && m%2!=0 && n%2!=0)
	{
		cout << "Elements of Array : " << endl;
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
		cout << "Middle Row is : "<<endl;
		for (int i = 0; i < m; i++)
		{
			int j;
			for (j = 0; j < n; j++)
			{
				if (odd==i)
				{
				cout << arr[i][j] << " ";
				}
			}
		}
		cout << endl;
		cout << "Middle Column is : " << endl;
		for (int i = 0; i < m; i++)
		{
			int j;
			for (j = 0; j < n; j++)
			{
				if (odd == j)
				{
					cout << arr[i][j] << " ";
				}
			}
		}
	}
	else
		cout << "It is not a square matrice ";
	return 0;
}
