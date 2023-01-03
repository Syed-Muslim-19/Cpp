#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i = 1, n;
	double res = 0;
	cout << "Input the value for nth term : ";
	cin >> n;
	while (n >= i)
	{
		res = res + (1 / pow(i, i));
		i++;
	}
	cout << "The sum is : " << res;
	return 0;
}