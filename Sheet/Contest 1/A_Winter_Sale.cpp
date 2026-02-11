#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, p;
    cin >> x >> p;

    x = 100 - x;
    cout << fixed << setprecision(2) << (p * 100) / x;
}