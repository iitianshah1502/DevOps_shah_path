#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

const int N =  (int)(5 * 1e5 + 10);

int pre[N];
signed main() {

    int T = 1;
    cin >> T;


    while (T--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<2*k+10;i++) pre[i]=0;

        vector<pair<int, int>>vec;
        for(int i =0;i<n/2;i++) vec.push_back({min(a[i], a[n - i - 1]), max(a[i], a[n - i - 1])});
        map<int, int>mpp;
        for (auto it : vec)
        {
            int l = it.first + 1;
            int r = it.second + k;

            mpp[it.first + it.second]++;

            pre[l] += 1;
            pre[r + 1] -= 1;
        } int sum = 0;
        for(int i=0;i<2*k+10;i++)
        {
            sum += pre[i];
            pre[i] = sum;
        }

        int mini = n;

        for (int i = 2; i <= 2 * k; i++)
        {
            int cnt1 = (pre[i] - mpp[i]);
            int cnt2 = mpp[i];

            int cnt3 = (n / 2) - (cnt2) - cnt1;
            //cout << i << " " << cnt1 << " " << cnt2 << " " << cnt3 << endl;

            int cnt = cnt1 + (cnt3 * 2);
            //cout << cnt << endl;
            mini = min(cnt, mini);
        }
        cout<<mini<<endl;
    }
return 0;

}





