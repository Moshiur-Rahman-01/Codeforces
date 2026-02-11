#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, temp, n;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        bool swap = false;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swap = true;
            }
        }
        if (!swap)
            break;
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}