#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, max, mid, min;
    cin >> A >> B >> C;

    if (A >= B && A >= C)
    {
        max = A;
        if (B > C)
        {
            mid = B;
            min = C;
        }
        else
        {
            mid = C;
            min = B;
        }
    }
    else if (B >= A && B >= C)
    {
        max = B;
        if (A > C)
        {
            mid = A;
            min = C;
        }
        else
        {
            mid = C;
            min = A;
        }
    }
    else
    {
        max = C;
        if (B > A)
        {
            mid = B;
            min = A;
        }
        else
        {
            mid = A;
            min = B;
        }
    }
    cout << min << endl << mid << endl << max << "\n\n";
    cout << A << endl << B << endl << C;
}