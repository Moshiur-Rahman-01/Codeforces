#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, r, c;
    cin >> n;
    r = n / 4;
    cout << r << " ";
    if (r % 2 == 0)
        cout << n % 4;
    else
    {
        if (n % 4 == 0)
            cout << "3";
        else if (n % 4 == 1)
            cout << "2";
        else if (n % 4 == 2)
            cout << "1";
        else
            cout << "0";
    }
}
