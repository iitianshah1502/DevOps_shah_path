#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int m;
    cin >> m;
    
    vector<int> bits (31, 0);
    
    while (m--) {
        int t, v;
        cin >> t >> v;
        
        if (t == 1) {
            bits[v]++;
        }
        
        else {
            for (int i = 29; i >= 0; i--) {
                int mn = min (v >> i, bits[i]);
                v -= mn * (1 << i);
            }
            cout << (v == 0 ? "YES" : "NO") << endl;
        }
    }
    
    return 0;
}
