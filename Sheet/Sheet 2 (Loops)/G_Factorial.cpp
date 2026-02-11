#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    long long s = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == 0)
            cout << "1" << endl;
        else
        {
            for (int i = 1; i <= t; i++)
            {
                s *= i;
            }
            cout << s << endl;
            s = 1;
        }
    }
}