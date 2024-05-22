#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a,b,m;
    cin>>a>>b>>m;
    // lets come to logic and impletation
    long long ans = m/a+m/b+2;
    cout<<ans<<endl;

}
int main(){
    int t =1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}