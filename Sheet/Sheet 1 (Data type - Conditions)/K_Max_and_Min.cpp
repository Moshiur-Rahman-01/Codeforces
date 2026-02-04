#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, max, min;
    cin >> A >> B >> C;

    if (A >= B && A >= C)
    {
        max = A;
        if (B > C)
            min = C;
        else
            min = B;
    }
    else if (B >= A && B >= C)
    {
        max = B;
        if (A > C)
            min = C;
        else
            min = A;
    }
    else
    {
        max = C;
        if (A > B)
            min = B;
        else
            min = A;
    }
    cout << min << " " << max << endl;
}