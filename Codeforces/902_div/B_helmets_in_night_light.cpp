#include<bits/stdc++.h>
using namespace std;
using vi=vector<int>;
using vvi = vector<vi>;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        vvi a(n,vector<int> (2));
        for(int i=0;i<n;i++){
            cin>>a[i][1];
        }
        for(int i=0;i<n;i++){
            cin>>a[i][0];
        }
        map<int, long long> mp;
        mp[p] = n;
        sort(a.begin(),a.end());
        long long ans = 0;
        for(int i=0;i<n;i++){
            int mn = mp.begin()->first;
            ans +=mn;
            mp[a[i][0]] +=a[i][1];
            mp[mn]--;
            if(mp[mn]==0) mp.erase(mn);
        }
        cout<<ans<<endl;
    }
    return 0;
}