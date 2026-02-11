#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> t;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == t)
        {
            cout << i;
            c++;
            break;
        }
    }
    if (c == 0)
        cout << "-1";
}