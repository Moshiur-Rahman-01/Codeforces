#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0, t, i;
    cin >> t;

    for (n = 2; n <= t; n++)
    {
        for (i = 2; i <= sqrt(n + 1); i++)
        {
            if (n % i == 0)
            {
                c = 1;
            }
        }
        if (c == 0)
            cout << n << " ";
        c = 0;
    }
}