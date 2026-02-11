#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, k, n, a, min, c = 0;
    cin >> k >> n;
    int flag = 1;
    for (i = 1; i <= k; i++)
    {
        cin >> a;
        if (flag)
        {
            min = a;
            flag = 0;
        }
        else
        {
            if (a < min)
                min = a;
        }
        c++;
        if (c == n || i == k)
        {
            cout << min << " ";
            c = 0;
            flag = 1;
        }
    }
}