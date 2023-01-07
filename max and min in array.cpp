#include <iostream>
using namespace std;
int main()
{
    int i, number, maximum, minimum;
    cout << "Enter the number integers : \n";
    cin >> number;
    int arr[number];
    cout<<"Input the number : \n";
    for (i = 0; i < number; i++)
    {
        cin >> arr[i];
    }
    maximum = arr[0];
    for (i = 0; i < number; i++)
    {
        if (maximum < arr[i])
            maximum = arr[i];
    }
    minimum = arr[0];
    for (i = 0; i < number; i++)
    {
        if (minimum > arr[i])
            minimum = arr[i];
    }
    cout << "Largest element : " << maximum<<endl;
    cout << "Smallest element : " << minimum;
    return 0;
}

