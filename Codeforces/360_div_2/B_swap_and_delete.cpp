#include<bits/stdc++.h>
using namespace std;
void solve(){
    string str;
    cin>>str;
    int n = str.length();
    vector<int>cnt(2,0);
    for(int i=0;i<n;i++){
        cnt[str[i]-'0']++;
    }
    for(int i=0;i<n;i++){
        int req = (str[i]-'0')^1;
        if(cnt[req]==0){
            cout<<n-i<<endl;
            return ;
        }
        cnt[req]--;
    }
    cout<<0<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}