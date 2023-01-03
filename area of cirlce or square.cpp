#include<iostream>
using namespace std;
int main()
{
	char a;
	float s, r, As, Ac;
	cout << "Write S (for Area of Square) and C (for Area of Circle) : ";
	cin >> a;
	if (a == 'S' || a == 's')
	{
		cout << "Enter the side : ";
		cin >> s;
		As = s * s;
		cout << "Area of Square is : " << As;
	}
	else if (a == 'C' || a == 'c')
	{
		cout << "Enter the radius : ";
		cin >> r;
		Ac = (3.14) * (r * r);
		cout << "Area of Circle is : " << Ac;
	}
	else
		cout << "Invalid Character ";
	return 0;
}
