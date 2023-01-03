#include<iostream>
using namespace std;
int main()
{
	float gpa;
	cout << "Enter the obtained GPA (0.0 to 4.0) : ";
	cin >> gpa;
	if (gpa >= 0.0 && gpa <= 4.0)
	{
		if (gpa >= 0.00 && gpa <= 0.99)
			cout << "Failed Semester - registration suspended";
		if (gpa >= 1.00 && gpa <= 1.99)
			cout << "On probation for next semester";
		if (gpa >= 2.00 && gpa <= 2.99)
			cout << "No Messege";
		if (gpa >= 3.00 && gpa <= 3.49)
			cout << "Dean's list for semester";
		if (gpa >= 3.50 && gpa <= 4.00)
			cout << "Higgeset honor for semester";
	}
	else
		cout << "Invalide Condition ";
	return 0;
}