#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s = 0, temp, rem;
    cin >> n;

    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        s = s * 10 + rem;
        temp = temp / 10;
    }

    if (s == n)
        cout << s << endl
            << "YES";
    else
        cout << s << endl
            << "NO";
}