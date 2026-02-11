#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, row, col;
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (row == n / 2 + 1 && col == n / 2 + 1)
                cout << "X";
            else if (row == col)
                cout << "\\";
            else if (row + col == n + 1)
                cout << "/";
            else
                cout << "*";
        }
        cout << endl;
    }
}