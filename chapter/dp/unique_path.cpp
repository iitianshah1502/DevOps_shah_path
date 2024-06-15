#include<bits/stdc++.h>
using namespace std;
using vi  = vector<int>;
using vvi = vector<vi>;

int UniquePath(int m, int n, vvi &dp) {
    // base case
    if (m == 0 && n == 0) {
        return 1;
    }
    if (m < 0 || n < 0) {
        return 0;
    }
    // this is for dp
    if (dp[m][n] != -1) return dp[m][n];
    // recursion function
    int up = UniquePath(m - 1, n, dp);
    int left = UniquePath(m, n - 1, dp);
    return dp[m][n] = up + left;
}

int main() {
    int m = 3, n = 2;
    vvi dp(m, vector<int>(n, -1));
    cout << UniquePath(m - 1, n - 1, dp);  // Use m-1 and n-1 for correct indexing
    return 0;
}

