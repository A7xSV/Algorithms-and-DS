// Question : https://www.hackerrank.com/challenges/ctci-connected-cell-in-a-grid/problem

#include <bits/stdc++.h>

using namespace std;

int dfs(vector< vector<int> > &v, int i, int j) {
    if (i < 0 || j < 0 || i >= v.size() || j >= v[0].size() || v[i][j] != 1)
        return 0;
    v[i][j] = 0;
    
    return 1 + dfs(v, i - 1, j - 1)
             + dfs(v, i - 1, j)
             + dfs(v, i - 1, j + 1)
             + dfs(v, i, j - 1)
             + dfs(v, i, j + 1)
             + dfs(v, i + 1, j - 1)
             + dfs(v, i + 1, j)
             + dfs(v, i + 1, j + 1);
}

int getLargestRegion(vector< vector<int> > v) {
    int result = 0;
    
    for (int i = 0; i < v.size(); i++)
        for (int j = 0; j < v[0].size(); j++)
            if (v[i][j] == 1) {
                int count = dfs(v, i, j);
                result = max(result, count);
            }
    
    return result;
}

int main() {
    int n, m;
    cin >> n;
    cin >> m;
    vector< vector<int> > v(n, vector<int>(m));
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
    
    cout << getLargestRegion(v);
}
