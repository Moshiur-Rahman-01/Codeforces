#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, a, r;
    cin >> n >> k >> a;

    r = (n * k) / a;
    double d = (double)(n * k) / a;
    if (d != r)
        cout << "double";
    else if (r > 2147483647)
        cout << "long long";
    else
        cout << "int";
}