#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X;
    cin >> X;
    int div = X / 1000;
    if (div % 2 == 0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;
}