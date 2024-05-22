#include <bits/stdc++.h>
using namespace std;


int32_t main() {
    auto solve = [&] () {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        k--;

        auto check = [&] (int start) {
            int res = 0;
            if (start > 0) res = 1;
            for (int i = start + 1; i < n; i++) {
                if (a[i] > a[start]) break;
                res++;
            }
            return res;
        };

        int ans = 0;
        swap(a[k], a[0]);
        ans = check(0);
        swap(a[k], a[0]);

        for (int i = 0; i < k; i++) {
            if (a[i] > a[k]) {
                swap(a[i], a[k]);
                ans = max(ans, check(i));
                swap(a[i], a[k]);
                break;
            }
        }

        cout << ans << endl;
    };
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
