#include<iostream>
using namespace std;

template<class T>
class Matrix {
	T** matrix;
	int cols, rows;
public:
	Matrix(int rows, int cols) {
		this->cols = cols;
		this->rows = rows;
		matrix = new T * [rows];
		for (int i = 0; i < rows; i++) {
			matrix[i] = new T[cols];
		}
	}

	Matrix(const Matrix& obj) {
		rows = obj.rows;
		cols = obj.cols;

		matrix = new T * [rows];
		for (int i = 0; i < rows; i++) {
			matrix[i] = new T[cols];
			for (int j = 0; j < cols; j++) {
				matrix[i][j] = obj.matrix[i][j];
			}
		}
	}

	void insertElement(const T& element, int rowNo, int colNo) {
		matrix[rowNo][colNo] = element;
	}

	Matrix operator+(const Matrix& obj2) {
		if (obj2.rows == rows && obj2.cols == cols) {
			Matrix result(cols, rows);
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < cols; j++) {
					result.matrix[i][j] = matrix[i][j] + obj2.matrix[i][j];
				}
			}
			return result;
		}
		else {
			cout << "Rows and Cols not Equal";
			return Matrix(0, 0);
		}
	}

	void print() {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}

	void transpose() {
		for (int i = 0; i < cols; i++) {
			for (int j = 0; j < rows; j++) {
				cout << matrix[j][i] << " ";
			}
			cout << endl;
		}
	}

	~Matrix() {
		for (int i = 0; i < rows; i++) {
			delete[] matrix[i];
		}
		delete[] matrix;
	}
};

int main() {
	Matrix<int> m1(2, 3);
	m1.insertElement(1, 0, 0);
	m1.insertElement(1, 0, 1);
	m1.insertElement(1, 0, 2);
	m1.insertElement(0, 1, 0);
	m1.insertElement(0, 1, 1);
	m1.insertElement(0, 1, 2);
	cout << "This is Matrix m1 : " << endl;
	m1.print();
	cout << "This is Transpose of Matrix m1 : " << endl;
	m1.transpose();
	Matrix<int> m2(2, 3);
	m2.insertElement(-1, 0, 0);
	m2.insertElement(-1, 0, 1);
	m2.insertElement(-1, 0, 2);
	m2.insertElement(10, 1, 0);
	m2.insertElement(5, 1, 1);
	m2.insertElement(1, 1, 2);
	cout << "This is Matrix m2 : " << endl;
	m2.print();
	cout << "This is Transpose of Matrix m2 : " << endl;
	m2.transpose();
	Matrix<int> m3(m2);
	Matrix<int> m4 = m1 + m3;
	cout << "Sum of m2 and m2 : "<<endl;
	m4.transpose();
	return 0;
}
