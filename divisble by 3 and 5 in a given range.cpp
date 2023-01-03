#include<iostream>
using namespace std;
int main()
{
	int r1, r2, i = 1, count1 = 0, count2 = 0;
	cout << "The Range : " << endl;
	cin >> r1 >> r2;
	cout << "The Range is from " << r1 << " to " << r2 << endl;
	while (r2 >= i)
	{
		r1 = i;
		if (i % 3 == 0)
		{
			count1++;
		}
		if (i % 5 == 0)
		{
			count2++;
		}
		i++;
	}
	cout << "The number of multiples of 3 : " << count1 << endl;
	cout << "The number of multiples of 5 : " << count2 << endl;
	return 0;
}