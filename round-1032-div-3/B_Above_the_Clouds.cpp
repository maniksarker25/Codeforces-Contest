#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >>s;
        bool found = false;
        for (int i = 0; i < n - 2; i++) {
        string a = s.substr(0, i + 1);
        string c = s.substr(i + 2);
        char b = s[i + 1];
        string ac = a + c;

        if (ac.find(b) != string::npos) {
            found = true;
            break;
        }
        }
        if (found) cout << "Yes" <<endl;
        else cout << "No" << endl;
    }
    
    return 0;
}