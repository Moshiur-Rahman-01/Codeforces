#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string t = s;
    reverse(t.begin(), t.end());
    if (s == t)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[1001];
//     scanf("%s", s);
//     int length = strlen(s);
//     int count = 0;
//     for (int i = 0, j = length - 1; i < j; i++, j--)
//     {
//         if (s[i] != s[j])
//             count++;
//     }
//     if (count)
//     {
//         printf("NO");
//     }
//     else
//     {
//         printf("YES");
//     }
//     return 0;
// }