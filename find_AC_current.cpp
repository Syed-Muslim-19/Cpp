#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float I, E, R, L, C, f;
	const float pi = 3.14285;
	cout << "Amount of Volts: ";
	cin >> E;
	cout << "Amount of Resistance: ";
	cin >> R;
	cout << "Amount of Inductance: ";
	cin >> L;
	cout << "Amount of Capacitance: ";
	cin >> C;
	cout << "Amount of Frequency: ";
	cin >> f;
	I = E / sqrt((R * R) + ((2 * pi * f * L) - (1 / 2 * pi * f * C) * ((2 * pi * f * L) - (1 / 2 * pi * f * C))));
	cout << "The Amount of Current is : " << I;
	return 0;
}