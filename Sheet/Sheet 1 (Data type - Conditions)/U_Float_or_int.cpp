#include <bits/stdc++.h>
using namespace std;

int main()
{
    double N;
    cin >> N;
    int a = N;
    double d = N - a;

    if (d > 0)
        cout << "float " << a << " " << d;
    else
        cout << "int " << a;
}