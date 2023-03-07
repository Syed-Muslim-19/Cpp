#include<iostream>
using namespace std;
class Student
{
	int size, *marks;
public:
	Student()
	{
		size = 0;
		marks = nullptr;
	}
	Student(int array[],int size1)
	{
		size = size1;
		marks = new int[size];
		for (int i = 0; i < size; i++)
			marks[i] = array[i];
	}
	void ScaleUp()
	{
		for (int i = 0; i < size; i++)
		{
			if(marks[i]>=45 && marks[i]<=95)
			marks[i] = (marks[i] + 5);
		}
	}
	void PrintInfo()
	{
		cout << "Total number of suject : "<<size<<endl;
		cout << "Marks : ";
		for (int i = 0; i < size; i++)
		{
			cout << marks[i] << " ";
		}
		cout << endl;
	}
	~Student()
	{
		delete[]marks;
		marks = nullptr;
		size = 0;
	}
};
int main()
{
	int size;
	cout << "Enter the Size of Array  : ";
	cin >> size;
	int* array = new int[size];
	for (int i = 0; i < size; i++)
		cin >> array[i];
	Student s(array, size);
	cout << "Before Adding Extra Marks : " << endl;
	s.PrintInfo();
	s.ScaleUp();
	cout << "After Adding Extra Marks : " << endl;
	s.PrintInfo();
	
	return 0;
}