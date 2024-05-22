#include <bits/stdc++.h>
using namespace std;
void solve()
{   
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(char ch:s) if(ch=='U') count++;
    if(count%2==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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