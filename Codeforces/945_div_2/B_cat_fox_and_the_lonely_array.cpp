#include <bits/stdc++.h>
using namespace std;

int main() {
    
    auto solve = [&] () {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int ans = 1;

        for (int j = 0; j < 30; j++) {
            vector<int> occ;
            for (int i = 0; i < n; i++) {
                if (a[i] >> j & 1) occ.push_back(i);
            }
            int mx = 0, last = -1;
            for (auto it : occ) {
                mx = max(mx, it - last);
                last = it;
            }
            mx = max(mx, n - last);
            if (last != -1) ans = max(ans, mx);
        }

        cout << ans << endl;
    };
    
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}
