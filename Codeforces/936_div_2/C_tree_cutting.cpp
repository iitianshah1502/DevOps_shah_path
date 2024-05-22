#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t; cin >> t;
    while(t--) {
        // this snipet is simple input
        int n, k; cin >> n >> k;
        vector<int>adj[n + 1];
        for(int i = 1; i < n; i++) {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        // for logic 
        int left = 0, right = n, answer = 0;

        auto ok = [&](int treeSz) {

            int cuts = 0;

            function<int(int, int)>dfs = [&](int node, int parent) {

                int sz = 1;

                for(auto &i : adj[node]) {
                    if(i != parent) {
                        sz += dfs(i, node);
                    }
                }

                if(sz >= treeSz) sz = 0, cuts++;

                return sz;

            }; dfs(1, 1);

            return cuts > k;
        };
            // this snipet is binary search for predicate function
        while(left <= right) {
            int mid = (left + right) / 2;
            if(ok(mid)) answer = mid, left = mid + 1;
            else right = mid - 1;
        }

        cout << answer << "\n";
    }
    return 0;
}
