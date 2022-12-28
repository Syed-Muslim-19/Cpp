//#include<iostream>
//using namespace std;
//int main()
//{
//	int m, n;
//	int arr[100][100];
//	cout << "Enter the rows : ";
//	cin >> m;
//	cout << "Enter the cloumns : ";
//	cin >> n;
//	if (m == n)
//	{
//		cout << "Elements of Array : " <<endl;
//		for (int i = 0; i < m; i++)
//		{
//			int j;
//			for (j = 0; j < n; j++)
//			{
//				cin >> arr[i][j];
//			}
//		}
//		cout << "The Matrice is : " << endl;
//		for (int i = 0; i < m; i++)
//		{
//			int j;
//			for (j = 0; j < n; j++)
//			{
//				cout << arr[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << "Lower Triangle : " << endl;
//		for (int i = 0; i < m; i++)
//		{
//			int j;
//			for (j = 0; j < n; j++)
//			{
//				if (i < j)
//				{
//					cout <<"  ";
//				}
//				else
//					cout << arr[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << "Upper Triangle : " << endl;
//		for (int i = 0; i < m; i++)
//		{
//			int j;
//			for (j = 0; j < n; j++)
//			{
//				if (i > j)
//				{
//					cout <<"  ";
//				}
//				else
//					cout << arr[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//	else
//		cout << "It is not a square matrice ";
//	return 0;
//}