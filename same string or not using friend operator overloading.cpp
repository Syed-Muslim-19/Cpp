#include<iostream>
#include<cstring>
using namespace std;
class String
{
	string check;
public:
	String()
	{
		check = '\0';
	}
	void Input()
	{
		cin >> check;
	}
	friend bool operator ==(String& obj, String& obj2)
	{

		if (obj.check == obj2.check)
		{
			return true;
		}
		else
		{
			return false;
		}

	}
};
int main()
{
	String obj1, obj2;
	cout << "Enter String 1 : ";
	obj1.Input();
	cout << "Enter String 2 : ";
	obj2.Input();
	if (obj1 == obj2)
	{
		cout << "Both Strings Are Same " << endl;
	}
	else
	{
		cout << "Both Strings Are Different " << endl;
	}
	return 0;
}
