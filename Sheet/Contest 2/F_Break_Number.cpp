#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, n, temp, c;
    cin >> t;
    int max = 0;
    while (t--)
    {
        cin >> n;
        c = 0;
        while (n % 2 == 0)
        {
            c++;
            n = n / 2;
        }
        if (max < c)
            max = c;
    }
    cout << max;
}