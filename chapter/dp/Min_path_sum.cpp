#include <bits/stdc++.h>
using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;

class Solution {
private:
    int MinPath(int i, int j, vvi &grid, vvi &dp) {
        // base case 
        if (i == 0 && j == 0) return grid[0][0];
        if (i < 0 || j < 0) return INT_MAX;
        if (dp[i][j] != -1) return dp[i][j];

        int up = (i > 0) ? grid[i][j] + MinPath(i-1, j, grid, dp) : INT_MAX;
        int left = (j > 0) ? grid[i][j] + MinPath(i, j-1, grid, dp) : INT_MAX;

        return dp[i][j] = min(up, left);
    }

public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vvi dp(n, vi(m, -1));  // Correctly name and initialize the dp vector
        return MinPath(n-1, m-1, grid, dp);
    }
};

