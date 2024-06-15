#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
int MinTri(int i, int j, vvi &grid, vvi &dp)
{
    // base case
    int n = grid.size();
    if (i == n - 1)
        return grid[i][j];
    if (dp[i][j] != -1)
        return dp[i][j];

    // recursion call
    int down = grid[i][j] + MinTri(i + 1, j, grid, dp);
    int diagonal = grid[i][j] + MinTri(i + 1, j + 1, grid, dp);

    return dp[i][j] = min(down, diagonal);
}
