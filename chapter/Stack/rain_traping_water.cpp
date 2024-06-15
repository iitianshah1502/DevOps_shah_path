#include<bits/stdc++.h>
using namespace std;

int RainTrapWater(vector<int>& arr) {
    int n = arr.size();
    vector<int> mxl(n);
    vector<int> mxr(n);
    mxl[0] = arr[0];
    for (int i = 1; i < n; i++) {
        mxl[i] = max(mxl[i - 1], arr[i]);
    }
    mxr[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        mxr[i] = max(mxr[i + 1], arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += abs(min(mxr[i],mxl[i])-arr[i]);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> vi(n);  // Properly initialize the vector with size n
    for (int i = 0; i < n; i++) {
        cin >> vi[i];
    }
    cout << RainTrapWater(vi);
    return 0;
}
