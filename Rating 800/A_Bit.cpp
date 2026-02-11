#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    int X =0;
    for(int i=0; i<n; i++){
        cin >> s;
        if(s=="X++") X++;
        else if(s=="++X") ++X;
        else if(s=="X--") X--;
        else if(s=="--X") --X;
    }
    cout << X << endl;
    return 0;
}