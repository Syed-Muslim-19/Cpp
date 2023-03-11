#include<iostream>
using namespace std;
class FeetInches
{
private:
	int feet, inches;
	void simplify()
	{
		if (inches < 12)
		{
			feet=feet;
			inches = inches;
		}
		if (inches == 12)
		{
			feet = feet + 1;
			inches = 0;
		}
		if (inches > 12)
		{
			int rem; 
			rem= inches / 12;
			feet = feet + rem;
			inches = inches - (12*rem);
		}
	}
public:
	void setter(int feet,int inches)
	{
		this->feet = feet;
		this->inches = inches;
	}
	void display()
	{
		setter(feet,inches);
		cout << "Data  : " << endl;
		cout << feet << " feets " << inches << " inches" << endl;
		simplify();
		cout << "Modified Data : " << endl;
		cout << feet << " feets " << inches << " inches" << endl;
		cout << endl;
	}
};
int main()
{
	int inches, feet;
	cout << "Feet : ";
	cin >> feet;
	cout << "Inches : ";
	cin >> inches;
	FeetInches f3;
	f3.setter(feet, inches);
	f3.display();
}