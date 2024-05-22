#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int>st;
    for(int i=0;i<=n;i++) st.insert(i);
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            ans[i] = *st.begin();
            st.erase(st.begin());
        }
        else{
            int x = *st.begin()-a[i];
            ans[i] = x;
            st.erase(x);
        }
    }
    for(int &x :ans) cout<<x<<" ";
    cout<<endl;
}
int main(){
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}