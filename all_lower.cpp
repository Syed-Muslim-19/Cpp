#include<iostream>
#include<cstring>
using namespace std;
void Upper(char a[], int l)
{
	l = strlen(a);
	for (int i = 0; i < l; i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
			a[i] = a[i] + 32;
	}
	cout << "Sample Output: ";
	cout << a;
}
int main()
{
	char character[100];
	cout << "Sample Input : ";
	cin.getline(character, 100);
	int l = strlen(character);
	Upper(character, l);
	return 0;
}