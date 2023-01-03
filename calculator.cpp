#include<iostream>
using namespace std;
int main()
{
	char a;
	float x, y, res;
	cout << "Enter the first digit :";
	cin >> x;
	cout << "Enter the Second Digit : ";
	cin >> y;
	cout << "Enter the expression (+,-,* or / ) : ";
	cin >> a;
	switch (a)
	{
	case '+':
		res = x + y;
		cout << "The Sum is : " << res;
		break;
	case '-':
		res = x - y;
		cout << "The Difference is : " << res;
		break;
	case '*':
		res = x * y;
		cout << "The Product is : " << res;
		break;
	case '/':
		res = x / y;
		cout << "The Division is : " << res;
		break;
	default:
		cout << "Invalid Condition";
		break;
	}

	return 0;
}