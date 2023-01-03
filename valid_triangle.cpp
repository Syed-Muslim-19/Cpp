#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	cout << "Enter angels of 3 sides of Triangle : "<<endl;
	cin >> x >> y >> z;
	if (x > 0, y > 0, z > 0)
	{
		if (x + y + z == 180)
			cout << "It will form a Triangle";
		else
			cout << "No Triangle will be form";
	}
	else
		cout << "Invalid Condition";
	return 0;
}