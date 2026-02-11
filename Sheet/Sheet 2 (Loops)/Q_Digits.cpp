#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, n, rem;
    cin >> t;

    while (t--)
    {
        cin >> n;
        if (n == 0)
            cout << "0";
        else
        {
            while (n != 0)
            {
                rem = n % 10;
                cout << rem << " ";
                n = n / 10;
            }
        }
        cout << endl;
    }
}