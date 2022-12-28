#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i=0,count=0,total=0;
	char a[100],b[100];
	cout << "Enter String 1 : ";
	cin.getline(a,100);
	cout << "Enter String 2 : ";
	cin.getline(b, 100);
	while (a[i] != '\0' && b[i]!='\0')
	{
		if (a[i] == b[i])
			count++;
		else
		{

		}
		total++;
		i++;
	}
	if (total==count)
		cout << "Both strings are equal and same";
	else
		cout << "Both strings are different";
	return 0;
}

