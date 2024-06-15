#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
vi StockSpan(vector<int>&arr,int n)
{
    vi ans;
    stack<pair<int,int>>s;
    for(int i=0;i<n;i++)
    {
        if(s.size()==0) ans.push_back(-1);
        else if(s.size()>0 && s.top().first>arr[i]) ans.push_back(s.top().second);
        else if (s.size()>0 && s.top().first<=arr[i])
        {
            while(s.size()>0 && s.top().first<=arr[i]) 
            {
                s.pop();
            }
            if(s.size()== 0) ans.push_back(-1);
            else ans.push_back(s.top().second);
        }
        s.push({arr[i],i});
    }
    for(int i = 0;i<ans.size();i++)
    {
        ans[i] = i-ans[i];
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int >v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int >ans = StockSpan(v,n);
    for(auto it : ans)
    {
        cout<<it<<" ";
    }
    return 0;
}