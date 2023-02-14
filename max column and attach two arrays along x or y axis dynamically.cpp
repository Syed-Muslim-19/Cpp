#include<iostream>
using namespace std;
int** allocatememory(int& rows, int& cols)
{
	cout << "enter the number of rows  :";
	cin >> rows;
	cout << "enter the number of rows  :";
	cin >> cols;
	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
		arr[i] = new int[cols];

	return arr;
}
void inputmatrix(int** matrix, const int rows, const int cols)
{
	cout << "input the element : " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}
}
void displaymatrix(int** matrix, const int& rows, const int& cols)
{
	cout << "matrix : " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
int* maxcol(int** matrix, int&rows, int&cols)
{
	int i = 0, j = 0;
	int* array = new int[cols];
	for (int i = 0; i < cols; i++)
	{
		int max = matrix[0][i] ;
		for (int j = 0; j < rows; j++)
		{
			if (matrix[j][i] > max)
			{
				max = matrix[j][i];
			}
		}
		array[i] = max;
	}
	   return array;
}
void deallocatememory(int** matrix, const int& rows)
{
	for (int i = 0; i < rows; i++)
		delete matrix[i];
	delete[]matrix;
}
int** concat_table(int** table1, int** table2, int row1, int col1, int row2, int col2, bool axis)
{
	if (axis == false)
	{
		for (int i = 0; i < row1; i++)
		{
			for (int j = 0; j < col1; j++)
			{
				cout << table1[i][j] << " ";
			}
			for (int j = 0; j < col2; j++)
			{
				cout << table2[i][j] << " ";
			}
			cout << endl;
		}
	}
	else if (axis == true)
	{
		for (int i = 0; i < row1 + row2; i++)
		{
			for (int j = 0; j < col1; j++)
			{
				cout << table1[i][j] << " ";
			}
			cout << endl;
			for (int j = 0; j < col2; j++)
			{
				cout << table2[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
int main()
{
	int rows, cols;
	//take input from user for rows and cols
	int** matrix = allocatememory(rows, cols);
	inputmatrix(matrix, rows, cols);
	displaymatrix(matrix, rows, cols);
	int* maxcolvalues = maxcol(matrix, rows, cols);
	for (int i = 0; i < cols; i++)
		cout << *(maxcolvalues + i) << ", ";
	cout << endl;
	int row1, col1;
	//take input from user for rows and cols
	cout << "table 1 : " << endl;
	int** table1 = allocatememory(row1, col1);
	inputmatrix(table1, row1, col1);
	int row2, col2;
	//take input from user for rows and cols
	cout << "table 2 : " << endl;
	int** table2 = allocatememory(row2, col2);
	inputmatrix(table2, row2, col2);
	bool axis;
	cout << "enter 0 for x-axis and 1 for y-axis : " << endl;
	cin >> axis;
	int** result = concat_table(table1, table2, row1, col1, row2, col2, axis);
	deallocatememory(matrix, rows);
}