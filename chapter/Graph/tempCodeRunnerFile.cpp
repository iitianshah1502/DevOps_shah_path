// dfs -- depth first search
// for tree
// in tree we can avoid visited aray but in graph it is necessary to include visited array
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
using ll = long long;
using vi = vector<int>;
using vvi = vector<int>;
#define pb push_back
// vector<int>g[N];
// bool vis[N];

void dfs(int i, int j, vector<vector<bool>> &vis, vector<vector<char>> &mp, int n, int m)
{
    // base case
    if (i < 0 || i >= n || j < 0 || j >= m)
        return;

    // 1. take action on the vertex after entering the vertex
    if (vis[i][j] || mp[i][j] == '#')
        return;
    vis[i][j] = true;
    // Directions arrays for movement in 4 directions (up, down, left, right)
    int rowDirection[] = {-1, 1, 0, 0};
    int colDirection[] = {0, 0, -1, 1};

    // Explore all 4 possible directions
    for (int x = 0; x < 4; x++)
    {
        int newRow = i + rowDirection[x];
        int newCol = j + colDirection[x];
        dfs(newRow, newCol, vis, mp, n, m);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> mp(n, vector<char>(m));
    for (auto &i : mp)
        for (auto &j : i)
            cin >> j;
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mp[i][j] != '#' && !vis[i][j])
            {
                cnt++;
                dfs(i, j, vis, mp, n, m);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}