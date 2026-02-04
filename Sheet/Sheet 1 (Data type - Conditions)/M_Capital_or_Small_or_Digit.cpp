#include <bits/stdc++.h>
using namespace std;

int main()
{
    char X;
    cin >> X;

    if (X >= 'A' && X <= 'Z')
        cout << "ALPHA\nIS CAPITAL" << endl;
    else if (X >= 'a' && X <= 'z')
        cout << "ALPHA\nIS SMALL" << endl;
    else
        cout << "IS DIGIT" << endl;
}