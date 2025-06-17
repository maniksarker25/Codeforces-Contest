#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >>t;
    while(t--){
        int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));
    int maxVal = 0;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
            maxVal = max(maxVal, grid[i][j]);
        }

    set<int> maxRows, maxCols;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (grid[i][j] == maxVal) {
                maxRows.insert(i);
                maxCols.insert(j);
            }

   
        if((maxRows.size() == 1 || maxCols.size() == 1)){
            cout << maxVal - 1 << endl;
        }
        else{
            cout << maxVal << endl;
        }
        }
    
    return 0;
}