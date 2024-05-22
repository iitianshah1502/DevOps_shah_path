#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t; cin >> t;
    while(t--) {
        int n, k, x, sum = 0, answer = LLONG_MIN; 
        
        cin >> n >> k >> x;

        vector<int>a(n), pre(n + 1);

        for(auto &i : a) cin >> i;
        sort(a.begin(), a.end(), greater());
        // prefix sum for calculating range-based sum
        for(int i = 1; i <= n; i++) pre[i] = pre[i - 1] + a[i - 1];
        // lambda function
        auto maxK = [&](int idx) {
            return pre[min(n, idx + x)] - pre[idx];
        };

        sum = accumulate(a.begin(), a.end(), 0ll);

        for(int i = 0; i <= k; i++) {
            answer = max(answer, sum - 2 * maxK(i));
            sum -= a[i];
        }

        cout << answer << "\n";
    }
    return 0;
}
