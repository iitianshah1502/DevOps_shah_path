#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    // lets apply the logic and solve 
    long long ans = 0;
    // this snipet for at index m tak
    for(int i = n-1;i>=m;i--){
        ans +=min(a[i],b[i]);
    }
    long long sum =0,mn = 1e15;
    for(int i = m-1;i>=0;i--){
        mn = min(mn,a[i]+sum);
        sum +=b[i];
    }
    ans += mn;
    cout<<ans<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}