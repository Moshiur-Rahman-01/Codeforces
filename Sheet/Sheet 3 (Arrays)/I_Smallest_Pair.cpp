#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int min = a[0] + a[1] + 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int s = a[i] + a[j] + j - i;
                if (min > s)
                    min = s;
            }
        }
        cout << min << endl;
    }
}