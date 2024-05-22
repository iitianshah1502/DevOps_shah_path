#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int to_find;
    cin >> to_find;
    int lo = 0, hi = n - 1; // Corrected

    while (hi - lo > 1) {
        int mid = lo + (hi - lo) / 2; // Corrected
        if (a[mid] < to_find) {
            lo = mid + 1;
        }
        else {
            hi = mid; // Corrected
        }
    }
    if (a[lo] == to_find)
        cout << lo << endl;
    else if (a[hi] == to_find)
        cout << hi << endl;
    else
        cout << "Not found" << endl; // Moved outside of the loop

    return 0;
}
