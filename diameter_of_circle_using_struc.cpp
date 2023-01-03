#include<iostream>
#include<cstring>
using namespace std;
struct Circle
{
public:
	void Area_radius()
	{
		double dia, a, r;
		cout << "Enter the Diameter : ";
		cin >> dia;
		r = dia / 2;
		a = (3.142857) * r * r;
		cout << "Radius is : " << r << endl;
		cout << "Area is : " << a;
	}
};
int main()
{
	Circle circle;
	circle.Area_radius();
}