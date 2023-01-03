#include <iostream>
using namespace std;
int main()
{
    long int i, fact = 1, n, n1, n2, n3;
    do
    {
        cout << "Press 1 to print factorial of number" << endl;
        cout << "Press 2 to print nPr" << endl;
        cout << "Press 3 to print nCr (Method 1)" << endl;
        cout << "Press 4 to print nCr (Method 2)" << endl;
        cout << "Enter 5 to Exit " << endl;
        cin >> i;
        if (i == 1)
        {
            cout << "Enter any number : ";
            cin >> n;
            for (int j = 1; j <= n; j++)
            {
                fact *= j;
            }
            cout << "The Factorial is : " << fact << endl;
        }
        if (i == 2)
        {
            cout << "Enter n : ";
            cin >> n1;
            cout << "Enter r : ";
            cin >> n2;
            if (n1 > n2)
            {
                n3 = n1 - n2;
                for (int k = n1; k > n3; k--)
                {
                    fact = fact * k;
                }
                cout << "Th nPr is : " << fact << endl;
            }
            else
                cout << "r is greater then n so condition invalid";
        }
        if (i == 3)
        {
            long int fact1 = 1, fact2 = 1, c;
            cout << "Enter n : ";
            cin >> n1;
            cout << "Enter r : ";
            cin >> n2;
            if (n1 > n2)
            {
                n3 = n1 - n2;
                for (int i = 1; i <= n1; i++)
                {
                    fact *= i;
                }
                for (int j = 1; j <= n3; j++)
                {
                    fact1 *= j;
                }
                for (int k = 1; k <= n2; k++)
                {
                    fact2 *= k;
                }
                c = fact / (fact1 * fact2);
                cout << "The nCr is : " << c << endl;
            }
            else
                cout << "r is greater then n so condition invalid";
        }
        if (i == 4)
        {
            long int fact1 = 1, c;
            cout << "Enter n : ";
            cin >> n1;
            cout << "Enter r : ";
            cin >> n2;
            if (n1 > n2)
            {
                n3 = n1 - n2;
                for (int k = n1; k > n3; k--)
                {
                    fact = fact * k;
                }
                for (int l = 1; l <= n2; l++)
                {
                    fact1 *= l;
                }
                c = fact / fact1;
                cout << "The nCr is : " << c << endl;
            }
            else
                cout << "r is greater then n so condition invalid";
        }
    } while (i == 5);
    return 0;
}