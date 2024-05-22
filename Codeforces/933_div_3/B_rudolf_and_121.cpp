#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        bool flag = false;
        for (int i = 0; i < n - 2; i++) {
            if (a[i + 1] >= 2 * a[i]) {
                a[i + 1] -= 2 * a[i];
                a[i + 2] -= a[i];
                a[i] = 0;
            } else {
                flag = true;
                break;
            }
        }
        if (flag || a.back() != 0)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
