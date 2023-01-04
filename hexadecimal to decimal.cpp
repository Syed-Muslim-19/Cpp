#include<iostream>
using namespace std;
int main()
{
	cout << "Enter the Hexadecimal number from (left to right) digit after digit : "<<endl;
	int arr[8];
	long long int sum = 0, pro = 1, temp;
	for (int i = 8; i > 0; i--)
	{
			cin >> arr[i];
	}
	cout << endl;
	cout << "Hexadecimal FORM : " << endl;
	for (int i = 1; i <= 8; i++)
	{
		if ((arr[i] == 1) || (arr[i] == 0))
			cout << arr[i]<<" ";
		else
		{
			cout << "INVALID BINARY DIGIT" << endl;
			break;
		}
	}
	cout << endl;
    for (int i = 8; i > 0; i--)
	{
		temp = arr[i] * pro;
		sum +=temp;
		pro = pro * 16;
	}
	cout <<"Hexadecimal to Decimal : " << sum << endl;
	return 0;
}