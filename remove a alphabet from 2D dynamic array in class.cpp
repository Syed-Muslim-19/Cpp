#include<iostream>
#include<cstring>
using namespace std;
class A
{
private:
	int r, c;
	char** arr;
public:
	A()
	{
		r = 0;
		c = 0;
		arr = nullptr;
	}
	void Setter(int r,int c)
	{
		this->r = r;
		this->c = c;
		arr = new char* [r];
		for (int i = 0; i < r; i++)
		{
			arr[i] = new char[c];
		}
	}
	void Input(int row, int col)
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cin >> arr[i][j];
			}
		}
	}
	void Output()
	{
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cout << arr[i][j]<<" ";
			}
			cout << endl;
		}
	}
	void Check(int check)
	{
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				if (arr[i][j]==check)
				{
					arr[i][j] = '-';
				}
				else
				{
					arr[i][j];
				}
			}
		}
	}
};
int main()
{
	int row, col;
	char see;
	cout << "Number of Rows : ";
	cin >> row;
	cout << "Number of Columns : ";
	cin >> col;
	A array;
	array.Setter(row, col);
	cout << "Input : " << endl;
	array.Input(row, col);
	cout << "Display array : " << endl;
	array.Output();
	cout << endl;
	cout << "Alphabet to be removed : ";
	cin >> see;
	array.Check(see);
	cout << "Array after Removing Alphabet : " << endl;
	array.Output();
	return 0;
}