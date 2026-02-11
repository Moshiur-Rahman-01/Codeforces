#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, l, r, s;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        if (r >= l)
        {
            s = (r * (r + 1) / 2) - (l * (l - 1) / 2);
            cout << s << endl;
        }
        else
        {
            s = (l * (l + 1) / 2) - (r * (r - 1) / 2);
            cout << s << endl;
        }
    }
}