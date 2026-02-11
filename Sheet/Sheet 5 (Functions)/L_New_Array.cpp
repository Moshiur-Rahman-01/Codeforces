#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i=0; i<n; i++){
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    for(int x : v2){
        cout << x << " ";
    }
    for (int x : v1)
    {
        cout << x << " ";
    }
    return 0;
}