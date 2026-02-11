#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c = 0;
    for (int i = 0, j = n - 1; j >= 0; j--, i++)
    {
        if (a[j] == a[i])
            c++;
    }
    if (c == n)
        cout << "YES";
    else
        cout << "NO";
}