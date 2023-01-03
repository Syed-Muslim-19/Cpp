#include<iostream>
using namespace std;
struct Divion_name
{
	void East()
	{
		int a, b, c, d, sum1;
		double avg1;
		cout << "EAST :" << endl;
		cout << "First-Quater scale : ";
		cin >> a;
		cout << "Second-Quater scale : ";
		cin >> b;
		cout << "Third-Quater scale : ";
		cin >> c;
		cout << "Four-Quater scale : ";
		cin >> d;
		sum1 = a + b + c + d;
		avg1 = double(sum1) / 4;
		cout << "Sum is : " << sum1 << endl;
		cout << "Average is : " << avg1 << endl;
	}
	void North()
	{
		int e, f, g, h, sum2;
		double avg2;
		cout << "NORTH :" << endl;
		cout << "First-Quater scale : ";
		cin >> e;
		cout << "Second-Quater scale : ";
		cin >> f;
		cout << "Third-Quater scale : ";
		cin >> g;
		cout << "Four-Quater scale : ";
		cin >> h;
		sum2 = e + f + g + h;
		avg2 = double(sum2) / 4;
		cout << "Sum is : " << sum2 << endl;
		cout << "Average is : " << avg2 << endl;
	}
	void south()
	{
		int i, j, k, l, sum3;
		double avg3;
		cout << "SOUTH :" << endl;
		cout << "First-Quater scale : ";
		cin >> i;
		cout << "Second-Quater scale : ";
		cin >> j;
		cout << "Third-Quater scale : ";
		cin >> k;
		cout << "Four-Quater scale : ";
		cin >> l;
		sum3 = i + j + k + l;
		avg3 = double(sum3) / 4;
		cout << "Sum is : " << sum3 << endl;
		cout << "Average is : " << avg3 << endl;
	}
	void West()
	{
		int m, n, o, p, sum4;
		double avg4;
		cout << "WEST :" << endl;
		cout << "First-Quater scale : ";
		cin >> m;
		cout << "Second-Quater scale : ";
		cin >> n;
		cout << "Third-Quater scale : ";
		cin >> o;
		cout << "Four-Quater scale : ";
		cin >> p;
		sum4 = m + n + o + p;
		avg4 = double(sum4) / 4;
		cout << "Sum is : " << sum4 << endl;
		cout << "Average is : " << avg4 << endl;
	}
};
int main()
{
	Divion_name a;
	a.East();
	a.North();
	a.south();
	a.West();
}