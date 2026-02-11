#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b, s = 0;

    while (true)
    {
        cin >> n >> m;

        if (n <= 0 || m <= 0)
            break;
        else
        {
            if (n > m)
            {
                a = m;
                b = n;
            }
            else
            {
                a = n;
                b = m;
            }
            for (int i = a; i <= b; i++)
            {
                cout << i << " ";
                s += i;
            }
            cout << "sum =" << s << endl;
            s = 0;
        }
    }
}