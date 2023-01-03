#include<iostream>
using namespace std;
int main()
{
	int div, dis, q, r;
	cout << "Enter the Divisor : ";
	cin >> dis;
	cout << "Enter the Dividend : ";
	cin >> div;
	q = div / dis;
	r = div % dis;
	cout << "The Quotient is : " << q << endl;
	cout << "The Reminder is : " << r;
	return 0;
}