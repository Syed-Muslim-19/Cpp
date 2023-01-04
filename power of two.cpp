#include<iostream>
using namespace std;
void power(int n)
{
    int count = 0;
    long double pro = 1;
    for (int i = 0; i <= n; i++)
    {
        if (n == pro)
        {
            count++;
        }
        else
        {
            pro *= 2;
        }
    }
    if (count >= 1)
        cout << "The number is Power of Two" << endl;
    else
        cout << "The number is not the Power of Two" << endl;
}
int main()
{
    int x;
    cout << "Enter the number : ";
    cin >> x;
    power(x);
    return 0;
}