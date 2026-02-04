#include <bits/stdc++.h>
using namespace std;

int main()
{
    char X;
    cin >> X;
    if (X >= 'A' && X <= 'Z')
        cout << (char)tolower(X);
    else
        cout << (char)toupper(X);
}