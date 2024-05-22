
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;

        string ans = "";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) {
                ans += (char)('a' + j);
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}
