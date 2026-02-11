#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int count = 0;
    while(t--){
        int n,sum=0;
        for(int i=0; i<3; i++){
            cin >> n;
            sum += n;
        }
        if(sum>=2){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}