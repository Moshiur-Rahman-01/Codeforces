#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, max = 0;
    cin >> n;

    while (n--)
    {
        cin >> a;
        if (max < a)
            max = a;
    }
    cout << max;
}