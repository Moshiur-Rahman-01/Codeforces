#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, i, b, temp, n, c1 = 0, c2 = 0, c3 = 0;
    cin >> a >> b;

    for (i = a; i <= b; i++)
    {
        n = i;
        while (n != 0)
        {
            temp = n % 10;
            if (temp == 4 || temp == 7)
            {
                c1++;
            }
            c2++;
            n = n / 10;
        }
        if (c1 == c2)
        {
            cout << i << " ";
            c3 = 1;
        }
        c1 = 0;
        c2 = 0;
    }
    if (c3 == 0)
        cout << "-1";
}