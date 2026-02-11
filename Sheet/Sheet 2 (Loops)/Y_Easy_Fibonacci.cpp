#include <iostream>
using namespace std;

int main()
{
    int first = 0, second = 1, fibo, n;
    cin >> n;
    if (n == 1)
        cout << first;
    else
    {
        cout << first << " " << second;
        for (int i = 2; i < n; i++)
        {
            fibo = first + second;
            cout << " " << fibo;
            first = second;
            second = fibo;
        }
    }
}