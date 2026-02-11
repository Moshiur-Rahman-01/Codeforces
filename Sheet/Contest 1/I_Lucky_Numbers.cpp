#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int d = n / 10;
    int r = n % 10;
    if (r == 0)
        cout << "YES";
    else if (d % r == 0 || r % d == 0)
        cout << "YES";
    else
        cout << "NO";
}