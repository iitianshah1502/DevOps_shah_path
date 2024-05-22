#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int>a(x);
    for(int i=0;i<x;i++) cin>>a[i],a[i]--;
    set<int>st(a.begin(),a.end());
    int ans = x-2;
    for(int i=0;i<x;i++)
    {
        int t1 =(a[i]+1)%n;
        int t2 = (a[i]+2)%n;
        if(!st.count(t1)&& st.count(t2)) ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}