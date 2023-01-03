#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "Enter any Character : ";
	cin >> a;
	if (a >= 97 && a <= 122 || a >= 65 && a <= 90)
	{
		if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
			cout << "Its a Vowel ";
		else
			cout << "Its a Consonant ";
	}
	else
		cout << "Invalid chaacter ";
	return 0;
}