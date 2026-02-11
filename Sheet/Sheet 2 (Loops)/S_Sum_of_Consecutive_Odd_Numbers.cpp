#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, a, b, s = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (n > m)
        {
            a = m;
            b = n;
        }
        else
        {
            a = n;
            b = m;
        }
        for (int i = a + 1; i < b; i++)
        {
            if (i % 2 != 0)
            {
                s += i;
            }
        }
        cout << s << endl;
        s = 0;
    }
}