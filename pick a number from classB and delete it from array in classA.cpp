#include<iostream>
using namespace std;
class A
{
	int arr[100],size;
	friend class B;
public:
	A()
	{
		size = 0;
		arr[0] = 0;
	}
	A(int s)
	{
		size = s;
		for (int i = 0; i < s; i++)
		{
			cin >> arr[i];
		}
	}
};
class B
{
	int num;
public:
	B()
	{
		num = 0;
	}
	B(int n)
	{
		num = n;

	}
	void Display(A Arr,int s)
	{
		cout << "Original Array : ";
		for (int i = 0; i < s; i++)
		{
			cout << Arr.arr[i] << " ";
		}
	}
	void search(B obj,A Arr, int s)
	{
		int count = 0;
		cout << "Array after Deleting an element : ";
		for (int i = 0;i<s ; i++)
		{
			if (Arr.arr[i] == obj.num)
			{
				count++;
			}
			else
			{
			cout << Arr.arr[i] << " ";
			}
		}
		cout << endl;
		cout << "How much numbers are deleted from the Array : " <<count<<endl;
	}
};
int main()
{
	int s,check;
	cout << "Enter the Size of Array : ";
	cin >> s;
	cout << "Input the ELement of array :  " << endl;
	A Arr_Size(s);
	B See;
	See.Display(Arr_Size, s);
	cout << endl;
	cout << "Digit to be Deleted : ";
	cin >> check;
	B Look(check);
	Look.search(Look,Arr_Size,s);
}