#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    auto solve = [&] () -> string {
        int n, k, pb, ps;
        cin >> n >> k >> pb >> ps;
        pb--, ps--;

        vector<int> p(n), a(n);
        for (int i = 0; i < n; i++) cin >> p[i], p[i]--;
        for (int i = 0; i < n; i++) cin >> a[i];

        auto find_answer = [&] (int src) {
            int idx = src;
            int mx = 0;
            for (int i = 0; i < n; i++) {
                mx = max(mx, a[idx]);
                idx = p[idx];
                if (idx == src) break;
            }
            idx = src;
            long long ans = 0, sum = 0;
            for (int i = 0; i < k; i++) {
                ans = max(ans, sum + 1LL * a[idx] * (k - i));
                if (a[idx] == mx) break;
                sum += a[idx];
                idx = p[idx];
            }
            return ans;
        };

        long long ansb = find_answer(pb);
        long long anss = find_answer(ps);

        if (ansb > anss) return "Bodya";
        if (ansb < anss) return "Sasha";
        return "Draw";
    };
    
    int t = 1;
    cin >> t;
    
    for (int tc = 1; tc <= t; tc++) {
        cout << solve() << endl;
    }
    
    return 0;
}