#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, c, d, t1, t2, t3, t4, t5, t6;
    cin >> a >> b >> c >> d;

    t1 = a + b - c;
    t2 = a + b * c;
    t3 = a - b * c;
    t4 = a - b + c;
    t5 = a * b + c;
    t6 = a * b - c;
    if (d == t1 || d == t2 || d == t3 || d == t4 || d == t5 || d == t6)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}