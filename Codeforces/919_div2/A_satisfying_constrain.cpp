#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=1 ;
    cin>>t;
    while(t--){
            int n; // no fo constrain
    cin>>n;
    int l=1,r=1e9;
    set<int>s;// for store data in order
    for(int i=0;i<n;i++){
        int t,x; // t is type and x is some integer
        cin>>t>>x;
        if(t==1) l = max(l,x);
        if(t==2) r = min(r,x);
        if(t==3) s.insert(x);
    }
    if(r<l) {
        cout<<0<<endl;
        continue;
    }
    int ans = r-l+1;
    for(auto &i : s) ans -= (i>=l && i<=r);
    cout<<ans<<endl;
    }
    return 0;
}