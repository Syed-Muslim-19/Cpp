#include<iostream>
using namespace std;
void myTokenizer(char* data, char** list_tokens, char delimiter)
{
	int cd = 0, cw = 0;
	int i = 0, j = 0;
	cout << "OUTPUT : " << endl;
	for (int i = 0; data[i] != '\0'; i++)
	{
		if (data[i] == delimiter)
		{
			cout << endl;
		}
		else
			cout << data[i];
	}

	for (int i = 0;data[i]!='\0'; i++)
	{
		for (int j = 0; data[j] != '\0'; j++)
		{
		if (list_tokens[i][j] == delimiter)
		{
			cd++;
		}
		else
		{
		 list_tokens[i][j]=data[i];
		 cw++;
		}
		}
	}
	for (int i = 0; i<cd; i++)
	{
		for (int j = 0;j<cw; j++)
		{
		cout << list_tokens[i][j];
		if (list_tokens[i][j] == delimiter)
		{
				cout << endl;
		}
		}
	}
}
int main()
{
	int count = 0, i = 0;
	char* data = new char;
	char deli;
	cout << "ENTER THE STRING : ";
	cin.getline(data,100);
	cout << "Delimiter : ";
	cin >> deli;
	char** List = new char* [sizeof(data)];
	for (int i = 0; i < count; i++)
		List[i] = new char[count];


	myTokenizer(data, List, deli);
	for (int i = 0; i < count; i++)
		delete List[i];
	delete[]List;
	delete data;
}