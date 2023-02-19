#include <iostream>
#include <fstream>
using namespace std;
int** InputMatrix(ifstream& fin, int& rows, int& cols)
{
    fin >> rows >> cols; 
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) 
    {
       
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; j++) 
        {
            fin >> matrix[i][j];
        }
    }
    return matrix;
}
void OutputMatrix(int** matrix, const int& ROWS, const int& COLS)
{
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++) 
        {
            if(matrix[i][j]>=0)
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int** AddMatrix(int** matrixA, int** matrixB, const int& ROWS, const int& COLS)
{
    int** R = new int* [ROWS];
    for (int i = 0; i < ROWS; i++)
        R[i] = new int[COLS];

    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++)
        {
            R[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return R;
}
int** TransposeMatrix(int** matrix, const int& ROWS, const int& COLS)
{
    int** Result = new int* [ROWS];
    for (int i = 0; i < ROWS; i++)
        Result[i] = new int[COLS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            Result[i][j]=matrix[j][i];
        }
    }
    return Result;
}
bool IsSymmetric(int** matrix, const int& ROWS, const int& COLS)
{
    if (ROWS != COLS) 
    {
        return false; 
    }
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++) 
        {
            if (i != j && matrix[i][j] != matrix[j][i]) 
            {
                return false; 
            }
        }
    }
    return true;
}
void InterchangeRows(int*& row1, int*& row2)
{
    int* temp = row1;
    row1= row2;
    row2= temp;
}
void InterchangeRows(int** matrix, const int& ROWS, const int& COLS)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
        int temp = matrix[0][j];
        matrix[0][j] = matrix[2][j];
        matrix[2][j] = temp;
        }
    }
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << matrix[i][j]<<" ";
        }
        cout << endl;
    }
}

int main() {
    ifstream fin("InputFile.txt");
    int rA, cA,rB,cB,rC,cC;
    cout << "MATRIX A : " << endl;
    int** matrixA = InputMatrix(fin, rA, cA);
    OutputMatrix(matrixA, rA, cA);
    cout << endl;
    cout << "MATRIX B : " << endl;
    int** matrixB = InputMatrix(fin, rB, cB);
    OutputMatrix(matrixB, rB, cB);
    cout << endl;
    cout << "MATRIX C : " << endl;
    int** matrixC = InputMatrix(fin, rC, cC);
    OutputMatrix(matrixC, rC, cC);
    cout << endl;
    fin.close();

    int** matrixADD = AddMatrix(matrixA, matrixB, rA, cA);
    cout << "A+B : "<<endl;
    OutputMatrix(matrixADD, rA, cA);
    cout << endl;
    int** matrixADD2 = AddMatrix(matrixA, matrixC, rC, cC);
    cout << "A+C : " << endl;
    if (rA == rC && cA == cC)
        cout << "Addition not possible" << endl;
    else
        OutputMatrix(matrixADD2, rC, cC);
    cout << endl;
    int** matrixAT = TransposeMatrix(matrixA, rA, cA);
    cout << "Transpose of Matrix A: "<<endl;
    OutputMatrix(matrixAT, cA, rA);
    int** matrixCT = TransposeMatrix(matrixC, rC, cC);
    cout << "Transpose of Matrix C: " << endl;
    OutputMatrix(matrixCT, cC, rC);
    cout << endl;
    if (IsSymmetric(matrixA, rA, cA)) 
    {
        cout << "Matrix A is symmetric"<<endl;
    }
    else 
    {
        cout << "Matrix A is not symmetric"<<endl;
    }
    if (IsSymmetric(matrixB, rB, cB))
    {
        cout << "Matrix B is symmetric" << endl;
    }
    else
    {
        cout << "Matrix B is not symmetric" << endl;
    }
    cout << endl;
    cout << "ROW 1 : 1"<<endl;
    cout << "ROW 2 : 3" << endl;
    cout << "Matrix A after interchanging rows 1 and 3:"<<endl;
    InterchangeRows(matrixA, rA, cA);
    cout << endl;
    for (int i = 0; i < rA; i++) 
    {
        delete[] matrixA[i];
        delete[] matrixB[i];
        delete[] matrixC[i];
        delete[] matrixAT[i];
    }
    delete[] matrixA;
    delete[] matrixB;
    delete[] matrixC;
    delete[] matrixAT;

    return 0;
}
