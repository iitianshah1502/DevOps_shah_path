#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>a(n-1);
        for(long long i=0;i<n-1;i++)
        {
            cin>>a[i];
        }
        vector<long long>ans;
        ans.push_back(a[n-2]);
        ans.push_back(1e9);
        for(long long i = n-3;i>=0;i--)
        {
            ans.push_back(ans.back()-a[i]);
        }
        reverse(ans.begin(),ans.end());
        for(auto it :ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}