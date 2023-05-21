#include<iostream>
using namespace std;
int** AllocateMemory(int& cols, int& rows)
{
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}
	return matrix;
}
void Input(int** matrix, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}
}
void Display(int** matrix, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void Swap_Matrix(int** matrix, int& rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			int temp = matrix[0][j];
			matrix[0][j] = matrix[rows - 1][j];
			matrix[rows - 1][j] = temp;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			int temp2 = matrix[i][0];
			matrix[i][0] = matrix[i][cols - 1];
			matrix[i][cols - 1] = temp2;
		}
	}
}
int main()
{
	int row = 3, col = 3;
	cout << "	Matrix size is 3X3 by default" << endl;
	int** Array = AllocateMemory(row, col);
	cout << "Input the element : " << endl;
	Input(Array, row, col);
	cout << "Display the Matrix : " << endl;
	Display(Array, row, col);
	cout << "After Swapping the Upper Triangle with the Lower Triangle : " << endl;
	Swap_Matrix(Array, row, col);
	Display(Array, row, col);
	return 0;
}