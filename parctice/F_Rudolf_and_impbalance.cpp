#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int ll
#define endl "\n"
#define pb push_back
#define mod 1000000007
#define N 500010
#define inf 100000000000000000

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int testcases = 1;
    cin>>testcases;
    while (testcases--)
    {
        // 1. keep it simple
        int n,m,k;
        cin>>n>>m>>k;
        int a[n];
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++)
        {
        	cin>>a[i];
        	if(i>0)
        		vp.pb({a[i]-a[i-1], i-1});
        }
        sort(vp.rbegin(), vp.rend());
        vector<int>d(m),f(k);
        for(int i=0;i<m;i++)
        	cin>>d[i];
        for(int i=0;i<k;i++)
        	cin>>f[i];
        if(vp.size()>1 and vp[0].first == vp[1].first)
        {
        	cout<<vp[0].first<<endl;
        	continue;
        }
        sort(d.begin(), d.end());
        sort(f.begin(), f.end());
        int l = vp[0].second;
        int r = l+1;
        int val = (a[l]+a[r])/2;
        int ans = vp[0].first;
        for(int i=0;i<m;i++)
        {
        	int req = val-d[i];
        	int pos = lower_bound(f.begin(), f.end(), req)-f.begin();
        	if(pos < k and pos>=0)
        	{
        		int newval = f[pos]+d[i];
        		if(newval < a[r] and newval>a[l])
        		{
        			int temp = max({a[r]-newval, newval-a[l]});
        			ans = min(ans, temp);
        		}
        	}
        	pos--;
        	if(pos >=0 and pos<k)
        	{
        		int newval = f[pos]+d[i];
        		if(newval < a[r] and newval>a[l])
        		{
        			int temp = max({a[r]-newval, newval-a[l]});
        			ans = min(ans, temp);
        		}
        	}
        }
    	if(vp.size()>1)
    		ans = max({vp[1].first, ans});
    	cout<<ans<<endl;
    }
}
