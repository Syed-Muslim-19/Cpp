#include<iostream>
using namespace std;
class Complex
{
	int real, imaginary;
public:
	Complex()
	{
		real = 0;
		imaginary = 0;
	}
	Complex(int real, int imaginary)
	{
		this->real = real;
		this->imaginary = imaginary;
	}
	Complex(const Complex& obj)
	{
		real = obj.real;
		imaginary = obj.imaginary;
	}
	bool operator ==(const Complex& obj)
	{
		if ((real == obj.real) && (imaginary == obj.imaginary))
		{
			return true;
		}
		else
			return false;
	}
	bool operator !=(const Complex& obj)
	{
		if ((real != obj.real) || (imaginary != obj.imaginary))
		{
			return true;
		}
		else
			return false;
	}
	Complex operator +(const Complex& obj)
	{
		Complex add;
		add.real = real + obj.real;
		add.imaginary = imaginary + obj.imaginary;
		return add;
	}
	Complex operator -(const Complex& obj)
	{
		Complex sub;
		sub.real = real - obj.real;
		sub.imaginary = imaginary - obj.imaginary;
		return sub;
	}
	Complex operator=(const Complex& obj)
	{
		real = obj.real;
		imaginary = obj.imaginary;
	}
	friend ostream& operator<<(ostream& cout, const Complex& obj)
	{
		cout << obj.real << " + " << obj.imaginary << "i" << endl;
		return cout;
	}
	friend istream& operator>>(istream& cin, Complex& obj)
	{
		cout << "Enter real number : ";
		cin >> obj.real;
		cout << "Enter imaginary number : ";
		cin >> obj.imaginary;
		return cin;
	}
	~Complex()
	{
	}
};
int main()
{
	Complex C1;
	Complex C2;
	cout << "Input a complex number 1 : " << endl;
	cin >> C2;
	cout << endl;
	Complex C3;
	cout << "Input a complex number 2 : "<<endl;
	cin >> C3;
	cout<< C2 << C3;
	if (C2 == C3)
		cout << "C1 == C2 " << endl;
	else
		cout << "C1 != C2" << endl;
	cout << "Subtracting two imaginary numbers : " << endl;
	Complex C4 = C2 - C3;
	cout << C4;
	cout << "Adding two imaginary numbers : " << endl;
	Complex C5 = C2 + C3;
	cout << C5;
	return 0;
}