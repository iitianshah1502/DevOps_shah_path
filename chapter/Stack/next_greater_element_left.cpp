#include<bits/stdc++.h>
using namespace std;
vector<long long>NGL(vector<long long>arr,int n)
{
    vector<long long> ans;
    stack<long long>s;
    for(int i=0;i<n;i++)
    {
        if(s.size()==0) ans.push_back(-1);
        else if (s.size()>0 && s.top()>arr[i]) ans.push_back(s.top());
        else if(s.size()>0 && s.top()<=arr[i])
        {
            while(s.size()>0 && s.top()<=arr[i])
            {
                s.pop();
            }
            if(s.size()==0) ans.push_back(-1);
            else ans.push_back(s.top());
        }
        s.push(arr[i]);
        
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<long long >v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<long long >ans = NGL(v,n);
    for(auto it : ans)
    {
        cout<<it<<" ";
    }
    return 0;
}