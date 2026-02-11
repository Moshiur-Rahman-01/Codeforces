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
    int min = a[0], c = 0;
    for (int i = 0; i < n; i++)
    {
        if (min >= a[i])
        {
            min = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (min == a[i])
            c++;
    }
    if (c % 2 == 1)
        cout << "Lucky";
    else
        cout << "Unlucky";
}