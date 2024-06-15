#include<bits/stdc++.h>
using namespace std;
void shah()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i] %=k;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        a.push_back(a[i]+k);
    }
    int ans = 2e9+1;
    for(int i=0;i<n;i++)
    {
        a.push_back( min(ans,(a[i+n-1]-a[i])));
    }
    for(auto it : a)
    {
        cout<<it<<" ";
    }
}
int main(){
    shah();
}