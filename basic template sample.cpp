#include <iostream>
using namespace std;

template<typename T>
T performOperation(T a, T b, char op)
{
    T result;
    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b == 0) {
            cout << "Error: Division by zero" << endl;
            result = 0;
        }
        else {
            result = a / b;
        }
        break;
    default:
        cout << "Error: Invalid operation" << endl;
        result = 0;
        break;
    }
    return result;
}

int main()
{
    int a, b; // this can be float, int or double too
    char op;
    cout << "Enter first operand ";
    cin >>a;
    cout<<"Enter second operand ";
    cin>>b;
    cout<<"Enter operation";
    cin>>op; // op can be +, -, * or /
    if (op == '*'|| op == '+'|| op == '-' || op == '/')
    {
       cout<< performOperation(a, b, op);
    }
    else
    {
        cout << "Wrong operation";
    }
    return 0;
}
