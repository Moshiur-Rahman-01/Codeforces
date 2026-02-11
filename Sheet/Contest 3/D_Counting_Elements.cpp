#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int count = 0;
    for(int i=0; i<n; i++){
        bool flag = false;
        for(int j=0; j<n; j++){
            if(v[i]+1 == v[j] && flag==false){
                count++;
                flag = true;
            } 
        }
    }
    cout << count << endl;
    return 0;
}