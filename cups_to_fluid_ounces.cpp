#include<iostream>
using namespace std;
void showIntro()
{
	cout << "The Program converts cups to fluid into ounces " << endl;
}
double getCups()
{
	double cups;
	cout << "Enter the numer of cups" << endl;
	cin >> cups;
	return cups;
}
void isValid(int cups)
{
	if (cups> 0)
		cout << "Valid Input"<<endl;
	else if(cups<1)
		cout << "Invalid Input"<<endl;

}
double cupsToOunces(int cups)
{
	return cups * 8;
}
int main()
{
	int cups, ounces;
	showIntro();
	cups = getCups();
	isValid(cups);
	ounces = cupsToOunces(cups);
	cout << "The Ounces are : ";
	cout << ounces;
	return 0;
}