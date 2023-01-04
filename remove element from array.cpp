#include<iostream>
using namespace std;
void removeElement(int nums[],int size,int val)
{ 
    for (int i = 0; i < size; i++)
    {
        if (val == nums[i])
        {
           
        }
        else
        {
            cout << nums[i]<<" ";
        }
    }
}
int main()
{
    int arr[100], size,rem;
    cout << "Enter the Size of Array : ";
    cin >> size;
    cout << "Elements of Array : " << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Element to be removed : ";
    cin >> rem;
    removeElement(arr, size, rem);
    return 0;
}