#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,max=0,min=1,counter=1,temp;
	float average;
	cout << "Enter the number : ";
	do
	{
		cin >> num;
		if (num > 0)
		{
			counter++;
			sum += num;
			if (num > max)
				max = num;
			else
				min = num;
		}
	} while (num>0);
	average = sum / counter;
	cout << "The sum is : " << sum<<endl;
	cout << "The average is : " << average << endl;
	cout << "The minimum number is : " << min << endl;
	cout << "The maximum number is: " << max << endl;
	return 0;
}