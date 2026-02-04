#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, rem, y, m, d;
    cin >> N;

    y = N / 365;
    rem = N % 365;
    m = rem / 30;
    d = rem % 30;
    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;
}