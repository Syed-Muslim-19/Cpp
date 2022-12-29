#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i = 0;
	char a[100], b[100];
	cout << "Enter String 1 : ";
	cin.getline(a, 100);
	cout << "Copied String : ";
	while (a[i] != '\0')
	{
		b[i] = a[i];
		if (b[i] != '\0')
		{
			cout << b[i];
		}
		i++;
	}
	
	
	return 0;
}

