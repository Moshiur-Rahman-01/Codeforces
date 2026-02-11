#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, rem;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int s = 0, ss = 0;
        while (n != 0)
        {
            s += n % 2;
            n = n / 2;
        }
        for (int i = 0; i < s; i++)
        {
            ss += pow(2, i);
        }
        cout << ss << endl;
    }
}