#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n,s;
        cin >> n >>s;
        vector<int>x(n);
        for(int i = 0;i<n;i++){
            cin >> x[i];
        }
        int mn = x[0];
        int mx = x[n-1];
        int dis = mx - mn;
        int extra;
        if(abs(s-mn) <= abs(s-mx)){
            extra = abs(s-mn);
        }
        else{
            extra = abs(s-mx);
        }

        int ans = dis + extra;
        cout <<ans<<endl;
    }
    
    return 0;
}