#include<iostream>
using namespace std;
class B;
class A
{
	int number1;
public:
	A()
	{
		number1 = 0;
	}
	void Input1()
	{
		cin >> number1;
	}
	A(int n)
	{
		number1 = n;
	}
	friend int Sum(A, B);
};
class B
{
	int number2;
public:
	B()
	{
		number2 = 0;
	}
	void Input2()
	{
		cin >> number2;
	}
	B(int n1)
	{
		number2 = n1;
	}
	friend int Sum(A, B);
};
int Sum(A num1, B num2)
{
	return(num1.number1 + num2.number2);
}
int main()
{
	A num1;
	B num2;
	cout << "Class A's number : ";
	num1.Input1();
	cout << "Class B's number : ";
	num2.Input2();
	cout << "Sum of Class A's and B's is : ";
	cout<<Sum(num1, num2);
}