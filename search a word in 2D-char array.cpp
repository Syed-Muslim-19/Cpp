#include<iostream>
using namespace std;
int main()
{
	int count = 0, word, alphabet;
	char arr[100][100];
	char search[100];
	cout << "Enter the number of Words: " << endl;
	cin >> word;
	cout << "Enter the length of alphabets in each words : " << endl;
	cin >> alphabet;
	for (int i = 0; i < word; i++)
	{
		for (int j = 0; j < alphabet; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << "The Array Form : " << endl;
	for (int i = 0; i < word; i++)
	{
		for (int j = 0; j < alphabet; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
	cout << "Enter the word to be found in array : ";
	for (int i = 0; i < alphabet; i++)
		cin >> search[i];
	for (int i = 0; i < word; i++)
	{
		for (int j = 0; j < alphabet; j++)
		{
			if (arr[i][j]==search[j])
			{
				count++;
			}
		}
		if (count == alphabet)
		{
			cout << "Word Found " << endl;
			break;
		}
		else
		{		
		count = 0;
		}
	}
	if (count == 0)
		cout << "Word Not Found";
		return 0;
}