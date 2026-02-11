#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, k, c = 0, mn;
    cin >> n >> m >> k;

    mn = min({n, m, k});
    c += mn;
    n -= mn;
    m -= mn;
    k -= mn;
    mn = min(n / 2, k);
    c += mn;
    cout << c;
}