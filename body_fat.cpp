#include<iostream>
using namespace std;
int main()
{
	double a1, a2, a3, a4, a5, bw, wm1, wm2, hm, fm, bf, bfp, b;
	char a;
	cout << "Measuring the body fat of (male or Female)" << endl;
	cout << "For Male press 'M' and for Female press 'F' :";
	cin >> a;
	if (a == 'M' || a == 'm')
	{
		cout << "Enter body weight: ";
		cin >> bw;
		cout << "Enter Wrist measurement: ";
		cin >> wm1;
		a1 = (bw * 1.082) + 94.42;
		a2 = wm1 * 4.15;
		b = a1 - a2;
		bf = bw - b;
		bfp = (bf * 100) / bw;
		cout << "The body fat of a person is : " << bf << endl;
		cout << "The body fat percentage of a person is : " << bfp;
	}
	else if (a == 'F' || a == 'f')
	{
		cout << "Enter body weight: ";
		cin >> bw;
		cout << "Enter Wrist measurement: ";
		cin >> wm1;
		cout << "Enter waist measurement: ";
		cin >> wm2;
		cout << "Enter hip measurement: ";
		cin >> hm;
		cout << "Enter Forearm measurement: ";
		cin >> fm;
		a1 = (bw * 0.732) + 8.987;
		a2 = wm1 / 3.14;
		a3 = wm2 * 0.157;
		a4 = hm * 0.249;
		a5 = fm * 0.434;
		b = a1 + a2 - a3 - a4 + a5;
		bf = bw - b;
		bfp = (bf * 100) / bw;
		cout << "The body fat of a person is : " << bf << endl;
		cout << "The body fat percentage of a person is : " << bfp;
	}
	else
		cout << "Invalid Character";
	return 0;
}