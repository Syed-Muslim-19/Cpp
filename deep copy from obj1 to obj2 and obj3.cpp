#include<iostream>
using namespace std;
class MyBigInt
{
	 int* big_int;
	 int int_length;
public:
	MyBigInt()
	{
		big_int = nullptr;
		int_length = 0;
	}
	MyBigInt(int size)
	{
		int_length = size;
		big_int = new int[int_length];
		for (int i = 0; i < int_length; i++) {
			cin >> big_int[i];
		}
	}
	MyBigInt(const MyBigInt &obj)
	{
		int_length = obj.int_length;
		big_int= new int[int_length];
		for (int i = 0; i < int_length; ++i) 
		{
			big_int[i] = obj.big_int[i];
		}
	}
	void assign(const MyBigInt &obj)
	{
		 int* data = new int[int_length];
		 if (this != &obj) 
		 {
			 for (int i = 0; i < int_length; i++)
				 data[i] = obj.big_int[i];
		 }
	}
	void display()
	{
		if (big_int != nullptr)
		{
			for (int i = 0; i < int_length; i++)
				cout << big_int[i] << " ";
		}
		else
		{
			cout << "No Value Assigned";
		}
		cout << endl;
	}
	~MyBigInt()
	{
		delete[]big_int;
		big_int = nullptr;
		int_length = 0;
	}
};
int main()
{
	int size;
	cout << "Enter the size : ";
	cin >> size;
	MyBigInt obj1;
	MyBigInt obj2(size);
	cout << "Object 1 Data : " << endl;
	obj2.display();
	MyBigInt obj3 = obj2;
	cout << "Object 2 Data : " << endl;
	obj3.display();
	obj1.assign(obj3);
	return 0;
}