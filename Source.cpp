#include <iostream>

using namespace std;

class Matrix {
    int rows, cols;
    char*** mat;

public:
    Matrix(int rows, int cols) {
        this->rows = rows;
        this->cols = cols;
        mat = new char** [rows];
        for (int i = 0; i < rows; i++) {
            mat[i] = new char* [cols];
            for (int j = 0; j < cols; j++) {
                mat[i][j] = nullptr;
            }
        }
    }

    void insertElement(const char* element, int rowNo, int colNo) {
        if (rowNo >= 0 && rowNo < rows && colNo >= 0 && colNo < cols) {
            if (mat[rowNo][colNo] != nullptr) {
                delete[] mat[rowNo][colNo];
            }

            int len = 0;
            while (element[len] != '\0') {
                len++;
            }

            mat[rowNo][colNo] = new char[len + 1];

            for (int i = 0; i <= len; i++) {
                mat[rowNo][colNo][i] = element[i];
            }
        }
    }

    Matrix operator + (const Matrix& obj) {
        Matrix result(rows, cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] != nullptr && obj.mat[i][j] != nullptr) {
                    int len1 = stringLength(mat[i][j]);
                    int len2 = stringLength(obj.mat[i][j]);
                    int len = len1 + len2 + 1;

                    result.mat[i][j] = new char[len];

                    for (int k = 0; k < len1; k++) {
                        result.mat[i][j][k] = mat[i][j][k];
                    }

                    for (int k = 0; k < len2; k++) {
                        result.mat[i][j][len1 + k] = obj.mat[i][j][k];
                    }

                    result.mat[i][j][len] = '\0';
                }
            }
        }

        return result;
    }

    void transpose() {
        Matrix transposed(cols, rows);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] != nullptr) {
                    int len = stringLength(mat[i][j]);
                    transposed.mat[j][i] = new char[len + 1];

                    for (int k = 0; k < len; k++) {
                        transposed.mat[j][i][k] = mat[i][j][k];
                    }

                    transposed.mat[j][i][len] = '\0';
                }
            }
        }

        deleteMatrix();
        *this = transposed;
    }

    void print() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] != nullptr) {
                    int k = 0;
                    while (mat[i][j][k] != '\0') {
                        cout << mat[i][j][k];
                        k++;
                    }
                    cout << " ";
                }
                else {
                    cout << "null ";
                }
            }
            cout << endl;
        }
    }

    Matrix& operator = (const Matrix& obj) {
        if (this == &obj) {
            return *this;
        }

        deleteMatrix();

        this->rows = obj.rows;
        this->cols = obj.cols;

        mat = new char** [rows];
        for (int i = 0; i < rows; i++) {
            mat[i] = new char* [cols];
            for (int j = 0; j < cols; j++) {
                if (obj.mat[i][j] != nullptr) {
                    int len = stringLength(obj.mat[i][j]);
                    mat[i][j] = new char[len + 1];

                    int k = 0;
                    while (obj.mat[i][j][k] != '\0') {
                        mat[i][j][k] = obj.mat[i][j][k];
                        k++;
                    }
                    mat[i][j][len] = '\0';
                }
                else {
                    mat[i][j] = nullptr;
                }
            }
        }

        return *this;
    }

    ~Matrix() {
        deleteMatrix();
    }

private:
    int stringLength(const char* str) {
        int len = 0;
        while (str[len] != '\0') {
            len++;
        }
        return len;
    }

    void deleteMatrix() {
        if (mat != nullptr) {
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    if (mat[i][j] != nullptr) {
                        delete[] mat[i][j];
                    }
                }
                delete[] mat[i];
            }
            delete[] mat;
            mat = nullptr;
        }
    }
};

int main() {
    Matrix mA(2, 2);
    mA.insertElement("Computer", 0, 0);
    mA.insertElement("Electrical", 0, 1);
    mA.insertElement("Business", 1, 0);
    mA.insertElement("Civil", 1, 1);
    cout << "Matrix A:" << endl;
    mA.print();

    Matrix mB(2, 2);
    mB.insertElement("Science", 0, 0);
    mB.insertElement("Engineering", 0, 1);
    mB.insertElement("Administration", 1, 0);
    mB.insertElement("Engineering", 1, 1);
    cout << "Matrix B:" << endl;
    mB.print();

    Matrix mC(2, 2);
    mC = mA + mB;
    cout << "Matrix C (A + B):" << endl;
    mC.print();

    mC.transpose();
    cout << "Matrix C Transposed:" << endl;
    mC.print();

    return 0;
}