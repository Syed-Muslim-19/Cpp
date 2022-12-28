#include<iostream>
using namespace std;
int main()
{
    int i, size, arr[100], temp;
    cout << "Enter the Size of Array : ";
    cin >> size;

    cout << "Elements of Array : " << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    temp = ((size + 1) * (size + 2)) / 2;
    for (int i = 0; i < size; i++)
        temp -= arr[i];
    cout << "Missing Number is: " << temp;
    return 0;
}