#include<iostream>
using namespace std;
void calculateGrade(int mark, char& grade)
{
	if (mark >= 80)
	{
		if (grade == 'a' || grade == 'A')
			cout << "The Grade is A" << endl;
		else
		{
			cout << "Invalid Grade Enter " << endl;
			cout << "The Correct Grade is A" << endl;
		}
	}
	else if (mark < 80 && mark >= 65)
	{
		if (grade == 'b' || grade == 'B')
			cout << "The Grade is B" << endl;
		else
		{
			cout << "Invalid Grade Enter " << endl;
			cout << "The Correct Grade is B" << endl;
		}

	}
	else if (mark < 65 && mark >= 50)
	{
		if (grade == 'c' || grade == 'C')
			cout << "The Grade is C" << endl;
		else
		{
			cout << "Invalid Grade Enter " << endl;
			cout << "The Correct Grade is C" << endl;
		}
	}
	else if (mark < 50)
	{
		if (grade == 'f' || grade == 'F')
			cout << "The Grade is F" << endl;
		else
		{
			cout << "Invalid Grade Enter " << endl;
			cout << "The Correct Grade is F " << endl;
		}
	}
}
int main()
{
	int mark;
	char grade;
	for (int i = 0; i < 100; i++)
	{
		cout << "Enter the marks : ";
		cin >> mark;
		cout << "Enter the Grade : ";
		cin >> grade;
		if (mark == -1)
		{
			cout << "User Enter -1 so the Loop breaks";
			break;
		}
		else if (mark >= 0)
		{
			calculateGrade(mark, grade);
		}
	}
	return 0;
}