#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;

    for (int i = 2; i <= sqrt(n + 1); i++)
    {
        if (n % i == 0)
        {
            c = 1;
            break;
        }
    }
    if (c == 0)
        cout << "YES";
    else
        cout << "NO";
}