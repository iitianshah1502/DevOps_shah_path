#include<bits/stdc++.h>
using namespace std;

const int long long N = 1001000;
int long long dp[N];
const int M = 1e9+7;

void solve() {
    int long long n;
    cin >> n;
    
    // Initialize dp array with 0
    memset(dp, 0, sizeof(dp));
    
    // Base case
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i - j >= 0) {
                dp[i] += dp[i - j];
                dp[i] %= M;
            }
        }
    }

    cout << dp[n] << endl;
}

signed main() {
    solve();
    return 0;
}
