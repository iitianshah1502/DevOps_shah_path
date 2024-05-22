#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;// a for introvert b for extrovert and c for universal
    cin>>a>>b>>c;
    long long ans = a;
    ans +=b/3;
    b %=3;
    if(b>0 && b-3>c){
        cout<<-1<<endl;
        return ;
    }
    if(b>0){
        ans++;
        c -=3-b;
    }
    b=0;
    ans +=(c+2)/3;
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