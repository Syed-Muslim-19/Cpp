#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i = 0,j;
	char a[100];
	cout << "Enter String 1 : ";
	cin.getline(a, 100);
	while (a[i] != '\0')
	{
		j = i + 1;
		while (a[i] != '\0')
		{
		if (a[i] == a[j])
		{
			cout << a[i]<<",";
			break;
		}
		j++;
		}
		i++;
	}
	return 0;
}

