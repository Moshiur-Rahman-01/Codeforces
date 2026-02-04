#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B, C, D, t1;
    cin >> A >> B >> C >> D;

    t1 = ((A % 100) * (B % 100) * (C % 100) * (D % 100)) % 100;
    if (t1 >= 0 && t1 <= 9)
        cout << "0" << t1;
    else
        cout << t1;
}