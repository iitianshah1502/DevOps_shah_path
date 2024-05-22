#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int k1 =1;
    int k2 = min(n-1,m)+m/n;
    int k3 = m+1-k1-k2;
    if(k==1)cout<<k1<<endl;
    else if(k==2) cout<<k2<<endl;
    else if(k==3) cout<<k3<<endl;
    else cout<<0<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}