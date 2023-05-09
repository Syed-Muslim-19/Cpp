#include <iostream>
using namespace std;

template<typename T>
T GetMax(T a, T b)
{
    return (a > b) ? a : b;
}

template<typename T>
T GetMin(T a, T b)
{
    return (a < b) ? a : b;
}

template<typename T, typename U>
T GetMax(T a, U b)
{
    return (a > b) ? a : b;
}

template<typename T, typename U>
T GetMin(T a, U b)
{
    return (a < b) ? a : b;
}

template<typename T, typename U, typename V>
T GetMax(T a, U b, V c)
{
    return GetMax(GetMax(a, b), c);
}

template<typename T, typename U, typename V>
T GetMin(T a, U b, V c)
{
    return GetMin(GetMin(a, b), c);
}

int main()
{
    int i = 5, j = 6, k;
    long l = 10, m = 5, n;
    k = GetMax<int, long>(i, j);
    n = GetMin<long, int>(l, m);
    cout << "Max: " << k << endl;
    cout << "Min: " << n << endl;

    char c = 'Z';
    k = GetMax<int, long>(c, m);
    n = GetMin<int, char>(j, l);
    cout << "Max: " << k << endl;
    cout << "Min: " << n << endl;
    return 0;
}
