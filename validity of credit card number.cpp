#include<iostream>
using namespace std;
bool TestNum(char[], int);
int main()
{
	int size = 7;
	char data[7];
	cout << "The Credit Card Number must have LLLNNNN ( L = Letter, N = Number : ) : ";
	cin.getline(data, 7);
	if (TestNum(data, size) == true)
	{
		cout << "The Credit Card Number is Valid"<<endl;
	}
	else
	{
		cout << "The Credit Card Number is Not Valid" << endl;
	}
}
bool TestNum(char arr[], int size)
{
	int cAlpha = 0, cDigit = 0;
	for (int i = 0; i < 7; i++)
	{
		if (isalpha(arr[i]) &&(i>=0 && i < 3))
		{
			cAlpha++;
		}
		if (isdigit(arr[i]) && (i >= 4 && i <= 6))
		{
			cAlpha++;
		}
	}
	if (cAlpha + cDigit == 5)
		return true;
	else
		return false;
}