#include<iostream>
using namespace std;
int main()
{
	float BMI, h, w;
	cout << "Enter Height in inches : ";
	cin >> h;
	cout << "Enter weight in pounds : ";
	cin >> w;
	BMI = (w * 703) / (h * h);
	if (BMI>=18.5 && BMI<=25)
		cout << "Person is Optimal. ";
	else if (BMI <18.5)
		cout << "Person is Underweight. ";
	else if (BMI >25 )
		cout << "Person is Overweight. ";
	return 0;
}