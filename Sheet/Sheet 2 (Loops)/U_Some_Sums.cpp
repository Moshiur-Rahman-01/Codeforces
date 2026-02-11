#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, rem, i, ss = 0;
    cin >> n >> a >> b;

    for (i = 1; i <= n; i++)
    {
        int temp = i, s = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            s += rem;
            temp = temp / 10;
        }
        if (s >= a && s <= b)
        {
            ss += i;
        }
    }
    cout << ss;
}