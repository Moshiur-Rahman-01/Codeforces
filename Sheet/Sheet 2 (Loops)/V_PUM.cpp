#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;

    for (int i = 1; i <= 80; i++)
    {
        if (i % 4 == 0)
            cout << "PUM" << endl;
        else
            cout << i << " ";
        c++;
        if (c == n * 4)
            break;
    }
}