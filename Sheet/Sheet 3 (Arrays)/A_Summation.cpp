#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, s = 0;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    cout << abs(s) << endl;
}