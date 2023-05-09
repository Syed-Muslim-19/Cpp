#include <cstring>
#include <iostream>
using namespace std;

template<typename T>
T maximum(T x, T y)
{
    return (x > y) ? x : y;
}

template<>
char* maximum<char*>(char* x, char* y) 
{
    if (strcmp(x, y) > 0)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main() {
    int i1 = 5, i2 = 10;
    cout << maximum(i1, i2) <<endl; // prints "10"

    double d1 = 3.14, d2 = 2.71;
    cout << maximum(d1, d2) <<endl; // prints "3.14"

    char str1[] = "hello";
    char str2[] = "world";
    cout << maximum(str1, str2) <<endl; // prints "world"

    return 0;
}
