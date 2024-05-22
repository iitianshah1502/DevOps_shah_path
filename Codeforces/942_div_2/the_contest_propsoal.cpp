#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int count =0,k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[k++])
        {
            count++;
            i--;
        }
        if(k>n-1) break;
    }
    cout<<count<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
