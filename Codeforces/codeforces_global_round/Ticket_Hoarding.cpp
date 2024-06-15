#include <bits/stdc++.h>
using namespace std;


#define int long long

int32_t main() {
    // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    auto solve = [&] () {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n);
        for (int &x: a) cin >> x;

       

        sort(a.begin(), a.end());
        int bought = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int mn = min(k - bought, m);
            int cost = mn * (a[i] + bought);
            ans += cost;
            bought += mn;
        }

        cout << ans << endl;
    };
    
    int t;
    cin >> t;
    
    for (int tc = 1; tc <= t; tc++) {
        solve();
    }

    return 0;
}
