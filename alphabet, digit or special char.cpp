#include<iostream>
using namespace std;
int main()
{
	char Code;
	cout << "Enter any Alphabet/symbol/digit : ";
	cin >> Code;
	if (Code > 64 && Code < 91)
		cout << Code << " Represents an upper case English alphabet";
	else if (Code > 96 && Code < 123)
		cout << Code << " Represents a lower case English alphabet";
	else if (Code > 47 && Code < 58)
		cout << Code << " Represents a digit";
	else if (Code < 128)
		cout << Code << "Represents a special character";
	else
		cout << Code << " DOES NOT REPRESENT AN ASCII Character";
	return 0;
}