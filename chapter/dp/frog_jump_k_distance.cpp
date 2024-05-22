#include <bits/stdc++.h>
using namespace std;

int frog_k(int ind, vector<int>& a, int k, vector<int>& dp) {
    // base case
    if (ind == 0) return 0;
    if (dp[ind] != -1) return dp[ind];
    int minE = INT_MAX;
    for (int j = 1; j <= k; j++) {  // Start j from 1, and ensure j is within bounds
        if (ind - j >= 0) {
            int jumpE = frog_k(ind - j, a, k, dp) + abs(a[ind] - a[ind - j]);
            minE = min(minE, jumpE);
        } else {
            break;
        }
    }
    return dp[ind] = minE;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> height(n);
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    vector<int> dp(n+1, -1);  // Change dp size to n
    cout << frog_k(n - 1, height, k, dp) << endl;
    return 0;
}
